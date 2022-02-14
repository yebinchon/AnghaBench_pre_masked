
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int secp256k1_scalar ;
typedef int secp256k1_num ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *,int *) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int) ;

void FUNC_11(void) {
    int VAR_0;
    secp256k1_scalar VAR_1;
    secp256k1_num VAR_2;
    secp256k1_num VAR_3;
    secp256k1_num VAR_4, VAR_5, VAR_6, VAR_7;
    FUNC_2(&VAR_2);
    if (FUNC_8(1)) {
        FUNC_1(&VAR_2);
    }
    FUNC_2(&VAR_3);
    if (FUNC_8(1)) {
        FUNC_1(&VAR_3);
    }
    FUNC_3(&VAR_4, &VAR_2, &VAR_3);
    FUNC_3(&VAR_5, &VAR_3, &VAR_2);
    FUNC_7(&VAR_6, &VAR_2, &VAR_3);
    FUNC_7(&VAR_7, &VAR_3, &VAR_2);
    FUNC_0(FUNC_4(&VAR_4, &VAR_5));
    FUNC_0(!FUNC_4(&VAR_4, &VAR_6));
    FUNC_6(&VAR_7);
    FUNC_0(FUNC_4(&VAR_7, &VAR_6));
    FUNC_0(!FUNC_4(&VAR_7, &VAR_2));
    FUNC_3(&VAR_7, &VAR_7, &VAR_3);
    FUNC_0(FUNC_4(&VAR_7, &VAR_2));
    FUNC_0(!FUNC_4(&VAR_5, &VAR_2));
    FUNC_7(&VAR_5, &VAR_5, &VAR_3);
    FUNC_0(FUNC_4(&VAR_5, &VAR_2));


    FUNC_10(&VAR_1, 1);
    FUNC_9(&VAR_2, &VAR_1);
    FUNC_0(FUNC_5(&VAR_2));

    FUNC_9(&VAR_3, &VAR_1);
    for (VAR_0 = 0; VAR_0 < 250; ++VAR_0) {
        FUNC_3(&VAR_2, &VAR_2, &VAR_2);
        FUNC_3(&VAR_4, &VAR_2, &VAR_3);
        FUNC_0(!FUNC_5(&VAR_4));
    }
}
