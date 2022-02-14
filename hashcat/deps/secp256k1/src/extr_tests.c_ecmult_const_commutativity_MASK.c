
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int secp256k1_scalar ;
typedef int secp256k1_gej ;
typedef int secp256k1_ge ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int *,int) ;
 int VAR_0 ;
 int FUNC_3 (int *,int *) ;

void FUNC_4(void) {
    secp256k1_scalar VAR_1;
    secp256k1_scalar VAR_2;
    secp256k1_gej VAR_3;
    secp256k1_gej VAR_4;
    secp256k1_ge VAR_5;
    secp256k1_ge VAR_6;
    FUNC_1(&VAR_1);
    FUNC_1(&VAR_2);

    FUNC_2(&VAR_3, &VAR_0, &VAR_1, 256);
    FUNC_2(&VAR_4, &VAR_0, &VAR_2, 256);
    FUNC_3(&VAR_5, &VAR_3);
    FUNC_3(&VAR_6, &VAR_4);
    FUNC_2(&VAR_3, &VAR_5, &VAR_2, 256);
    FUNC_2(&VAR_4, &VAR_6, &VAR_1, 256);
    FUNC_3(&VAR_5, &VAR_3);
    FUNC_3(&VAR_6, &VAR_4);
    FUNC_0(&VAR_5, &VAR_6);
}
