
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct cvm_enc_ctx {int key_len; int key_type; int cipher_type; scalar_t__ enc_key; } ;
struct crypto_tfm {int dummy; } ;
struct crypto_ablkcipher {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct crypto_tfm* FUNC_0 (struct crypto_ablkcipher*) ;
 struct cvm_enc_ctx* FUNC_1 (struct crypto_tfm*) ;
 int FUNC_2 (scalar_t__,int const*,int) ;
 int FUNC_3 (struct crypto_tfm*,int const*,int) ;

__attribute__((used)) static int FUNC_4(struct crypto_ablkcipher *VAR_5, const u8 *VAR_6,
     u32 VAR_7)
{
 struct crypto_tfm *VAR_8 = FUNC_0(VAR_5);
 struct cvm_enc_ctx *VAR_9 = FUNC_1(VAR_8);
 int VAR_10;
 const u8 *VAR_11 = VAR_6;
 const u8 *VAR_12 = VAR_6 + (VAR_7 / 2);

 VAR_10 = FUNC_3(VAR_8, VAR_6, VAR_7);
 if (VAR_10)
  return VAR_10;
 VAR_9->key_len = VAR_7;
 FUNC_2(VAR_9->enc_key, VAR_11, VAR_7 / 2);
 FUNC_2(VAR_9->enc_key + VAR_4, VAR_12, VAR_7 / 2);
 VAR_9->cipher_type = VAR_2;
 switch (VAR_9->key_len) {
 case 32:
  VAR_9->key_type = VAR_0;
  break;
 case 64:
  VAR_9->key_type = VAR_1;
  break;
 default:
  return -VAR_3;
 }

 return 0;
}
