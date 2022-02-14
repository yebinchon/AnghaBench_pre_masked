
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cipher_context_t {int evp; } ;
typedef int ptls_cipher_context_t ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(ptls_cipher_context_t *VAR_0)
{
    struct cipher_context_t *VAR_1 = (struct cipher_context_t *)VAR_0;
    FUNC_0(VAR_1->evp);
}
