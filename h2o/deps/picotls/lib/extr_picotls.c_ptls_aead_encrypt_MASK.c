
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int ptls_aead_context_t ;


 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int ,void const*,size_t) ;
 scalar_t__ FUNC_2 (int *,int *,void const*,size_t) ;

size_t FUNC_3(ptls_aead_context_t *VAR_0, void *VAR_1, const void *VAR_2, size_t VAR_3, uint64_t VAR_4, const void *VAR_5,
                         size_t VAR_6)
{
    size_t VAR_7 = 0;

    FUNC_1(VAR_0, VAR_4, VAR_5, VAR_6);
    VAR_7 += FUNC_2(VAR_0, ((uint8_t *)VAR_1) + VAR_7, VAR_2, VAR_3);
    VAR_7 += FUNC_0(VAR_0, ((uint8_t *)VAR_1) + VAR_7);

    return VAR_7;
}
