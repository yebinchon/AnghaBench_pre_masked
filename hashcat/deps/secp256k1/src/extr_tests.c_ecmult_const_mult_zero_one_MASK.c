
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int secp256k1_scalar ;
typedef int secp256k1_gej ;
typedef int secp256k1_ge ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ,int ,int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int *) ;

void FUNC_9(void) {
    secp256k1_scalar VAR_0 = FUNC_1(0, 0, 0, 0, 0, 0, 0, 0);
    secp256k1_scalar VAR_1 = FUNC_1(0, 0, 0, 0, 0, 0, 0, 1);
    secp256k1_scalar VAR_2;
    secp256k1_gej VAR_3;
    secp256k1_ge VAR_4;
    secp256k1_ge VAR_5;
    FUNC_8(&VAR_2, &VAR_1);

    FUNC_3(&VAR_5);
    FUNC_4(&VAR_3, &VAR_5, &VAR_0, 3);
    FUNC_6(&VAR_4, &VAR_3);
    FUNC_0(FUNC_5(&VAR_4));
    FUNC_4(&VAR_3, &VAR_5, &VAR_1, 2);
    FUNC_6(&VAR_4, &VAR_3);
    FUNC_2(&VAR_4, &VAR_5);
    FUNC_4(&VAR_3, &VAR_5, &VAR_2, 256);
    FUNC_7(&VAR_3, &VAR_3);
    FUNC_6(&VAR_4, &VAR_3);
    FUNC_2(&VAR_4, &VAR_5);
}
