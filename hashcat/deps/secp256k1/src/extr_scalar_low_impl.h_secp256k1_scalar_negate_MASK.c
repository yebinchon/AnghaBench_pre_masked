
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ secp256k1_scalar ;


 scalar_t__ const VAR_0 ;

__attribute__((used)) static void FUNC_0(secp256k1_scalar *VAR_1, const secp256k1_scalar *VAR_2) {
    if (*VAR_2 == 0) {
        *VAR_1 = 0;
    } else {
        *VAR_1 = VAR_0 - *VAR_2;
    }
}
