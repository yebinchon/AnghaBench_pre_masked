
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int super; } ;
typedef TYPE_1__ ptls_openssl_verify_certificate_t ;
struct TYPE_7__ {int * verify_certificate; int cipher_suites; int key_exchanges; int * get_time; int random_bytes; } ;
typedef TYPE_2__ ptls_context_t ;
typedef int X509_STORE ;


 int FUNC_0 (TYPE_2__*,int ,int) ;
 int FUNC_1 (char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_3(ptls_context_t *VAR_4, char const * VAR_5)
{
 int VAR_6 = 0;
 static ptls_openssl_verify_certificate_t VAR_7;
    X509_STORE *VAR_8 = ((void*)0);


 FUNC_0(VAR_4, 0, sizeof(ptls_context_t));
 VAR_4->random_bytes = VAR_3;
    VAR_4->get_time = &VAR_0;
 VAR_4->key_exchanges = VAR_2;
 VAR_4->cipher_suites = VAR_1;
 FUNC_2(&VAR_7, FUNC_1(VAR_5));
 VAR_4->verify_certificate = &VAR_7.super;

 return VAR_6;
}
