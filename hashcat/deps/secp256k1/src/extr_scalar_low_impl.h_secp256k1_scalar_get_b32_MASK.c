
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int secp256k1_scalar ;


 int FUNC_0 (unsigned char*,int ,int) ;

__attribute__((used)) static void FUNC_1(unsigned char *VAR_0, const secp256k1_scalar* VAR_1) {
    FUNC_0(VAR_0, 0, 32);
    VAR_0[28] = *VAR_1 >> 24; VAR_0[29] = *VAR_1 >> 16; VAR_0[30] = *VAR_1 >> 8; VAR_0[31] = *VAR_1;
}
