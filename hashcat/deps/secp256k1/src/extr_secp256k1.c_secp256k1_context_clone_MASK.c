
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int error_callback; } ;
typedef TYPE_1__ secp256k1_context ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,size_t) ;
 TYPE_1__* FUNC_2 (TYPE_1__ const*,TYPE_1__*) ;
 size_t FUNC_3 (TYPE_1__ const*) ;

secp256k1_context* FUNC_4(const secp256k1_context* VAR_0) {
    secp256k1_context* VAR_1;
    size_t VAR_2;

    FUNC_0(VAR_0 != ((void*)0));
    VAR_2 = FUNC_3(VAR_0);
    VAR_1 = (secp256k1_context*)FUNC_1(&VAR_0->error_callback, VAR_2);
    VAR_1 = FUNC_2(VAR_0, VAR_1);
    return VAR_1;
}
