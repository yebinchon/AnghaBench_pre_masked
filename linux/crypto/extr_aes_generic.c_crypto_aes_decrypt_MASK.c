
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct crypto_tfm {int dummy; } ;
struct crypto_aes_ctx {int key_length; int* key_dec; } ;


 struct crypto_aes_ctx* FUNC_0 (struct crypto_tfm*) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int*,int*,int const*) ;
 int FUNC_3 (int*,int*,int const*) ;
 int FUNC_4 (int,int *) ;

__attribute__((used)) static void FUNC_5(struct crypto_tfm *VAR_0, u8 *VAR_1, const u8 *VAR_2)
{
 const struct crypto_aes_ctx *VAR_3 = FUNC_0(VAR_0);
 u32 VAR_4[4], VAR_5[4];
 const int VAR_6 = VAR_3->key_length;
 const u32 *VAR_7 = VAR_3->key_dec + 4;

 VAR_4[0] = VAR_3->key_dec[0] ^ FUNC_1(VAR_2);
 VAR_4[1] = VAR_3->key_dec[1] ^ FUNC_1(VAR_2 + 4);
 VAR_4[2] = VAR_3->key_dec[2] ^ FUNC_1(VAR_2 + 8);
 VAR_4[3] = VAR_3->key_dec[3] ^ FUNC_1(VAR_2 + 12);

 if (VAR_6 > 24) {
  FUNC_3(VAR_5, VAR_4, VAR_7);
  FUNC_3(VAR_4, VAR_5, VAR_7);
 }

 if (VAR_6 > 16) {
  FUNC_3(VAR_5, VAR_4, VAR_7);
  FUNC_3(VAR_4, VAR_5, VAR_7);
 }

 FUNC_3(VAR_5, VAR_4, VAR_7);
 FUNC_3(VAR_4, VAR_5, VAR_7);
 FUNC_3(VAR_5, VAR_4, VAR_7);
 FUNC_3(VAR_4, VAR_5, VAR_7);
 FUNC_3(VAR_5, VAR_4, VAR_7);
 FUNC_3(VAR_4, VAR_5, VAR_7);
 FUNC_3(VAR_5, VAR_4, VAR_7);
 FUNC_3(VAR_4, VAR_5, VAR_7);
 FUNC_3(VAR_5, VAR_4, VAR_7);
 FUNC_2(VAR_4, VAR_5, VAR_7);

 FUNC_4(VAR_4[0], VAR_1);
 FUNC_4(VAR_4[1], VAR_1 + 4);
 FUNC_4(VAR_4[2], VAR_1 + 8);
 FUNC_4(VAR_4[3], VAR_1 + 12);
}
