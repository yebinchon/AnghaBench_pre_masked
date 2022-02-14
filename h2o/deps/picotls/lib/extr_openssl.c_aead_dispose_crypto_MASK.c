
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aead_crypto_context_t {int * evp_ctx; } ;
typedef int ptls_aead_context_t ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(ptls_aead_context_t *VAR_0)
{
    struct aead_crypto_context_t *VAR_1 = (struct aead_crypto_context_t *)VAR_0;

    if (VAR_1->evp_ctx != ((void*)0))
        FUNC_0(VAR_1->evp_ctx);
}
