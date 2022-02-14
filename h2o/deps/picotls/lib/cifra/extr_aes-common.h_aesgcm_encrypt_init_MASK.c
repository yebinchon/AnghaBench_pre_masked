
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aesgcm_context_t {int gcm; int aes; } ;
typedef int ptls_aead_context_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int *,void const*,size_t,void const*,int ) ;

__attribute__((used)) static inline void FUNC_1(ptls_aead_context_t *VAR_2, const void *VAR_3, const void *VAR_4, size_t VAR_5)
{
    struct aesgcm_context_t *VAR_6 = (struct aesgcm_context_t *)VAR_2;

    FUNC_0(&VAR_1, &VAR_6->aes, &VAR_6->gcm, VAR_4, VAR_5, VAR_3, VAR_0);
}
