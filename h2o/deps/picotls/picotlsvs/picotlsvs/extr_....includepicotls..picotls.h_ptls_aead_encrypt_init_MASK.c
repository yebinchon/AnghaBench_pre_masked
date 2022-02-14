
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
struct TYPE_5__ {int (* do_encrypt_init ) (TYPE_1__*,int *,void const*,size_t) ;} ;
typedef TYPE_1__ ptls_aead_context_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *,int ) ;
 int FUNC_1 (TYPE_1__*,int *,void const*,size_t) ;

inline void FUNC_2(ptls_aead_context_t *VAR_1, uint64_t VAR_2, const void *VAR_3, size_t VAR_4)
{
    uint8_t VAR_5[VAR_0];

    FUNC_0(VAR_1, VAR_5, VAR_2);
    VAR_1->do_encrypt_init(VAR_1, VAR_5, VAR_3, VAR_4);
}
