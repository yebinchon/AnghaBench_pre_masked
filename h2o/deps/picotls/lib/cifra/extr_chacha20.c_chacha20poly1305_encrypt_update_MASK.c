
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chacha20poly1305_context_t {size_t textlen; int poly; int chacha; } ;
typedef int ptls_aead_context_t ;


 int FUNC_0 (int *,void const*,void*,size_t) ;
 int FUNC_1 (int *,void*,size_t) ;

__attribute__((used)) static size_t FUNC_2(ptls_aead_context_t *VAR_0, void *VAR_1, const void *VAR_2, size_t VAR_3)
{
    struct chacha20poly1305_context_t *VAR_4 = (struct chacha20poly1305_context_t *)VAR_0;

    FUNC_0(&VAR_4->chacha, VAR_2, VAR_1, VAR_3);
    FUNC_1(&VAR_4->poly, VAR_1, VAR_3);
    VAR_4->textlen += VAR_3;

    return VAR_3;
}
