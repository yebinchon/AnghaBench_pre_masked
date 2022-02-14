
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ptls_openssl_sign_certificate_t ;
typedef int EVP_PKEY ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,int *,int *,int *) ;
 int VAR_0 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,int *) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(ptls_openssl_sign_certificate_t *VAR_1)
{
    BIO *VAR_2 = FUNC_1(VAR_0, (int)FUNC_6(VAR_0));
    EVP_PKEY *VAR_3 = FUNC_3(VAR_2, ((void*)0), ((void*)0), ((void*)0));
    FUNC_4(VAR_3 != ((void*)0) || !"failed to load private key");
    FUNC_0(VAR_2);

    FUNC_5(VAR_1, VAR_3);

    FUNC_2(VAR_3);
}
