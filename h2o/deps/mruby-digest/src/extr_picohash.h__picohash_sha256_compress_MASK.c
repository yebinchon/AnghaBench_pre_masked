
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int* state; } ;
typedef TYPE_1__ _picohash_sha256_ctx_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int,int,int,int,int,int,int,int) ;

__attribute__((used)) static inline void FUNC_3(_picohash_sha256_ctx_t *VAR_0, unsigned char *VAR_1)
{
    static const uint32_t VAR_2[64] = {
        0x428a2f98UL, 0x71374491UL, 0xb5c0fbcfUL, 0xe9b5dba5UL, 0x3956c25bUL, 0x59f111f1UL, 0x923f82a4UL, 0xab1c5ed5UL,
        0xd807aa98UL, 0x12835b01UL, 0x243185beUL, 0x550c7dc3UL, 0x72be5d74UL, 0x80deb1feUL, 0x9bdc06a7UL, 0xc19bf174UL,
        0xe49b69c1UL, 0xefbe4786UL, 0x0fc19dc6UL, 0x240ca1ccUL, 0x2de92c6fUL, 0x4a7484aaUL, 0x5cb0a9dcUL, 0x76f988daUL,
        0x983e5152UL, 0xa831c66dUL, 0xb00327c8UL, 0xbf597fc7UL, 0xc6e00bf3UL, 0xd5a79147UL, 0x06ca6351UL, 0x14292967UL,
        0x27b70a85UL, 0x2e1b2138UL, 0x4d2c6dfcUL, 0x53380d13UL, 0x650a7354UL, 0x766a0abbUL, 0x81c2c92eUL, 0x92722c85UL,
        0xa2bfe8a1UL, 0xa81a664bUL, 0xc24b8b70UL, 0xc76c51a3UL, 0xd192e819UL, 0xd6990624UL, 0xf40e3585UL, 0x106aa070UL,
        0x19a4c116UL, 0x1e376c08UL, 0x2748774cUL, 0x34b0bcb5UL, 0x391c0cb3UL, 0x4ed8aa4aUL, 0x5b9cca4fUL, 0x682e6ff3UL,
        0x748f82eeUL, 0x78a5636fUL, 0x84c87814UL, 0x8cc70208UL, 0x90befffaUL, 0xa4506cebUL, 0xbef9a3f7UL, 0xc67178f2UL};
    uint32_t VAR_3[8], VAR_4[64], VAR_5, VAR_6, VAR_7;
    int VAR_8;


    for (VAR_8 = 0; VAR_8 < 8; VAR_8++)
        VAR_3[VAR_8] = VAR_0->state[VAR_8];


    for (VAR_8 = 0; VAR_8 < 16; VAR_8++)
        VAR_4[VAR_8] =
            (uint32_t)VAR_1[4 * VAR_8] << 24 | (uint32_t)VAR_1[4 * VAR_8 + 1] << 16 | (uint32_t)VAR_1[4 * VAR_8 + 2] << 8 | (uint32_t)VAR_1[4 * VAR_8 + 3];


    for (VAR_8 = 16; VAR_8 < 64; VAR_8++)
        VAR_4[VAR_8] = FUNC_1(VAR_4[VAR_8 - 2]) + VAR_4[VAR_8 - 7] + FUNC_0(VAR_4[VAR_8 - 15]) + VAR_4[VAR_8 - 16];


    for (VAR_8 = 0; VAR_8 < 64; ++VAR_8) {
        FUNC_2(VAR_3[0], VAR_3[1], VAR_3[2], VAR_3[3], VAR_3[4], VAR_3[5], VAR_3[6], VAR_3[7], VAR_8);
        VAR_5 = VAR_3[7];
        VAR_3[7] = VAR_3[6];
        VAR_3[6] = VAR_3[5];
        VAR_3[5] = VAR_3[4];
        VAR_3[4] = VAR_3[3];
        VAR_3[3] = VAR_3[2];
        VAR_3[2] = VAR_3[1];
        VAR_3[1] = VAR_3[0];
        VAR_3[0] = VAR_5;
    }


    for (VAR_8 = 0; VAR_8 < 8; VAR_8++)
        VAR_0->state[VAR_8] = VAR_0->state[VAR_8] + VAR_3[VAR_8];
}
