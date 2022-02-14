
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ecmult_ctx; int ecmult_gen_ctx; } ;
typedef TYPE_1__ secp256k1_context ;


 size_t FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;

size_t FUNC_4(const secp256k1_context* VAR_2) {
    size_t VAR_3 = FUNC_0(sizeof(secp256k1_context));
    FUNC_1(VAR_2 != ((void*)0));
    if (FUNC_3(&VAR_2->ecmult_gen_ctx)) {
        VAR_3 += VAR_1;
    }
    if (FUNC_2(&VAR_2->ecmult_ctx)) {
        VAR_3 += VAR_0;
    }
    return VAR_3;
}
