
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int secp256k1_fe ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int *) ;

void FUNC_5(void) {
    secp256k1_fe VAR_0, VAR_1;

    {
        int VAR_2;
        FUNC_3(&VAR_0, 1);
        FUNC_1(&VAR_0, &VAR_0, 1);

        for (VAR_2 = 1; VAR_2 <= 512; ++VAR_2) {
            FUNC_0(&VAR_0, 2);
            FUNC_2(&VAR_0);
            FUNC_4(&VAR_1, &VAR_0);
        }
    }
}
