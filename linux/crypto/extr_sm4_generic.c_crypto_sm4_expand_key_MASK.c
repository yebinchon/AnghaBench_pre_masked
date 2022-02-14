
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct crypto_sm4_ctx {int* rkey_enc; int* rkey_dec; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int) ;

int FUNC_2(struct crypto_sm4_ctx *VAR_4, const u8 *VAR_5,
     unsigned int VAR_6)
{
 u32 VAR_7[4], VAR_8;
 const u32 *VAR_9 = (u32 *)VAR_5;
 int VAR_10;

 if (VAR_6 != VAR_1)
  return -VAR_0;

 for (VAR_10 = 0; VAR_10 < 4; ++VAR_10)
  VAR_7[VAR_10] = FUNC_0(&VAR_9[VAR_10]) ^ VAR_3[VAR_10];

 for (VAR_10 = 0; VAR_10 < 32; ++VAR_10) {
  VAR_8 = VAR_7[0] ^ FUNC_1(VAR_7[1] ^ VAR_7[2] ^ VAR_7[3] ^ VAR_2[VAR_10]);
  VAR_4->rkey_enc[VAR_10] = VAR_8;
  VAR_7[0] = VAR_7[1];
  VAR_7[1] = VAR_7[2];
  VAR_7[2] = VAR_7[3];
  VAR_7[3] = VAR_8;
 }

 for (VAR_10 = 0; VAR_10 < 32; ++VAR_10)
  VAR_4->rkey_dec[VAR_10] = VAR_4->rkey_enc[31 - VAR_10];

 return 0;
}
