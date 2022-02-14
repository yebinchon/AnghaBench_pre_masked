
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int* d; } ;
typedef TYPE_1__ secp256k1_scalar ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_2(secp256k1_scalar *VAR_0, const unsigned char *VAR_1, int *VAR_2) {
    int VAR_3;
    VAR_0->d[0] = (uint32_t)VAR_1[31] | (uint32_t)VAR_1[30] << 8 | (uint32_t)VAR_1[29] << 16 | (uint32_t)VAR_1[28] << 24;
    VAR_0->d[1] = (uint32_t)VAR_1[27] | (uint32_t)VAR_1[26] << 8 | (uint32_t)VAR_1[25] << 16 | (uint32_t)VAR_1[24] << 24;
    VAR_0->d[2] = (uint32_t)VAR_1[23] | (uint32_t)VAR_1[22] << 8 | (uint32_t)VAR_1[21] << 16 | (uint32_t)VAR_1[20] << 24;
    VAR_0->d[3] = (uint32_t)VAR_1[19] | (uint32_t)VAR_1[18] << 8 | (uint32_t)VAR_1[17] << 16 | (uint32_t)VAR_1[16] << 24;
    VAR_0->d[4] = (uint32_t)VAR_1[15] | (uint32_t)VAR_1[14] << 8 | (uint32_t)VAR_1[13] << 16 | (uint32_t)VAR_1[12] << 24;
    VAR_0->d[5] = (uint32_t)VAR_1[11] | (uint32_t)VAR_1[10] << 8 | (uint32_t)VAR_1[9] << 16 | (uint32_t)VAR_1[8] << 24;
    VAR_0->d[6] = (uint32_t)VAR_1[7] | (uint32_t)VAR_1[6] << 8 | (uint32_t)VAR_1[5] << 16 | (uint32_t)VAR_1[4] << 24;
    VAR_0->d[7] = (uint32_t)VAR_1[3] | (uint32_t)VAR_1[2] << 8 | (uint32_t)VAR_1[1] << 16 | (uint32_t)VAR_1[0] << 24;
    VAR_3 = FUNC_1(VAR_0, FUNC_0(VAR_0));
    if (VAR_2) {
        *VAR_2 = VAR_3;
    }
}
