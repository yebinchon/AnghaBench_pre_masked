
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aesctr_context_t {int ctr; } ;
typedef int ptls_cipher_context_t ;


 int FUNC_0 (int *,void const*,void*,size_t) ;

__attribute__((used)) static inline void FUNC_1(ptls_cipher_context_t *VAR_0, void *VAR_1, const void *VAR_2, size_t VAR_3)
{
    struct aesctr_context_t *VAR_4 = (struct aesctr_context_t *)VAR_0;
    FUNC_0(&VAR_4->ctr, VAR_2, VAR_1, VAR_3);
}
