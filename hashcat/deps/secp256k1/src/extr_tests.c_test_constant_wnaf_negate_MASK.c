
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int secp256k1_scalar ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;

void FUNC_6(const secp256k1_scalar *VAR_0) {
    secp256k1_scalar VAR_1 = *VAR_0;
    secp256k1_scalar VAR_2 = *VAR_0;
    int VAR_3 = 1;
    int VAR_4 = 1;

    if (!FUNC_3(&VAR_1, 0, 1)) {
        FUNC_5(&VAR_1, &VAR_1);
        VAR_3 = -1;
    }
    VAR_4 = FUNC_1(&VAR_2, FUNC_4(&VAR_2));
    FUNC_0(VAR_3 == VAR_4);
    FUNC_0(FUNC_2(&VAR_1, &VAR_2));
}
