
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_5__ {int* d; } ;
typedef TYPE_1__ secp256k1_scalar ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (TYPE_1__ const*) ;

__attribute__((used)) static void FUNC_1(secp256k1_scalar *VAR_8, const secp256k1_scalar *VAR_9) {
    uint32_t VAR_10 = 0xFFFFFFFFUL * (FUNC_0(VAR_9) == 0);
    uint64_t VAR_11 = (uint64_t)(~VAR_9->d[0]) + VAR_0 + 1;
    VAR_8->d[0] = VAR_11 & VAR_10; VAR_11 >>= 32;
    VAR_11 += (uint64_t)(~VAR_9->d[1]) + VAR_1;
    VAR_8->d[1] = VAR_11 & VAR_10; VAR_11 >>= 32;
    VAR_11 += (uint64_t)(~VAR_9->d[2]) + VAR_2;
    VAR_8->d[2] = VAR_11 & VAR_10; VAR_11 >>= 32;
    VAR_11 += (uint64_t)(~VAR_9->d[3]) + VAR_3;
    VAR_8->d[3] = VAR_11 & VAR_10; VAR_11 >>= 32;
    VAR_11 += (uint64_t)(~VAR_9->d[4]) + VAR_4;
    VAR_8->d[4] = VAR_11 & VAR_10; VAR_11 >>= 32;
    VAR_11 += (uint64_t)(~VAR_9->d[5]) + VAR_5;
    VAR_8->d[5] = VAR_11 & VAR_10; VAR_11 >>= 32;
    VAR_11 += (uint64_t)(~VAR_9->d[6]) + VAR_6;
    VAR_8->d[6] = VAR_11 & VAR_10; VAR_11 >>= 32;
    VAR_11 += (uint64_t)(~VAR_9->d[7]) + VAR_7;
    VAR_8->d[7] = VAR_11 & VAR_10;
}
