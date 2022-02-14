
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_3__ {int count; unsigned char* buf; int state; } ;
typedef TYPE_1__ crypto_hash_sha256_state ;


 int FUNC_0 (int ,unsigned char const*,int *,int *) ;
 int FUNC_1 (void*,int) ;

int
FUNC_2(crypto_hash_sha256_state *VAR_0,
                          const unsigned char *VAR_1, unsigned long long VAR_2)
{
    uint32_t VAR_3[64 + 8];
    unsigned long long VAR_4;
    unsigned long long VAR_5;

    if (VAR_2 <= 0U) {
        return 0;
    }
    VAR_5 = (unsigned long long) ((VAR_0->count >> 3) & 0x3f);

    VAR_0->count += ((uint64_t) VAR_2) << 3;
    if (VAR_2 < 64 - VAR_5) {
        for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
            VAR_0->buf[VAR_5 + VAR_4] = VAR_1[VAR_4];
        }
        return 0;
    }
    for (VAR_4 = 0; VAR_4 < 64 - VAR_5; VAR_4++) {
        VAR_0->buf[VAR_5 + VAR_4] = VAR_1[VAR_4];
    }
    FUNC_0(VAR_0->state, VAR_0->buf, &VAR_3[0], &VAR_3[64]);
    VAR_1 += 64 - VAR_5;
    VAR_2 -= 64 - VAR_5;

    while (VAR_2 >= 64) {
        FUNC_0(VAR_0->state, VAR_1, &VAR_3[0], &VAR_3[64]);
        VAR_1 += 64;
        VAR_2 -= 64;
    }
    VAR_2 &= 63;
    for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
        VAR_0->buf[VAR_4] = VAR_1[VAR_4];
    }
    FUNC_1((void *) VAR_3, sizeof VAR_3);

    return 0;
}
