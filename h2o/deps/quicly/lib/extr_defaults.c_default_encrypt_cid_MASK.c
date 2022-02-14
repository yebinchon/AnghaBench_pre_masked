
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct st_quicly_default_encrypt_cid_t {TYPE_4__* cid_encrypt_ctx; } ;
struct TYPE_8__ {int len; int cid; } ;
typedef TYPE_2__ quicly_cid_t ;
struct TYPE_9__ {int master_id; int thread_id; int path_id; int node_id; } ;
typedef TYPE_3__ quicly_cid_plaintext_t ;
typedef int quicly_cid_encryptor_t ;
struct TYPE_10__ {TYPE_1__* algo; } ;
struct TYPE_7__ {int block_size; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct st_quicly_default_encrypt_cid_t*,void*,int ) ;
 int FUNC_2 (TYPE_4__*,int ,int *,int) ;
 int * FUNC_3 (int *,int) ;
 int * FUNC_4 (int *,int ) ;

__attribute__((used)) static void FUNC_5(quicly_cid_encryptor_t *VAR_0, quicly_cid_t *VAR_1, void *VAR_2,
                                const quicly_cid_plaintext_t *VAR_3)
{
    struct st_quicly_default_encrypt_cid_t *VAR_4 = (void *)VAR_0;
    uint8_t VAR_5[16], *VAR_6;


    VAR_6 = VAR_5;
    switch (VAR_4->cid_encrypt_ctx->algo->block_size) {
    case 8:
        break;
    case 16:
        VAR_6 = FUNC_4(VAR_6, VAR_3->node_id);
        break;
    default:
        FUNC_0(!"unexpected block size");
        break;
    }
    VAR_6 = FUNC_3(VAR_6, VAR_3->master_id);
    VAR_6 = FUNC_3(VAR_6, (VAR_3->thread_id << 8) | VAR_3->path_id);
    FUNC_0(VAR_6 - VAR_5 == VAR_4->cid_encrypt_ctx->algo->block_size);


    FUNC_2(VAR_4->cid_encrypt_ctx, VAR_1->cid, VAR_5, VAR_4->cid_encrypt_ctx->algo->block_size);
    VAR_1->len = VAR_4->cid_encrypt_ctx->algo->block_size;


    if (VAR_2 != ((void*)0))
        FUNC_1(VAR_4, VAR_2, VAR_1->cid);
}
