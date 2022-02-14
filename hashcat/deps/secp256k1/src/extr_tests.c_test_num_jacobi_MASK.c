
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int secp256k1_scalar ;
typedef int secp256k1_num ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *,int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *,int *) ;

void FUNC_12(void) {
    secp256k1_scalar VAR_0;
    secp256k1_scalar VAR_1;
    secp256k1_scalar VAR_2;
    secp256k1_num VAR_3, VAR_4;
    int VAR_5;

    const int VAR_6[10] = { 0, 1, -1, -1, 1, 0, 1, -1, -1, 1 };


    FUNC_10(&VAR_2, 5);
    FUNC_7(&VAR_3, &VAR_2);
    for (VAR_5 = 0; VAR_5 < 10; ++VAR_5) {
        FUNC_10(&VAR_1, VAR_5);
        FUNC_7(&VAR_4, &VAR_1);
        FUNC_0(FUNC_4(&VAR_4, &VAR_3) == VAR_6[VAR_5]);
    }


    FUNC_7(&VAR_3, &VAR_2);

    do {
        secp256k1_num VAR_7;
        FUNC_1(&VAR_0);
        FUNC_7(&VAR_7, &VAR_2);
        FUNC_7(&VAR_4, &VAR_0);
        FUNC_5(&VAR_4, &VAR_7);
    } while (FUNC_3(&VAR_4));


    if (FUNC_4(&VAR_4, &VAR_3) == -1) {
        FUNC_2(&VAR_4, &VAR_4, &VAR_4);
    }


    FUNC_0(FUNC_4(&VAR_4, &VAR_3) == 1);

    FUNC_2(&VAR_4, &VAR_4, &VAR_4);
    FUNC_0(FUNC_4(&VAR_4, &VAR_3) == -1);


    FUNC_9(&VAR_3);
    FUNC_1(&VAR_0);
    FUNC_11(&VAR_0, &VAR_0);

    FUNC_7(&VAR_4, &VAR_0);
    FUNC_0(FUNC_4(&VAR_4, &VAR_3) == 1);

    FUNC_8(&VAR_0, &VAR_0, &VAR_2);
    FUNC_7(&VAR_4, &VAR_0);
    FUNC_0(FUNC_4(&VAR_4, &VAR_3) == -1);

    FUNC_0(FUNC_4(&VAR_3, &VAR_3) == 0);


    FUNC_10(&VAR_1, 1);
    FUNC_7(&VAR_4, &VAR_1);
    FUNC_6(&VAR_4, &VAR_3, &VAR_4);
    FUNC_0(FUNC_4(&VAR_4, &VAR_3) == 1);
}
