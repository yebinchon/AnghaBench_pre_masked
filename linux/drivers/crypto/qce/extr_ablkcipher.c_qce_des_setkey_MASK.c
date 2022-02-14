
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct qce_cipher_ctx {unsigned int enc_keylen; int enc_key; } ;
struct crypto_ablkcipher {int dummy; } ;


 struct qce_cipher_ctx* FUNC_0 (struct crypto_ablkcipher*) ;
 int FUNC_1 (int ,int const*,unsigned int) ;
 int FUNC_2 (struct crypto_ablkcipher*,int const*) ;

__attribute__((used)) static int FUNC_3(struct crypto_ablkcipher *VAR_0, const u8 *VAR_1,
     unsigned int VAR_2)
{
 struct qce_cipher_ctx *VAR_3 = FUNC_0(VAR_0);
 int VAR_4;

 VAR_4 = FUNC_2(VAR_0, VAR_1);
 if (VAR_4)
  return VAR_4;

 VAR_3->enc_keylen = VAR_2;
 FUNC_1(VAR_3->enc_key, VAR_1, VAR_2);
 return 0;
}
