
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int FUNC_0 (unsigned char*,unsigned char*,unsigned char*,int *) ;
 int FUNC_1 (unsigned char*,int) ;

__attribute__((used)) static int
FUNC_2(unsigned char *VAR_0, const unsigned char *VAR_1,
                  unsigned long long VAR_2, const unsigned char *VAR_3, uint64_t VAR_4,
                  const unsigned char *VAR_5)
{
    unsigned char VAR_6[16];
    unsigned char VAR_7[64];
    unsigned char VAR_8[32];
    unsigned int VAR_9;
    unsigned int VAR_10;

    if (!VAR_2) {
        return 0;
    }
    for (VAR_9 = 0; VAR_9 < 32; VAR_9++) {
        VAR_8[VAR_9] = VAR_5[VAR_9];
    }
    for (VAR_9 = 0; VAR_9 < 8; VAR_9++) {
        VAR_6[VAR_9] = VAR_3[VAR_9];
    }
    for (VAR_9 = 8; VAR_9 < 16; VAR_9++) {
        VAR_6[VAR_9] = (unsigned char) (VAR_4 & 0xff);
        VAR_4 >>= 8;
    }
    while (VAR_2 >= 64) {
        FUNC_0(VAR_7, VAR_6, VAR_8, ((void*)0));
        for (VAR_9 = 0; VAR_9 < 64; VAR_9++) {
            VAR_0[VAR_9] = VAR_1[VAR_9] ^ VAR_7[VAR_9];
        }
        VAR_10 = 1;
        for (VAR_9 = 8; VAR_9 < 16; VAR_9++) {
            VAR_10 += (unsigned int) VAR_6[VAR_9];
            VAR_6[VAR_9] = VAR_10;
            VAR_10 >>= 8;
        }
        VAR_2 -= 64;
        VAR_0 += 64;
        VAR_1 += 64;
    }
    if (VAR_2) {
        FUNC_0(VAR_7, VAR_6, VAR_8, ((void*)0));
        for (VAR_9 = 0; VAR_9 < (unsigned int) VAR_2; VAR_9++) {
            VAR_0[VAR_9] = VAR_1[VAR_9] ^ VAR_7[VAR_9];
        }
    }
    FUNC_1(VAR_7, sizeof VAR_7);
    FUNC_1(VAR_8, sizeof VAR_8);

    return 0;
}
