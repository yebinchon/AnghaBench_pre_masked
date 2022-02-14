
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aesgcm_context_t {int gcm; } ;
typedef int ptls_aead_context_t ;


 int FUNC_0 (int *,void const*,size_t,void*) ;

__attribute__((used)) static inline size_t FUNC_1(ptls_aead_context_t *VAR_0, void *VAR_1, const void *VAR_2, size_t VAR_3)
{
    struct aesgcm_context_t *VAR_4 = (struct aesgcm_context_t *)VAR_0;

    FUNC_0(&VAR_4->gcm, VAR_2, VAR_3, VAR_1);
    return VAR_3;
}
