
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int secp256k1_scratch ;
typedef int secp256k1_scalar ;
typedef int secp256k1_gej ;
typedef int secp256k1_ge ;
typedef int (* secp256k1_ecmult_multi_func ) (int *,int *,int *,int *,int *,int ,TYPE_1__*,int) ;
struct TYPE_5__ {int * pt; int * sc; } ;
typedef TYPE_1__ ecmult_multi_data ;
struct TYPE_6__ {int error_callback; int ecmult_ctx; } ;


 int FUNC_0 (int) ;
 TYPE_4__* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int * FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int *) ;

void FUNC_4(secp256k1_ecmult_multi_func VAR_2) {
    secp256k1_scalar VAR_3;
    secp256k1_scalar VAR_4[32];
    secp256k1_ge VAR_5[32];
    secp256k1_gej VAR_6;
    ecmult_multi_data VAR_7;
    secp256k1_scratch *VAR_8;

    VAR_7.sc = VAR_4;
    VAR_7.pt = VAR_5;
    FUNC_1(&VAR_3, 0);


    VAR_8 = FUNC_2(&VAR_0->error_callback, 0);
    FUNC_0(!VAR_2(&VAR_0->error_callback, &VAR_0->ecmult_ctx, VAR_8, &VAR_6, &VAR_3, VAR_1, &VAR_7, 1));
    FUNC_3(&VAR_0->error_callback, VAR_8);
}
