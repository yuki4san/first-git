#include <stdio.h>

// 4桁の数字を取得して、数字を分割するスクリプトです.
// 今回はデバグモードについてのデモとして使用しています.
// デバグモードをONにすると、printfで4桁の数字を出力するので、
// 自分の書いたコードの挙動がターミナル上で確認できます．
// 現在「数あて」ゲームなるものを作っているので、
// 開発中にはデバグモードをonにして、ゲームをプレイするときはOFFにすると
// 便利です！

/*1) デバグモードON=1、デバグモードOFF=0 */
int debug_mode = 1;

int main(void) {
    /*2) int型で使用する変数を定義します */
    /* i: 入力される数字 */
    /* a: 4桁目の数字 */
    /* b: 3桁目の数字 */
    /* c: 2桁目の数字 */
    /* d: 1桁目の数字 */
    int i, a, b, c, d;

    /*3) Terminal上にゲーム開始の文章を表示します */
    printf("数字を入力してください。\n");
    printf("数字 = ");

    /*4) scanf関数で数字を取得します */
    scanf("%d", &i);

    /*5) 4桁の数字それぞれの値を取得します */
    // 4桁の整数ABCDを1000で割ると、A.BCDの形に数字に変換できる。
    // int型は、「整数」なので小数点以下が切り捨てられる。
    a = i/1000; // 4桁目の取得
    i = i % 1000; // 整数ABCDを1000で割った時の余剰は、BCD
    b = i/100; // 3桁目の取得
    i = i % 100; // 整数BCDを100で割った時の余剰は、CD
    c = i/10; // 2桁目の取得
    i = i % 10; // 整数CDを10で割った時の余剰は、D
    d = i; // 1桁目の取得

　　 /*6) デバグモードがONになっていると、4桁の数字を分解して表示します */
    if( debug_mode == 1) {
        printf("4桁目＝%d\n",a);
        printf("3桁目＝%d\n",b);
        printf("2桁目＝%d\n",c);
        printf("1桁目＝%d\n",d);
    }

    return 0;
    }