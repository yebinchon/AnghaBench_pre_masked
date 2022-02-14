
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {int * do_transform; int * do_init; int (* do_dispose ) (int *) ;TYPE_1__* algo; } ;
struct TYPE_9__ {int nb_rounds; int is_enc; size_t byte_length; int nb_left; int nb_right; int mask_last_byte; TYPE_2__ super; int tweaks; int * enc_ctx; } ;
typedef TYPE_3__ ptls_ffx_context_t ;
typedef int ptls_cipher_context_t ;
struct TYPE_10__ {scalar_t__ key_size; scalar_t__ iv_size; } ;
typedef TYPE_4__ ptls_cipher_algorithm_t ;
struct TYPE_7__ {scalar_t__ key_size; scalar_t__ iv_size; size_t block_size; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * FUNC_2 (TYPE_4__*,int,void const*) ;
 int FUNC_3 (int ,int) ;

int FUNC_4(ptls_cipher_context_t *VAR_3, ptls_cipher_algorithm_t *VAR_4, int VAR_5, int VAR_6, size_t VAR_7,
                          const void *VAR_8)
{
    int VAR_9 = 0;
    ptls_ffx_context_t *VAR_10 = (ptls_ffx_context_t *)VAR_3;
    ptls_cipher_context_t *VAR_11 = ((void*)0);
    size_t VAR_12 = (VAR_7 + 7) / 8;
    uint8_t VAR_13[8] = {0xFF, 0xFE, 0xFC, 0xF8, 0xF0, 0xE0, 0xC0, 0x80};

    FUNC_0(VAR_12 <= 32 && VAR_12 >= 2);
    FUNC_0(VAR_10->super.do_dispose == ((void*)0));
    FUNC_0(VAR_10->super.do_init == ((void*)0));
    FUNC_0(VAR_10->super.do_transform == ((void*)0));
    FUNC_0(VAR_10->super.algo == ((void*)0) || VAR_4->key_size == VAR_10->super.algo->key_size);
    FUNC_0(VAR_10->super.algo == ((void*)0) || VAR_4->iv_size == VAR_10->super.algo->iv_size);
    FUNC_0(VAR_10->super.algo == ((void*)0) || VAR_10->super.algo->block_size == VAR_12);
    FUNC_0(VAR_4->iv_size == 16);

    if (VAR_12 <= 32 && VAR_12 >= 2) {

        VAR_11 = FUNC_2(VAR_4, 1, VAR_8);

        if (VAR_11 == ((void*)0)) {
            VAR_9 = VAR_0;
        }
    } else {
        VAR_9 = VAR_0;
    }

    if (VAR_9 == 0) {
        VAR_10->enc_ctx = VAR_11;
        VAR_10->nb_rounds = VAR_6;
        VAR_10->is_enc = VAR_5;
        VAR_10->byte_length = VAR_12;
        VAR_10->nb_left = (int)VAR_12 / 2;
        VAR_10->nb_right = (int)VAR_12 - VAR_10->nb_left;
        VAR_10->mask_last_byte = VAR_13[VAR_7 % 8];
        FUNC_3(VAR_10->tweaks, sizeof(VAR_10->tweaks));

        VAR_10->super.do_dispose = FUNC_1;
        VAR_10->super.do_init = VAR_2;
        VAR_10->super.do_transform = VAR_1;
    } else {
        FUNC_1(VAR_3);
    }

    return VAR_9;
}
