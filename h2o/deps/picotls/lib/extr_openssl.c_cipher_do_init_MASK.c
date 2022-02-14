
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cipher_context_t {int evp; } ;
typedef int ptls_cipher_context_t ;


 int FUNC_0 (int ,int *,int *,int *,void const*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(ptls_cipher_context_t *VAR_0, const void *VAR_1)
{
    struct cipher_context_t *VAR_2 = (struct cipher_context_t *)VAR_0;
    int VAR_3;
    VAR_3 = FUNC_0(VAR_2->evp, ((void*)0), ((void*)0), ((void*)0), VAR_1);
    FUNC_1(VAR_3);
}
