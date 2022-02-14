
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct qce_cipher_ctx {unsigned int enc_keylen; int fallback; int enc_key; } ;
struct crypto_tfm {int dummy; } ;
struct crypto_ablkcipher {int dummy; } ;




 int VAR_0 ;
 struct crypto_tfm* FUNC_0 (struct crypto_ablkcipher*) ;
 int FUNC_1 (int ,int const*,unsigned int) ;
 struct qce_cipher_ctx* FUNC_2 (struct crypto_tfm*) ;
 int FUNC_3 (int ,int const*,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct crypto_ablkcipher *VAR_1, const u8 *VAR_2,
     unsigned int VAR_3)
{
 struct crypto_tfm *VAR_4 = FUNC_0(VAR_1);
 struct qce_cipher_ctx *VAR_5 = FUNC_2(VAR_4);
 int VAR_6;

 if (!VAR_2 || !VAR_3)
  return -VAR_0;

 switch (VAR_3) {
 case 129:
 case 128:
  break;
 default:
  goto fallback;
 }

 VAR_5->enc_keylen = VAR_3;
 FUNC_3(VAR_5->enc_key, VAR_2, VAR_3);
 return 0;
fallback:
 VAR_6 = FUNC_1(VAR_5->fallback, VAR_2, VAR_3);
 if (!VAR_6)
  VAR_5->enc_keylen = VAR_3;
 return VAR_6;
}
