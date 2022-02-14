
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* algo; int * do_decrypt; int * do_encrypt_final; int * do_encrypt_update; int * do_encrypt_init; int (* dispose_crypto ) (TYPE_2__*) ;} ;
struct aead_crypto_context_t {TYPE_2__ super; int * evp_ctx; } ;
typedef int ptls_aead_context_t ;
struct TYPE_3__ {scalar_t__ iv_size; } ;
typedef int EVP_CIPHER ;


 int FUNC_0 (int *,int ,int,int *) ;
 int * FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (int *,int const*,int *,void const*,int *) ;
 int FUNC_3 (int *,int const*,int *,void const*,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (TYPE_2__*) ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;

__attribute__((used)) static int FUNC_5(ptls_aead_context_t *VAR_7, int VAR_8, const void *VAR_9, const EVP_CIPHER *VAR_10)
{
    struct aead_crypto_context_t *VAR_11 = (struct aead_crypto_context_t *)VAR_7;
    int VAR_12;

    VAR_11->super.dispose_crypto = FUNC_4;
    if (VAR_8) {
        VAR_11->super.do_encrypt_init = VAR_5;
        VAR_11->super.do_encrypt_update = VAR_6;
        VAR_11->super.do_encrypt_final = VAR_4;
        VAR_11->super.do_decrypt = ((void*)0);
    } else {
        VAR_11->super.do_encrypt_init = ((void*)0);
        VAR_11->super.do_encrypt_update = ((void*)0);
        VAR_11->super.do_encrypt_final = ((void*)0);
        VAR_11->super.do_decrypt = VAR_3;
    }
    VAR_11->evp_ctx = ((void*)0);

    if ((VAR_11->evp_ctx = FUNC_1()) == ((void*)0)) {
        VAR_12 = VAR_2;
        goto Error;
    }
    if (VAR_8) {
        if (!FUNC_3(VAR_11->evp_ctx, VAR_10, ((void*)0), VAR_9, ((void*)0))) {
            VAR_12 = VAR_1;
            goto Error;
        }
    } else {
        if (!FUNC_2(VAR_11->evp_ctx, VAR_10, ((void*)0), VAR_9, ((void*)0))) {
            VAR_12 = VAR_1;
            goto Error;
        }
    }
    if (!FUNC_0(VAR_11->evp_ctx, VAR_0, (int)VAR_11->super.algo->iv_size, ((void*)0))) {
        VAR_12 = VAR_1;
        goto Error;
    }

    return 0;

Error:
    FUNC_4(&VAR_11->super);
    return VAR_12;
}
