
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int secp256k1_scalar ;
typedef int secp256k1_gej ;
typedef int secp256k1_ge ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int) ;
 int FUNC_2 (int,int,int,int,int,int,int,int) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *,int *,int) ;
 int FUNC_5 (int *) ;

void FUNC_6(void) {

    secp256k1_ge VAR_0 = FUNC_1(
        0x6d986544, 0x57ff52b8, 0xcf1b8126, 0x5b802a5b,
        0xa97f9263, 0xb1e88044, 0x93351325, 0x91bc450a,
        0x535c59f7, 0x325e5d2b, 0xc391fbe8, 0x3c12787c,
        0x337e4a98, 0xe82a9011, 0x0123ba37, 0xdd769c7d
    );

    secp256k1_scalar VAR_1 = FUNC_2(
        0x649d4f77, 0xc4242df7, 0x7f2079c9, 0x14530327,
        0xa31b876a, 0xd2d8ce2a, 0x2236d5c6, 0xd7b2029b
    );

    secp256k1_ge VAR_2 = FUNC_1(
        0x23773684, 0x4d209dc7, 0x098a786f, 0x20d06fcd,
        0x070a38bf, 0xc11ac651, 0x03004319, 0x1e2a8786,
        0xed8c3b8e, 0xc06dd57b, 0xd06ea66e, 0x45492b0f,
        0xb84e4e1b, 0xfb77e21f, 0x96baae2a, 0x63dec956
    );
    secp256k1_gej VAR_3;
    FUNC_4(&VAR_3, &VAR_0, &VAR_1, 256);

    FUNC_0(FUNC_5(&VAR_0));
    FUNC_3(&VAR_2, &VAR_3);
}
