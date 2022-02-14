
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aesecb_context_t {int aes; } ;
typedef int ptls_cipher_context_t ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,void const*,void*) ;

__attribute__((used)) static inline void FUNC_2(ptls_cipher_context_t *VAR_1, void *VAR_2, const void *VAR_3, size_t VAR_4)
{
    struct aesecb_context_t *VAR_5 = (struct aesecb_context_t *)VAR_1;
    FUNC_0(VAR_4 % VAR_0 == 0);
    FUNC_1(&VAR_5->aes, VAR_3, VAR_2);
}
