
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cipher_context_t {int evp; } ;
typedef int ptls_cipher_context_t ;


 int FUNC_0 (int ,void*,int*,void const*,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(ptls_cipher_context_t *VAR_0, void *VAR_1, const void *VAR_2, size_t VAR_3)
{
    struct cipher_context_t *VAR_4 = (struct cipher_context_t *)VAR_0;
    int VAR_5 = (int)VAR_3, VAR_6 = FUNC_0(VAR_4->evp, VAR_1, &VAR_5, VAR_2, VAR_5);
    FUNC_1(VAR_6);
    FUNC_1(VAR_5 == (int)VAR_3);
}
