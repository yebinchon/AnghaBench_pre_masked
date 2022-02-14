
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_4__ {int* d; } ;
typedef TYPE_1__ secp256k1_scalar ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(secp256k1_scalar *VAR_0, unsigned int VAR_1, int VAR_2) {
    uint64_t VAR_3;
    FUNC_0(VAR_1 < 256);
    VAR_1 += ((uint32_t) VAR_2 - 1) & 0x100;
    VAR_3 = (uint64_t)VAR_0->d[0] + (((uint32_t)((VAR_1 >> 5) == 0)) << (VAR_1 & 0x1F));
    VAR_0->d[0] = VAR_3 & 0xFFFFFFFFULL; VAR_3 >>= 32;
    VAR_3 += (uint64_t)VAR_0->d[1] + (((uint32_t)((VAR_1 >> 5) == 1)) << (VAR_1 & 0x1F));
    VAR_0->d[1] = VAR_3 & 0xFFFFFFFFULL; VAR_3 >>= 32;
    VAR_3 += (uint64_t)VAR_0->d[2] + (((uint32_t)((VAR_1 >> 5) == 2)) << (VAR_1 & 0x1F));
    VAR_0->d[2] = VAR_3 & 0xFFFFFFFFULL; VAR_3 >>= 32;
    VAR_3 += (uint64_t)VAR_0->d[3] + (((uint32_t)((VAR_1 >> 5) == 3)) << (VAR_1 & 0x1F));
    VAR_0->d[3] = VAR_3 & 0xFFFFFFFFULL; VAR_3 >>= 32;
    VAR_3 += (uint64_t)VAR_0->d[4] + (((uint32_t)((VAR_1 >> 5) == 4)) << (VAR_1 & 0x1F));
    VAR_0->d[4] = VAR_3 & 0xFFFFFFFFULL; VAR_3 >>= 32;
    VAR_3 += (uint64_t)VAR_0->d[5] + (((uint32_t)((VAR_1 >> 5) == 5)) << (VAR_1 & 0x1F));
    VAR_0->d[5] = VAR_3 & 0xFFFFFFFFULL; VAR_3 >>= 32;
    VAR_3 += (uint64_t)VAR_0->d[6] + (((uint32_t)((VAR_1 >> 5) == 6)) << (VAR_1 & 0x1F));
    VAR_0->d[6] = VAR_3 & 0xFFFFFFFFULL; VAR_3 >>= 32;
    VAR_3 += (uint64_t)VAR_0->d[7] + (((uint32_t)((VAR_1 >> 5) == 7)) << (VAR_1 & 0x1F));
    VAR_0->d[7] = VAR_3 & 0xFFFFFFFFULL;




}
