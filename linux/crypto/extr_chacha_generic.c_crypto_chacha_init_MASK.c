
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct chacha_ctx {int* key; } ;


 int FUNC_0 (int const*) ;

void FUNC_1(u32 *VAR_0, const struct chacha_ctx *VAR_1, const u8 *VAR_2)
{
 VAR_0[0] = 0x61707865;
 VAR_0[1] = 0x3320646e;
 VAR_0[2] = 0x79622d32;
 VAR_0[3] = 0x6b206574;
 VAR_0[4] = VAR_1->key[0];
 VAR_0[5] = VAR_1->key[1];
 VAR_0[6] = VAR_1->key[2];
 VAR_0[7] = VAR_1->key[3];
 VAR_0[8] = VAR_1->key[4];
 VAR_0[9] = VAR_1->key[5];
 VAR_0[10] = VAR_1->key[6];
 VAR_0[11] = VAR_1->key[7];
 VAR_0[12] = FUNC_0(VAR_2 + 0);
 VAR_0[13] = FUNC_0(VAR_2 + 4);
 VAR_0[14] = FUNC_0(VAR_2 + 8);
 VAR_0[15] = FUNC_0(VAR_2 + 12);
}
