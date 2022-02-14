
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int super; } ;
typedef TYPE_1__ ptls_openssl_verify_certificate_t ;
struct TYPE_6__ {int * verify_certificate; } ;
typedef TYPE_2__ ptls_context_t ;


 int FUNC_0 (TYPE_1__*,int *) ;

__attribute__((used)) static inline void FUNC_1(ptls_context_t *VAR_0)
{
    static ptls_openssl_verify_certificate_t VAR_1;
    FUNC_0(&VAR_1, ((void*)0));
    VAR_0->verify_certificate = &VAR_1.super;
}
