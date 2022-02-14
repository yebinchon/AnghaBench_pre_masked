
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int secp256k1_scalar ;


 int FUNC_0 (int) ;
 int FUNC_1 (int*,int,int const*,int) ;
 int FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (int *,int const*) ;
 int FUNC_4 (int *,int *,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int) ;

void FUNC_7(const secp256k1_scalar *VAR_0, int VAR_1) {
    secp256k1_scalar VAR_2, VAR_3, VAR_4;
    int VAR_5[256];
    int VAR_6 = -1;
    int VAR_7;
    int VAR_8;
    FUNC_6(&VAR_2, 0);
    FUNC_6(&VAR_3, 2);
    VAR_8 = FUNC_1(VAR_5, 256, VAR_0, VAR_1);
    FUNC_0(VAR_8 <= 256);
    for (VAR_7 = VAR_8-1; VAR_7 >= 0; VAR_7--) {
        int VAR_9 = VAR_5[VAR_7];
        FUNC_4(&VAR_2, &VAR_2, &VAR_3);
        if (VAR_9) {
            FUNC_0(VAR_6 == -1 || VAR_6 >= VAR_1-1);
            VAR_6=0;
            FUNC_0((VAR_9 & 1) == 1);
            FUNC_0(VAR_9 <= (1 << (VAR_1-1)) - 1);
            FUNC_0(VAR_9 >= -(1 << (VAR_1-1)) - 1);
        } else {
            FUNC_0(VAR_6 != -1);
            VAR_6++;
        }
        if (VAR_9 >= 0) {
            FUNC_6(&VAR_4, VAR_9);
        } else {
            FUNC_6(&VAR_4, -VAR_9);
            FUNC_5(&VAR_4, &VAR_4);
        }
        FUNC_2(&VAR_2, &VAR_2, &VAR_4);
    }
    FUNC_0(FUNC_3(&VAR_2, VAR_0));
}
