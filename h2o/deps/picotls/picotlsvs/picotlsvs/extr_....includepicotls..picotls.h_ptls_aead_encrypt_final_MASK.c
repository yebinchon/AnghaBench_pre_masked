
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t (* do_encrypt_final ) (TYPE_1__*,void*) ;} ;
typedef TYPE_1__ ptls_aead_context_t ;


 size_t FUNC_0 (TYPE_1__*,void*) ;

inline size_t FUNC_1(ptls_aead_context_t *VAR_0, void *VAR_1)
{
    return VAR_0->do_encrypt_final(VAR_0, VAR_1);
}
