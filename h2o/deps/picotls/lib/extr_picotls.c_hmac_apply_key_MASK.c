
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct st_picotls_hmac_context_t {int * key; TYPE_1__* algo; TYPE_2__* hash; } ;
struct TYPE_4__ {int (* update ) (TYPE_2__*,int *,size_t) ;} ;
struct TYPE_3__ {size_t block_size; } ;


 int FUNC_0 (TYPE_2__*,int *,size_t) ;

__attribute__((used)) static void FUNC_1(struct st_picotls_hmac_context_t *VAR_0, uint8_t VAR_1)
{
    size_t VAR_2;

    for (VAR_2 = 0; VAR_2 != VAR_0->algo->block_size; ++VAR_2)
        VAR_0->key[VAR_2] ^= VAR_1;
    VAR_0->hash->update(VAR_0->hash, VAR_0->key, VAR_0->algo->block_size);
    for (VAR_2 = 0; VAR_2 != VAR_0->algo->block_size; ++VAR_2)
        VAR_0->key[VAR_2] ^= VAR_1;
}
