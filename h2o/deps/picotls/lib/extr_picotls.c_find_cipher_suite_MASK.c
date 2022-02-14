
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_5__ {TYPE_2__** cipher_suites; } ;
typedef TYPE_1__ ptls_context_t ;
struct TYPE_6__ {scalar_t__ id; } ;
typedef TYPE_2__ ptls_cipher_suite_t ;



__attribute__((used)) static ptls_cipher_suite_t *FUNC_0(ptls_context_t *VAR_0, uint16_t VAR_1)
{
    ptls_cipher_suite_t **VAR_2;

    for (VAR_2 = VAR_0->cipher_suites; *VAR_2 != ((void*)0) && (*VAR_2)->id != VAR_1; ++VAR_2)
        ;
    return *VAR_2;
}
