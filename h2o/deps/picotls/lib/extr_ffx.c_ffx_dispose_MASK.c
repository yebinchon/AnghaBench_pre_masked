
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void (* do_dispose ) (int *) ;int * do_transform; int * do_init; } ;
struct TYPE_4__ {TYPE_1__ super; scalar_t__ is_enc; scalar_t__ mask_last_byte; scalar_t__ nb_right; scalar_t__ nb_left; scalar_t__ byte_length; scalar_t__ nb_rounds; int * enc_ctx; } ;
typedef TYPE_2__ ptls_ffx_context_t ;
typedef int ptls_cipher_context_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(ptls_cipher_context_t *VAR_0)
{
    ptls_ffx_context_t *VAR_1 = (ptls_ffx_context_t *)VAR_0;

    FUNC_0(VAR_1->super.do_dispose == FUNC_2);

    if (VAR_1->enc_ctx != ((void*)0)) {
        FUNC_1(VAR_1->enc_ctx);
    }

    VAR_1->enc_ctx = ((void*)0);
    VAR_1->nb_rounds = 0;
    VAR_1->byte_length = 0;
    VAR_1->nb_left = 0;
    VAR_1->nb_right = 0;
    VAR_1->mask_last_byte = 0;
    VAR_1->is_enc = 0;

    VAR_1->super.do_dispose = ((void*)0);
    VAR_1->super.do_init = ((void*)0);
    VAR_1->super.do_transform = ((void*)0);
}
