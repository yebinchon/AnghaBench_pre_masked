
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int secp256k1_scalar ;


 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(secp256k1_scalar *VAR_0, int VAR_1) {
    int VAR_2;
    FUNC_0(VAR_1 > 0);
    FUNC_0(VAR_1 < 16);
    VAR_2 = *VAR_0 & ((1 << VAR_1) - 1);
    *VAR_0 >>= VAR_1;
    return VAR_2;
}
