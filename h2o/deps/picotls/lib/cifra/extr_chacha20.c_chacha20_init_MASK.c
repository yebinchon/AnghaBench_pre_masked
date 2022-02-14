
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nonce; scalar_t__ ncounter; scalar_t__ nblock; } ;
struct chacha20_context_t {TYPE_1__ chacha; } ;
typedef int ptls_cipher_context_t ;


 int FUNC_0 (int ,void const*,int) ;

__attribute__((used)) static void FUNC_1(ptls_cipher_context_t *VAR_0, const void *VAR_1)
{
    struct chacha20_context_t *VAR_2 = (struct chacha20_context_t *)VAR_0;
    VAR_2->chacha.nblock = 0;
    VAR_2->chacha.ncounter = 0;
    FUNC_0(VAR_2->chacha.nonce, VAR_1, sizeof VAR_2->chacha.nonce);
}
