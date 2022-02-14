
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct aesgcm_context_t {int aes; } ;
typedef int ptls_aead_context_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,int *,void const*,size_t,void const*,size_t,void const*,int ,int *,size_t,void*) ;

__attribute__((used)) static inline size_t FUNC_1(ptls_aead_context_t *VAR_4, void *VAR_5, const void *VAR_6, size_t VAR_7, const void *VAR_8,
                             const void *VAR_9, size_t VAR_10)
{
    struct aesgcm_context_t *VAR_11 = (struct aesgcm_context_t *)VAR_4;

    if (VAR_7 < VAR_1)
        return VAR_2;
    size_t VAR_12 = VAR_7 - VAR_1;

    if (FUNC_0(&VAR_3, &VAR_11->aes, VAR_6, VAR_12, VAR_9, VAR_10, VAR_8, VAR_0, (uint8_t *)VAR_6 + VAR_12,
                       VAR_1, VAR_5) != 0)
        return VAR_2;

    return VAR_12;
}
