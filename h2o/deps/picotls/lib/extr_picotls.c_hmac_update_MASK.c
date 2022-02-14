
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct st_picotls_hmac_context_t {TYPE_1__* hash; } ;
typedef int ptls_hash_context_t ;
struct TYPE_2__ {int (* update ) (TYPE_1__*,void const*,size_t) ;} ;


 int FUNC_0 (TYPE_1__*,void const*,size_t) ;

__attribute__((used)) static void FUNC_1(ptls_hash_context_t *VAR_0, const void *VAR_1, size_t VAR_2)
{
    struct st_picotls_hmac_context_t *VAR_3 = (struct st_picotls_hmac_context_t *)VAR_0;
    VAR_3->hash->update(VAR_3->hash, VAR_1, VAR_2);
}
