
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ecmult_gen_ctx; } ;
typedef TYPE_1__ secp256k1_context ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned char const*) ;
 scalar_t__ FUNC_2 (int *) ;

int FUNC_3(secp256k1_context* VAR_0, const unsigned char *VAR_1) {
    FUNC_0(VAR_0 != ((void*)0));
    if (FUNC_2(&VAR_0->ecmult_gen_ctx)) {
        FUNC_1(&VAR_0->ecmult_gen_ctx, VAR_1);
    }
    return 1;
}
