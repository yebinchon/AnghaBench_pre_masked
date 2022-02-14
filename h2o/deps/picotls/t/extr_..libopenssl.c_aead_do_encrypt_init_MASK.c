
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aead_crypto_context_t {int evp_ctx; } ;
typedef int ptls_aead_context_t ;


 int FUNC_0 (int ,int *,int *,int *,void const*) ;
 int FUNC_1 (int ,int *,int*,void const*,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(ptls_aead_context_t *VAR_0, const void *VAR_1, const void *VAR_2, size_t VAR_3)
{
    struct aead_crypto_context_t *VAR_4 = (struct aead_crypto_context_t *)VAR_0;
    int VAR_5;


    VAR_5 = FUNC_0(VAR_4->evp_ctx, ((void*)0), ((void*)0), ((void*)0), VAR_1);
    FUNC_2(VAR_5);

    if (VAR_3 != 0) {
        int VAR_6;
        VAR_5 = FUNC_1(VAR_4->evp_ctx, ((void*)0), &VAR_6, VAR_2, (int)VAR_3);
        FUNC_2(VAR_5);
    }
}
