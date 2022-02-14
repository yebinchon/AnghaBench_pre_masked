
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_4__ {int* d; } ;
typedef TYPE_1__ secp256k1_scalar ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_1(secp256k1_scalar *VAR_8, int VAR_9) {


    uint32_t VAR_10 = !VAR_9 - 1;
    uint32_t VAR_11 = 0xFFFFFFFFUL * (FUNC_0(VAR_8) == 0);
    uint64_t VAR_12 = (uint64_t)(VAR_8->d[0] ^ VAR_10) + ((VAR_0 + 1) & VAR_10);
    VAR_8->d[0] = VAR_12 & VAR_11; VAR_12 >>= 32;
    VAR_12 += (uint64_t)(VAR_8->d[1] ^ VAR_10) + (VAR_1 & VAR_10);
    VAR_8->d[1] = VAR_12 & VAR_11; VAR_12 >>= 32;
    VAR_12 += (uint64_t)(VAR_8->d[2] ^ VAR_10) + (VAR_2 & VAR_10);
    VAR_8->d[2] = VAR_12 & VAR_11; VAR_12 >>= 32;
    VAR_12 += (uint64_t)(VAR_8->d[3] ^ VAR_10) + (VAR_3 & VAR_10);
    VAR_8->d[3] = VAR_12 & VAR_11; VAR_12 >>= 32;
    VAR_12 += (uint64_t)(VAR_8->d[4] ^ VAR_10) + (VAR_4 & VAR_10);
    VAR_8->d[4] = VAR_12 & VAR_11; VAR_12 >>= 32;
    VAR_12 += (uint64_t)(VAR_8->d[5] ^ VAR_10) + (VAR_5 & VAR_10);
    VAR_8->d[5] = VAR_12 & VAR_11; VAR_12 >>= 32;
    VAR_12 += (uint64_t)(VAR_8->d[6] ^ VAR_10) + (VAR_6 & VAR_10);
    VAR_8->d[6] = VAR_12 & VAR_11; VAR_12 >>= 32;
    VAR_12 += (uint64_t)(VAR_8->d[7] ^ VAR_10) + (VAR_7 & VAR_10);
    VAR_8->d[7] = VAR_12 & VAR_11;
    return 2 * (VAR_10 == 0) - 1;
}
