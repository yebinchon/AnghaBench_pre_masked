
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int secp256k1_ecdsa_signature ;
typedef int secp256k1_context ;


 int FUNC_0 (unsigned char*,unsigned char const*,size_t) ;
 int FUNC_1 (unsigned char*,int ,int) ;
 int FUNC_2 (int const*,int *,unsigned char*) ;

int FUNC_3(const secp256k1_context* VAR_0, secp256k1_ecdsa_signature* VAR_1, const unsigned char *VAR_2, size_t VAR_3) {
    size_t VAR_4, VAR_5, VAR_6, VAR_7;
    size_t VAR_8 = 0;
    size_t VAR_9;
    unsigned char VAR_10[64] = {0};
    int VAR_11 = 0;


    FUNC_2(VAR_0, VAR_1, VAR_10);


    if (VAR_8 == VAR_3 || VAR_2[VAR_8] != 0x30) {
        return 0;
    }
    VAR_8++;


    if (VAR_8 == VAR_3) {
        return 0;
    }
    VAR_9 = VAR_2[VAR_8++];
    if (VAR_9 & 0x80) {
        VAR_9 -= 0x80;
        if (VAR_9 > VAR_3 - VAR_8) {
            return 0;
        }
        VAR_8 += VAR_9;
    }


    if (VAR_8 == VAR_3 || VAR_2[VAR_8] != 0x02) {
        return 0;
    }
    VAR_8++;


    if (VAR_8 == VAR_3) {
        return 0;
    }
    VAR_9 = VAR_2[VAR_8++];
    if (VAR_9 & 0x80) {
        VAR_9 -= 0x80;
        if (VAR_9 > VAR_3 - VAR_8) {
            return 0;
        }
        while (VAR_9 > 0 && VAR_2[VAR_8] == 0) {
            VAR_8++;
            VAR_9--;
        }
        if (VAR_9 >= sizeof(size_t)) {
            return 0;
        }
        VAR_5 = 0;
        while (VAR_9 > 0) {
            VAR_5 = (VAR_5 << 8) + VAR_2[VAR_8];
            VAR_8++;
            VAR_9--;
        }
    } else {
        VAR_5 = VAR_9;
    }
    if (VAR_5 > VAR_3 - VAR_8) {
        return 0;
    }
    VAR_4 = VAR_8;
    VAR_8 += VAR_5;


    if (VAR_8 == VAR_3 || VAR_2[VAR_8] != 0x02) {
        return 0;
    }
    VAR_8++;


    if (VAR_8 == VAR_3) {
        return 0;
    }
    VAR_9 = VAR_2[VAR_8++];
    if (VAR_9 & 0x80) {
        VAR_9 -= 0x80;
        if (VAR_9 > VAR_3 - VAR_8) {
            return 0;
        }
        while (VAR_9 > 0 && VAR_2[VAR_8] == 0) {
            VAR_8++;
            VAR_9--;
        }
        if (VAR_9 >= sizeof(size_t)) {
            return 0;
        }
        VAR_7 = 0;
        while (VAR_9 > 0) {
            VAR_7 = (VAR_7 << 8) + VAR_2[VAR_8];
            VAR_8++;
            VAR_9--;
        }
    } else {
        VAR_7 = VAR_9;
    }
    if (VAR_7 > VAR_3 - VAR_8) {
        return 0;
    }
    VAR_6 = VAR_8;
    VAR_8 += VAR_7;


    while (VAR_5 > 0 && VAR_2[VAR_4] == 0) {
        VAR_5--;
        VAR_4++;
    }

    if (VAR_5 > 32) {
        VAR_11 = 1;
    } else {
        FUNC_0(VAR_10 + 32 - VAR_5, VAR_2 + VAR_4, VAR_5);
    }


    while (VAR_7 > 0 && VAR_2[VAR_6] == 0) {
        VAR_7--;
        VAR_6++;
    }

    if (VAR_7 > 32) {
        VAR_11 = 1;
    } else {
        FUNC_0(VAR_10 + 64 - VAR_7, VAR_2 + VAR_6, VAR_7);
    }

    if (!VAR_11) {
        VAR_11 = !FUNC_2(VAR_0, VAR_1, VAR_10);
    }
    if (VAR_11) {
        FUNC_1(VAR_10, 0, 64);
        FUNC_2(VAR_0, VAR_1, VAR_10);
    }
    return 1;
}
