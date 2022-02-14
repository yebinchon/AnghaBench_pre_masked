
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int secp256k1_scalar ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *,int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int*,int *,int) ;

void FUNC_10(const secp256k1_scalar *VAR_0, int VAR_1) {
    secp256k1_scalar VAR_2, VAR_3;
    int VAR_4[256] = {0};
    int VAR_5;
    int VAR_6;
    secp256k1_scalar VAR_7 = *VAR_0;

    FUNC_7(&VAR_2, 0);
    FUNC_7(&VAR_3, 1 << VAR_1);






    VAR_6 = FUNC_9(VAR_4, &VAR_7, VAR_1);

    for (VAR_5 = FUNC_1(VAR_1)-1; VAR_5 >= 0; --VAR_5) {
        secp256k1_scalar VAR_8;
        int VAR_9 = VAR_4[VAR_5];
        FUNC_0(VAR_9 == 0 || VAR_9 & 1);
        FUNC_0(VAR_9 > -(1 << VAR_1));
        FUNC_0(VAR_9 < (1 << VAR_1));

        FUNC_5(&VAR_2, &VAR_2, &VAR_3);
        if (VAR_9 >= 0) {
            FUNC_7(&VAR_8, VAR_9);
        } else {
            FUNC_7(&VAR_8, -VAR_9);
            FUNC_6(&VAR_8, &VAR_8);
        }
        FUNC_2(&VAR_2, &VAR_2, &VAR_8);
    }

    FUNC_3(&VAR_7, 0, VAR_6 == 1);
    FUNC_0(FUNC_4(&VAR_2, &VAR_7));
}
