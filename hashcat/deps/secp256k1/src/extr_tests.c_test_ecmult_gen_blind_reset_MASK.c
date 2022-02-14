
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int secp256k1_scalar ;
typedef int secp256k1_gej ;
struct TYPE_3__ {int initial; int blind; } ;
struct TYPE_4__ {TYPE_1__ ecmult_gen_ctx; } ;


 int FUNC_0 (int ) ;
 TYPE_2__* VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int *,int *) ;

void FUNC_4(void) {

    secp256k1_scalar VAR_1;
    secp256k1_gej VAR_2;
    FUNC_2(&VAR_0->ecmult_gen_ctx, 0);
    VAR_1 = VAR_0->ecmult_gen_ctx.blind;
    VAR_2 = VAR_0->ecmult_gen_ctx.initial;
    FUNC_2(&VAR_0->ecmult_gen_ctx, 0);
    FUNC_0(FUNC_3(&VAR_1, &VAR_0->ecmult_gen_ctx.blind));
    FUNC_0(FUNC_1(&VAR_2, &VAR_0->ecmult_gen_ctx.initial));
}
