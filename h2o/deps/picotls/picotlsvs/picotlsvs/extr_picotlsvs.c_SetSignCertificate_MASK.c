
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int super; } ;
typedef TYPE_1__ ptls_openssl_sign_certificate_t ;
struct TYPE_6__ {int * sign_certificate; } ;
typedef TYPE_2__ ptls_context_t ;
typedef int EVP_PKEY ;
typedef int BIO ;


 int * FUNC_0 (char const*,char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,int **,int *,int *) ;
 int FUNC_4 (TYPE_1__*,int *) ;

void FUNC_5(char const * VAR_0, ptls_context_t * VAR_1)
{
    static ptls_openssl_sign_certificate_t VAR_2;

    EVP_PKEY *VAR_3 = FUNC_2();
    BIO* VAR_4 = FUNC_0(VAR_0, "rb");
    FUNC_3(VAR_4, &VAR_3, ((void*)0), ((void*)0));
    FUNC_4(&VAR_2, VAR_3);
    FUNC_1(VAR_3);
    VAR_1->sign_certificate = &VAR_2.super;
}
