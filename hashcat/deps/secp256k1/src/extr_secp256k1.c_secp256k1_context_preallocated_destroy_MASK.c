
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ecmult_gen_ctx; int ecmult_ctx; } ;
typedef TYPE_1__ secp256k1_context ;


 int FUNC_0 (int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(secp256k1_context* VAR_1) {
    FUNC_0(VAR_1 != VAR_0);
    if (VAR_1 != ((void*)0)) {
        FUNC_1(&VAR_1->ecmult_ctx);
        FUNC_2(&VAR_1->ecmult_gen_ctx);
    }
}
