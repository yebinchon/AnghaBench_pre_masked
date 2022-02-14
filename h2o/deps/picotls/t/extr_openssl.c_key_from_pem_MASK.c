
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ptls_key_exchange_context_t ;
typedef int EVP_PKEY ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (void*,int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,int *,int *,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int **,int *) ;
 scalar_t__ FUNC_6 (char const*) ;

__attribute__((used)) static ptls_key_exchange_context_t *FUNC_7(const char *VAR_0)
{
    BIO *VAR_1 = FUNC_1((void *)VAR_0, (int)FUNC_6(VAR_0));
    EVP_PKEY *VAR_2 = FUNC_3(VAR_1, ((void*)0), ((void*)0), ((void*)0));
    FUNC_4(VAR_2 != ((void*)0) && "failed to load private key");
    FUNC_0(VAR_1);

    ptls_key_exchange_context_t *VAR_3;
    int VAR_4 = FUNC_5(&VAR_3, VAR_2);
    FUNC_4(VAR_4 == 0 && "failed to setup private key");

    FUNC_2(VAR_2);
    return VAR_3;
}
