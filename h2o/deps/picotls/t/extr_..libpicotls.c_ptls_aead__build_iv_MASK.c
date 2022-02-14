
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint64_t ;
struct TYPE_5__ {int* static_iv; TYPE_1__* algo; } ;
typedef TYPE_2__ ptls_aead_context_t ;
struct TYPE_4__ {size_t iv_size; } ;



void FUNC_0(ptls_aead_context_t *VAR_0, uint8_t *VAR_1, uint64_t VAR_2)
{
    size_t VAR_3 = VAR_0->algo->iv_size, VAR_4;
    const uint8_t *VAR_5 = VAR_0->static_iv;
    uint8_t *VAR_6 = VAR_1;


    for (VAR_4 = VAR_3 - 8; VAR_4 != 0; --VAR_4)
        *VAR_6++ = *VAR_5++;
    VAR_4 = 64;
    do {
        VAR_4 -= 8;
        *VAR_6++ = *VAR_5++ ^ (uint8_t)(VAR_2 >> VAR_4);
    } while (VAR_4 != 0);
}
