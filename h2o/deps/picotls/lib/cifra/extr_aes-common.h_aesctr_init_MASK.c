
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aesctr_context_t {int aes; int ctr; } ;
typedef int ptls_cipher_context_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int *,void const*) ;

__attribute__((used)) static inline void FUNC_1(ptls_cipher_context_t *VAR_1, const void *VAR_2)
{
    struct aesctr_context_t *VAR_3 = (struct aesctr_context_t *)VAR_1;
    FUNC_0(&VAR_3->ctr, &VAR_0, &VAR_3->aes, VAR_2);
}
