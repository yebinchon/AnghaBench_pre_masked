
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int secp256k1_scalar ;
typedef int secp256k1_gej ;
typedef int secp256k1_ge ;
struct TYPE_2__ {int ecmult_ctx; int ecmult_gen_ctx; } ;


 int FUNC_0 (int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int *,int *,int*) ;
 int FUNC_3 (int *,int *,int *,int *,int *) ;
 int FUNC_4 (int *,int *,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *,int *,int *) ;
 int FUNC_8 (int *,int) ;

void FUNC_9(void) {
    secp256k1_gej VAR_1;
    secp256k1_ge VAR_2;
    secp256k1_scalar VAR_3;
    secp256k1_scalar VAR_4, VAR_5;
    secp256k1_scalar VAR_6, VAR_7;
    int VAR_8;
    int VAR_9;
    FUNC_1(&VAR_4);
    FUNC_1(&VAR_5);
    FUNC_4(&VAR_0->ecmult_gen_ctx, &VAR_1, &VAR_5);
    FUNC_5(&VAR_2, &VAR_1);
    VAR_9 = FUNC_6(1);
    FUNC_2(&VAR_6, &VAR_7, &VAR_5, &VAR_4, VAR_9?&VAR_8:((void*)0));
    if (VAR_9) {
        FUNC_0(VAR_8 >= 0 && VAR_8 < 4);
    }
    FUNC_0(FUNC_3(&VAR_0->ecmult_ctx, &VAR_6, &VAR_7, &VAR_2, &VAR_4));
    FUNC_8(&VAR_3, 1);
    FUNC_7(&VAR_4, &VAR_4, &VAR_3);
    FUNC_0(!FUNC_3(&VAR_0->ecmult_ctx, &VAR_6, &VAR_7, &VAR_2, &VAR_4));
}
