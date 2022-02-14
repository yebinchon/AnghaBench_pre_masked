
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int secp256k1_scalar ;


 int FUNC_0 (unsigned char*,unsigned char*,size_t) ;
 int FUNC_1 (unsigned char*,int const*) ;

__attribute__((used)) static int FUNC_2(unsigned char *VAR_0, size_t *VAR_1, const secp256k1_scalar* VAR_2, const secp256k1_scalar* VAR_3) {
    unsigned char VAR_4[33] = {0}, VAR_5[33] = {0};
    unsigned char *VAR_6 = VAR_4, *VAR_7 = VAR_5;
    size_t VAR_8 = 33, VAR_9 = 33;
    FUNC_1(&VAR_4[1], VAR_2);
    FUNC_1(&VAR_5[1], VAR_3);
    while (VAR_8 > 1 && VAR_6[0] == 0 && VAR_6[1] < 0x80) { VAR_8--; VAR_6++; }
    while (VAR_9 > 1 && VAR_7[0] == 0 && VAR_7[1] < 0x80) { VAR_9--; VAR_7++; }
    if (*VAR_1 < 6+VAR_9+VAR_8) {
        *VAR_1 = 6 + VAR_9 + VAR_8;
        return 0;
    }
    *VAR_1 = 6 + VAR_9 + VAR_8;
    VAR_0[0] = 0x30;
    VAR_0[1] = 4 + VAR_9 + VAR_8;
    VAR_0[2] = 0x02;
    VAR_0[3] = VAR_8;
    FUNC_0(VAR_0+4, VAR_6, VAR_8);
    VAR_0[4+VAR_8] = 0x02;
    VAR_0[5+VAR_8] = VAR_9;
    FUNC_0(VAR_0+VAR_8+6, VAR_7, VAR_9);
    return 1;
}
