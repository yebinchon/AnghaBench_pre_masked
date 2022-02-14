
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int const uint8_t ;
struct st_quicly_default_encrypt_cid_t {TYPE_3__* cid_decrypt_ctx; } ;
struct TYPE_6__ {int path_id; int thread_id; int master_id; int node_id; } ;
typedef TYPE_2__ quicly_cid_plaintext_t ;
typedef int quicly_cid_encryptor_t ;
struct TYPE_7__ {TYPE_1__* algo; } ;
struct TYPE_5__ {size_t block_size; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int const*,void const*,size_t) ;
 int FUNC_2 (int const*,int ,size_t) ;
 int FUNC_3 (TYPE_3__*,int const*,void const*,size_t) ;
 int FUNC_4 (int const**) ;
 int FUNC_5 (int const**) ;
 int FUNC_6 (int const**) ;

__attribute__((used)) static size_t FUNC_7(quicly_cid_encryptor_t *VAR_0, quicly_cid_plaintext_t *VAR_1, const void *VAR_2,
                                  size_t VAR_3)
{
    struct st_quicly_default_encrypt_cid_t *VAR_4 = (void *)VAR_0;
    uint8_t VAR_5[16], VAR_6[16];
    const uint8_t *VAR_7;
    size_t VAR_8;

    VAR_8 = VAR_4->cid_decrypt_ctx->algo->block_size;


    if (VAR_3 != 0 && VAR_3 != VAR_8) {
        if (VAR_3 > VAR_8)
            VAR_3 = VAR_8;
        FUNC_1(VAR_6, VAR_2, VAR_8);
        if (VAR_3 < VAR_8)
            FUNC_2(VAR_6 + VAR_3, 0, VAR_8 - VAR_3);
        VAR_2 = VAR_6;
    }


    FUNC_3(VAR_4->cid_decrypt_ctx, VAR_5, VAR_2, VAR_8);


    VAR_7 = VAR_5;
    if (VAR_8 == 16) {
        VAR_1->node_id = FUNC_6(&VAR_7);
    } else {
        VAR_1->node_id = 0;
    }
    VAR_1->master_id = FUNC_5(&VAR_7);
    VAR_1->thread_id = FUNC_4(&VAR_7);
    VAR_1->path_id = *VAR_7++;
    FUNC_0(VAR_7 - VAR_5 == VAR_8);

    return VAR_8;
}
