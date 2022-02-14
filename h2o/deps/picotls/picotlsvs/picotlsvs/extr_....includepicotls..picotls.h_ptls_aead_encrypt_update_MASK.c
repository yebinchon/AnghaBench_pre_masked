
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t (* do_encrypt_update ) (TYPE_1__*,void*,void const*,size_t) ;} ;
typedef TYPE_1__ ptls_aead_context_t ;


 size_t FUNC_0 (TYPE_1__*,void*,void const*,size_t) ;

inline size_t FUNC_1(ptls_aead_context_t *VAR_0, void *VAR_1, const void *VAR_2, size_t VAR_3)
{
    return VAR_0->do_encrypt_update(VAR_0, VAR_1, VAR_2, VAR_3);
}
