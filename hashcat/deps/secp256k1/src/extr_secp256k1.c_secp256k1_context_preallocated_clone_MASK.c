
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int ecmult_ctx; int ecmult_gen_ctx; } ;
typedef TYPE_1__ secp256k1_context ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__ const*,size_t) ;
 size_t FUNC_3 (TYPE_1__ const*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;

secp256k1_context* FUNC_6(const secp256k1_context* VAR_0, void* VAR_1) {
    size_t VAR_2;
    secp256k1_context* VAR_3;
    FUNC_1(VAR_0 != ((void*)0));
    FUNC_0(VAR_1 != ((void*)0));

    VAR_2 = FUNC_3(VAR_0);
    VAR_3 = (secp256k1_context*)VAR_1;
    FUNC_2(VAR_3, VAR_0, VAR_2);
    FUNC_5(&VAR_3->ecmult_gen_ctx, &VAR_0->ecmult_gen_ctx);
    FUNC_4(&VAR_3->ecmult_ctx, &VAR_0->ecmult_ctx);
    return VAR_3;
}
