
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ptls_ffx_context_t ;
typedef int ptls_cipher_context_t ;
typedef int ptls_cipher_algorithm_t ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,int ,int) ;
 scalar_t__ FUNC_3 (int *,int *,int,int,size_t,void const*) ;

ptls_cipher_context_t *FUNC_4(ptls_cipher_algorithm_t *VAR_0, int VAR_1, int VAR_2, size_t VAR_3, const void *VAR_4)
{
    ptls_cipher_context_t *VAR_5 = (ptls_cipher_context_t *)FUNC_1(sizeof(ptls_ffx_context_t));

    if (VAR_5 != ((void*)0)) {
        FUNC_2(VAR_5, 0, sizeof(ptls_ffx_context_t));
        if (FUNC_3(VAR_5, VAR_0, VAR_1, VAR_2, VAR_3, VAR_4) != 0) {
            FUNC_0(VAR_5);
            VAR_5 = ((void*)0);
        }
    }

    return VAR_5;
}
