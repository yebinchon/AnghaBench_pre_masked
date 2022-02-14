
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chacha20poly1305_context_t {int chacha; } ;
typedef int ptls_aead_context_t ;


 size_t VAR_0 ;
 int FUNC_0 (struct chacha20poly1305_context_t*,void*) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static size_t FUNC_2(ptls_aead_context_t *VAR_1, void *VAR_2)
{
    struct chacha20poly1305_context_t *VAR_3 = (struct chacha20poly1305_context_t *)VAR_1;

    FUNC_0(VAR_3, VAR_2);

    FUNC_1(&VAR_3->chacha, sizeof(VAR_3->chacha));
    return VAR_0;
}
