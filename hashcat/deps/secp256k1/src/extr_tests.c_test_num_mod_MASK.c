
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int secp256k1_scalar ;
typedef int secp256k1_num ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int) ;

void FUNC_7(void) {
    int VAR_0;
    secp256k1_scalar VAR_1;
    secp256k1_num VAR_2, VAR_3;


    FUNC_1(&VAR_1);
    FUNC_5(&VAR_2, &VAR_1);
    FUNC_6(&VAR_1, 0);
    FUNC_5(&VAR_3, &VAR_1);
    FUNC_4(&VAR_3, &VAR_2);
    FUNC_0(FUNC_3(&VAR_3));


    FUNC_6(&VAR_1, 1);
    FUNC_5(&VAR_2, &VAR_1);
    FUNC_5(&VAR_3, &VAR_1);
    FUNC_4(&VAR_3, &VAR_2);
    FUNC_0(FUNC_3(&VAR_3));


    FUNC_1(&VAR_1);
    FUNC_5(&VAR_3, &VAR_1);

    for (VAR_0 = 0; VAR_0 < 8; ++VAR_0) {
        FUNC_2(&VAR_3, &VAR_3, &VAR_3);
    }
    FUNC_4(&VAR_3, &VAR_2);
    FUNC_0(FUNC_3(&VAR_3));
}
