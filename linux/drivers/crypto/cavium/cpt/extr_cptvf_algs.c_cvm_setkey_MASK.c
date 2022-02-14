
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct cvm_enc_ctx {int enc_key; int cipher_type; } ;
struct crypto_tfm {int dummy; } ;
struct crypto_ablkcipher {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct crypto_ablkcipher*,int ) ;
 struct crypto_tfm* FUNC_1 (struct crypto_ablkcipher*) ;
 struct cvm_enc_ctx* FUNC_2 (struct crypto_tfm*) ;
 int FUNC_3 (struct cvm_enc_ctx*,int ) ;
 int FUNC_4 (int ,int const*,int ) ;

__attribute__((used)) static int FUNC_5(struct crypto_ablkcipher *VAR_2, const u8 *VAR_3,
        u32 VAR_4, u8 VAR_5)
{
 struct crypto_tfm *VAR_6 = FUNC_1(VAR_2);
 struct cvm_enc_ctx *VAR_7 = FUNC_2(VAR_6);

 VAR_7->cipher_type = VAR_5;
 if (!FUNC_3(VAR_7, VAR_4)) {
  FUNC_4(VAR_7->enc_key, VAR_3, VAR_4);
  return 0;
 } else {
  FUNC_0(VAR_2,
         VAR_0);
  return -VAR_1;
 }
}
