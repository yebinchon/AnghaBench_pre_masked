
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {int* count; unsigned char* buf; int state; } ;
typedef TYPE_1__ crypto_hash_sha512_state ;


 int FUNC_0 (int ,unsigned char const*,int*,int*) ;
 int FUNC_1 (void*,int) ;

int
FUNC_2(crypto_hash_sha512_state *VAR_0,
                          const unsigned char *VAR_1, unsigned long long VAR_2)
{
    uint64_t VAR_3[80 + 8];
    uint64_t VAR_4[2];
    unsigned long long VAR_5;
    unsigned long long VAR_6;

    if (VAR_2 <= 0U) {
        return 0;
    }
    VAR_6 = (unsigned long long) ((VAR_0->count[1] >> 3) & 0x7f);

    VAR_4[1] = ((uint64_t) VAR_2) << 3;
    VAR_4[0] = ((uint64_t) VAR_2) >> 61;

    if ((VAR_0->count[1] += VAR_4[1]) < VAR_4[1]) {
        VAR_0->count[0]++;
    }

    VAR_0->count[0] += VAR_4[0];
    if (VAR_2 < 128 - VAR_6) {
        for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
            VAR_0->buf[VAR_6 + VAR_5] = VAR_1[VAR_5];
        }
        return 0;
    }
    for (VAR_5 = 0; VAR_5 < 128 - VAR_6; VAR_5++) {
        VAR_0->buf[VAR_6 + VAR_5] = VAR_1[VAR_5];
    }
    FUNC_0(VAR_0->state, VAR_0->buf, &VAR_3[0], &VAR_3[80]);
    VAR_1 += 128 - VAR_6;
    VAR_2 -= 128 - VAR_6;

    while (VAR_2 >= 128) {
        FUNC_0(VAR_0->state, VAR_1, &VAR_3[0], &VAR_3[80]);
        VAR_1 += 128;
        VAR_2 -= 128;
    }
    VAR_2 &= 127;
    for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
        VAR_0->buf[VAR_5] = VAR_1[VAR_5];
    }
    FUNC_1((void *) VAR_3, sizeof VAR_3);

    return 0;
}
