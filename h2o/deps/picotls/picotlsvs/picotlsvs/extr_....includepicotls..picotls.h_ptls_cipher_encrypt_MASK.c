
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* do_transform ) (TYPE_1__*,void*,void const*,size_t) ;} ;
typedef TYPE_1__ ptls_cipher_context_t ;


 int FUNC_0 (TYPE_1__*,void*,void const*,size_t) ;

inline void FUNC_1(ptls_cipher_context_t *VAR_0, void *VAR_1, const void *VAR_2, size_t VAR_3)
{
    VAR_0->do_transform(VAR_0, VAR_1, VAR_2, VAR_3);
}
