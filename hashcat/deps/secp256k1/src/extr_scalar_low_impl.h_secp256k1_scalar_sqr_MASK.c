
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int secp256k1_scalar ;


 int const VAR_0 ;

__attribute__((used)) static void FUNC_0(secp256k1_scalar *VAR_1, const secp256k1_scalar *VAR_2) {
    *VAR_1 = (*VAR_2 * *VAR_2) % VAR_0;
}
