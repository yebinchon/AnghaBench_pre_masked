
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int* n; } ;
typedef TYPE_1__ secp256k1_fe ;


 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(secp256k1_fe *VAR_0) {
    uint32_t VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
    uint32_t VAR_11, VAR_12;
    uint32_t VAR_13;

    VAR_1 = VAR_0->n[0];
    VAR_10 = VAR_0->n[9];


    VAR_13 = VAR_10 >> 22;


    VAR_1 += VAR_13 * 0x3D1UL;


    VAR_11 = VAR_1 & 0x3FFFFFFUL;
    VAR_12 = VAR_11 ^ 0x3D0UL;


    if ((VAR_11 != 0UL) & (VAR_12 != 0x3FFFFFFUL)) {
        return 0;
    }

    VAR_2 = VAR_0->n[1];
    VAR_3 = VAR_0->n[2];
    VAR_4 = VAR_0->n[3];
    VAR_5 = VAR_0->n[4];
    VAR_6 = VAR_0->n[5];
    VAR_7 = VAR_0->n[6];
    VAR_8 = VAR_0->n[7];
    VAR_9 = VAR_0->n[8];

    VAR_10 &= 0x03FFFFFUL;
    VAR_2 += (VAR_13 << 6);

    VAR_2 += (VAR_1 >> 26);
    VAR_3 += (VAR_2 >> 26); VAR_2 &= 0x3FFFFFFUL; VAR_11 |= VAR_2; VAR_12 &= VAR_2 ^ 0x40UL;
    VAR_4 += (VAR_3 >> 26); VAR_3 &= 0x3FFFFFFUL; VAR_11 |= VAR_3; VAR_12 &= VAR_3;
    VAR_5 += (VAR_4 >> 26); VAR_4 &= 0x3FFFFFFUL; VAR_11 |= VAR_4; VAR_12 &= VAR_4;
    VAR_6 += (VAR_5 >> 26); VAR_5 &= 0x3FFFFFFUL; VAR_11 |= VAR_5; VAR_12 &= VAR_5;
    VAR_7 += (VAR_6 >> 26); VAR_6 &= 0x3FFFFFFUL; VAR_11 |= VAR_6; VAR_12 &= VAR_6;
    VAR_8 += (VAR_7 >> 26); VAR_7 &= 0x3FFFFFFUL; VAR_11 |= VAR_7; VAR_12 &= VAR_7;
    VAR_9 += (VAR_8 >> 26); VAR_8 &= 0x3FFFFFFUL; VAR_11 |= VAR_8; VAR_12 &= VAR_8;
    VAR_10 += (VAR_9 >> 26); VAR_9 &= 0x3FFFFFFUL; VAR_11 |= VAR_9; VAR_12 &= VAR_9;
                                         VAR_11 |= VAR_10; VAR_12 &= VAR_10 ^ 0x3C00000UL;


    FUNC_0(VAR_10 >> 23 == 0);

    return (VAR_11 == 0) | (VAR_12 == 0x3FFFFFFUL);
}
