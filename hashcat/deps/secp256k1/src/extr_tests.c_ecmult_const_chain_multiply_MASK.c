
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int secp256k1_scalar ;
typedef int secp256k1_gej ;
typedef int secp256k1_ge ;


 int FUNC_0 (int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int) ;
 int FUNC_1 (int,int,int,int,int,int,int,int) ;
 int FUNC_2 (int *,int const*) ;
 int FUNC_3 (int *,int *,int const*,int) ;
 int VAR_0 ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;

void FUNC_6(void) {

    const secp256k1_scalar VAR_1 = FUNC_1(
        0x4968d524, 0x2abf9b7a, 0x466abbcf, 0x34b11b6d,
        0xcd83d307, 0x827bed62, 0x05fad0ce, 0x18fae63b
    );
    const secp256k1_gej VAR_2 = FUNC_0(
        0x5494c15d, 0x32099706, 0xc2395f94, 0x348745fd,
        0x757ce30e, 0x4e8c90fb, 0xa2bad184, 0xf883c69f,
        0x5d195d20, 0xe191bf7f, 0x1be3e55f, 0x56a80196,
        0x6071ad01, 0xf1462f66, 0xc997fa94, 0xdb858435
    );
    secp256k1_gej VAR_3;
    secp256k1_ge VAR_4;
    int VAR_5;

    FUNC_5(&VAR_3, &VAR_0);
    for (VAR_5 = 0; VAR_5 < 100; ++VAR_5) {
        secp256k1_ge VAR_6;
        FUNC_4(&VAR_6, &VAR_3);
        FUNC_3(&VAR_3, &VAR_6, &VAR_1, 256);
    }
    FUNC_4(&VAR_4, &VAR_3);
    FUNC_2(&VAR_4, &VAR_2);
}
