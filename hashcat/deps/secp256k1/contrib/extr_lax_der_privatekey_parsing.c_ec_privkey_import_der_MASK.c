
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int secp256k1_context ;


 int FUNC_0 (unsigned char*,unsigned char const*,unsigned char const) ;
 int FUNC_1 (unsigned char*,int ,int) ;
 int FUNC_2 (int const*,unsigned char*) ;

int FUNC_3(const secp256k1_context* VAR_0, unsigned char *VAR_1, const unsigned char *VAR_2, size_t VAR_3) {
    const unsigned char *VAR_4 = VAR_2 + VAR_3;
    int VAR_5 = 0;
    int VAR_6 = 0;
    FUNC_1(VAR_1, 0, 32);

    if (VAR_4 < VAR_2+1 || *VAR_2 != 0x30) {
        return 0;
    }
    VAR_2++;

    if (VAR_4 < VAR_2+1 || !(*VAR_2 & 0x80)) {
        return 0;
    }
    VAR_5 = *VAR_2 & ~0x80; VAR_2++;
    if (VAR_5 < 1 || VAR_5 > 2) {
        return 0;
    }
    if (VAR_4 < VAR_2+VAR_5) {
        return 0;
    }

    VAR_6 = VAR_2[VAR_5-1] | (VAR_5 > 1 ? VAR_2[VAR_5-2] << 8 : 0);
    VAR_2 += VAR_5;
    if (VAR_4 < VAR_2+VAR_6) {
        return 0;
    }

    if (VAR_4 < VAR_2+3 || VAR_2[0] != 0x02 || VAR_2[1] != 0x01 || VAR_2[2] != 0x01) {
        return 0;
    }
    VAR_2 += 3;

    if (VAR_4 < VAR_2+2 || VAR_2[0] != 0x04 || VAR_2[1] > 0x20 || VAR_4 < VAR_2+2+VAR_2[1]) {
        return 0;
    }
    FUNC_0(VAR_1 + 32 - VAR_2[1], VAR_2 + 2, VAR_2[1]);
    if (!FUNC_2(VAR_0, VAR_1)) {
        FUNC_1(VAR_1, 0, 32);
        return 0;
    }
    return 1;
}
