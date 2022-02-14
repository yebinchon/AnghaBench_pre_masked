
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int* n; int magnitude; int normalized; } ;
typedef TYPE_1__ secp256k1_fe ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_1(secp256k1_fe *VAR_0, const unsigned char *VAR_1) {
    VAR_0->n[0] = (uint32_t)VAR_1[31] | ((uint32_t)VAR_1[30] << 8) | ((uint32_t)VAR_1[29] << 16) | ((uint32_t)(VAR_1[28] & 0x3) << 24);
    VAR_0->n[1] = (uint32_t)((VAR_1[28] >> 2) & 0x3f) | ((uint32_t)VAR_1[27] << 6) | ((uint32_t)VAR_1[26] << 14) | ((uint32_t)(VAR_1[25] & 0xf) << 22);
    VAR_0->n[2] = (uint32_t)((VAR_1[25] >> 4) & 0xf) | ((uint32_t)VAR_1[24] << 4) | ((uint32_t)VAR_1[23] << 12) | ((uint32_t)(VAR_1[22] & 0x3f) << 20);
    VAR_0->n[3] = (uint32_t)((VAR_1[22] >> 6) & 0x3) | ((uint32_t)VAR_1[21] << 2) | ((uint32_t)VAR_1[20] << 10) | ((uint32_t)VAR_1[19] << 18);
    VAR_0->n[4] = (uint32_t)VAR_1[18] | ((uint32_t)VAR_1[17] << 8) | ((uint32_t)VAR_1[16] << 16) | ((uint32_t)(VAR_1[15] & 0x3) << 24);
    VAR_0->n[5] = (uint32_t)((VAR_1[15] >> 2) & 0x3f) | ((uint32_t)VAR_1[14] << 6) | ((uint32_t)VAR_1[13] << 14) | ((uint32_t)(VAR_1[12] & 0xf) << 22);
    VAR_0->n[6] = (uint32_t)((VAR_1[12] >> 4) & 0xf) | ((uint32_t)VAR_1[11] << 4) | ((uint32_t)VAR_1[10] << 12) | ((uint32_t)(VAR_1[9] & 0x3f) << 20);
    VAR_0->n[7] = (uint32_t)((VAR_1[9] >> 6) & 0x3) | ((uint32_t)VAR_1[8] << 2) | ((uint32_t)VAR_1[7] << 10) | ((uint32_t)VAR_1[6] << 18);
    VAR_0->n[8] = (uint32_t)VAR_1[5] | ((uint32_t)VAR_1[4] << 8) | ((uint32_t)VAR_1[3] << 16) | ((uint32_t)(VAR_1[2] & 0x3) << 24);
    VAR_0->n[9] = (uint32_t)((VAR_1[2] >> 2) & 0x3f) | ((uint32_t)VAR_1[1] << 6) | ((uint32_t)VAR_1[0] << 14);

    if (VAR_0->n[9] == 0x3FFFFFUL && (VAR_0->n[8] & VAR_0->n[7] & VAR_0->n[6] & VAR_0->n[5] & VAR_0->n[4] & VAR_0->n[3] & VAR_0->n[2]) == 0x3FFFFFFUL && (VAR_0->n[1] + 0x40UL + ((VAR_0->n[0] + 0x3D1UL) >> 26)) > 0x3FFFFFFUL) {
        return 0;
    }





    return 1;
}
