
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct st_quicly_default_encrypt_cid_t {TYPE_4__* reset_token_ctx; TYPE_1__* cid_encrypt_ctx; } ;
typedef int expandbuf ;
struct TYPE_8__ {TYPE_2__* algo; } ;
struct TYPE_7__ {int block_size; } ;
struct TYPE_6__ {int block_size; } ;
struct TYPE_5__ {TYPE_3__* algo; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,void const*,int) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (TYPE_4__*,void*,void const*,int) ;

__attribute__((used)) static void FUNC_4(struct st_quicly_default_encrypt_cid_t *VAR_1, void *VAR_2, const void *VAR_3)
{
    uint8_t VAR_4[VAR_0];

    FUNC_0(VAR_1->reset_token_ctx->algo->block_size == VAR_0);


    if (VAR_1->cid_encrypt_ctx->algo->block_size != VAR_0) {
        FUNC_0(VAR_1->cid_encrypt_ctx->algo->block_size < VAR_0);
        FUNC_2(VAR_4, 0, sizeof(VAR_4));
        FUNC_1(VAR_4, VAR_3, VAR_1->cid_encrypt_ctx->algo->block_size);
        VAR_3 = VAR_4;
    }


    FUNC_3(VAR_1->reset_token_ctx, VAR_2, VAR_3, VAR_0);
}
