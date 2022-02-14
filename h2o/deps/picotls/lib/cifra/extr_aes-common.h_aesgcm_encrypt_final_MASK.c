
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aesgcm_context_t {int gcm; } ;
typedef int ptls_aead_context_t ;


 size_t VAR_0 ;
 int FUNC_0 (int *,void*,size_t) ;

__attribute__((used)) static inline size_t FUNC_1(ptls_aead_context_t *VAR_1, void *VAR_2)
{
    struct aesgcm_context_t *VAR_3 = (struct aesgcm_context_t *)VAR_1;

    FUNC_0(&VAR_3->gcm, VAR_2, VAR_0);
    return VAR_0;
}
