
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int secp256k1_scalar ;
typedef int secp256k1_gej ;
typedef int secp256k1_ge ;
struct TYPE_4__ {int initial; int blind; } ;
struct TYPE_5__ {TYPE_1__ ecmult_gen_ctx; } ;


 int FUNC_0 (int) ;
 TYPE_3__* VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,int *,int *) ;
 int FUNC_5 (TYPE_1__*,unsigned char*) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (unsigned char*) ;
 int FUNC_8 (int *,int *) ;

void FUNC_9(void) {

    secp256k1_scalar VAR_1;
    secp256k1_scalar VAR_2;
    unsigned char VAR_3[32];
    secp256k1_gej VAR_4;
    secp256k1_gej VAR_5;
    secp256k1_gej VAR_6;
    secp256k1_ge VAR_7;
    FUNC_3(&VAR_1);
    FUNC_4(&VAR_0->ecmult_gen_ctx, &VAR_4, &VAR_1);
    FUNC_7(VAR_3);
    VAR_2 = VAR_0->ecmult_gen_ctx.blind;
    VAR_6 = VAR_0->ecmult_gen_ctx.initial;
    FUNC_5(&VAR_0->ecmult_gen_ctx, VAR_3);
    FUNC_0(!FUNC_8(&VAR_2, &VAR_0->ecmult_gen_ctx.blind));
    FUNC_4(&VAR_0->ecmult_gen_ctx, &VAR_5, &VAR_1);
    FUNC_0(!FUNC_2(&VAR_4, &VAR_5));
    FUNC_0(!FUNC_2(&VAR_6, &VAR_0->ecmult_gen_ctx.initial));
    FUNC_6(&VAR_7, &VAR_4);
    FUNC_1(&VAR_7, &VAR_5);
}
