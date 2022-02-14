
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
typedef int FILE ;
typedef int EVP_PKEY ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,int *,int *,int *) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char const*,char*) ;
 int FUNC_5 (int ,char*,char const*,...) ;
 int FUNC_6 (TYPE_1__*,int *) ;
 int VAR_1 ;
 char* FUNC_7 (int ) ;

__attribute__((used)) static inline void FUNC_8(ptls_context_t *VAR_2, const char *VAR_3)
{
    static ptls_openssl_sign_certificate_t VAR_4;
    FILE *VAR_5;
    EVP_PKEY *VAR_6;

    if ((VAR_5 = FUNC_4(VAR_3, "rb")) == ((void*)0)) {
        FUNC_5(VAR_1, "failed to open file:%s:%s\n", VAR_3, FUNC_7(VAR_0));
        FUNC_2(1);
    }
    VAR_6 = FUNC_1(VAR_5, ((void*)0), ((void*)0), ((void*)0));
    FUNC_3(VAR_5);

    if (VAR_6 == ((void*)0)) {
        FUNC_5(VAR_1, "failed to read private key from file:%s\n", VAR_3);
        FUNC_2(1);
    }

    FUNC_6(&VAR_4, VAR_6);
    FUNC_0(VAR_6);

    VAR_2->sign_certificate = &VAR_4.super;
}
