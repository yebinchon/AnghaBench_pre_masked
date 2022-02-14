
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct st_picotls_hmac_context_t {TYPE_1__* algo; int key; TYPE_2__* hash; } ;
typedef int ptls_hash_final_mode_t ;
typedef int ptls_hash_context_t ;
struct TYPE_6__ {int (* final ) (TYPE_2__*,void*,int) ;int (* update ) (TYPE_2__*,void*,int ) ;} ;
struct TYPE_5__ {int block_size; int digest_size; } ;




 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct st_picotls_hmac_context_t*) ;
 int FUNC_2 (struct st_picotls_hmac_context_t*,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_2__*,void*,int) ;
 int FUNC_5 (TYPE_2__*,void*,int ) ;
 int FUNC_6 (TYPE_2__*,void*,int) ;

__attribute__((used)) static void FUNC_7(ptls_hash_context_t *VAR_1, void *VAR_2, ptls_hash_final_mode_t VAR_3)
{
    struct st_picotls_hmac_context_t *VAR_4 = (struct st_picotls_hmac_context_t *)VAR_1;

    FUNC_0(VAR_3 != VAR_0 || !"not supported");

    if (VAR_2 != ((void*)0)) {
        VAR_4->hash->final(VAR_4->hash, VAR_2, 128);
        FUNC_2(VAR_4, 0x5c);
        VAR_4->hash->update(VAR_4->hash, VAR_2, VAR_4->algo->digest_size);
    }
    VAR_4->hash->final(VAR_4->hash, VAR_2, VAR_3);

    switch (VAR_3) {
    case 129:
        FUNC_3(VAR_4->key, VAR_4->algo->block_size);
        FUNC_1(VAR_4);
        break;
    case 128:
        FUNC_2(VAR_4, 0x36);
        break;
    default:
        FUNC_0(!"FIXME");
        break;
    }
}
