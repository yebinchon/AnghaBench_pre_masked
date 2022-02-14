
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct s5p_aes_ctx {unsigned int keylen; int aes_key; } ;
struct crypto_tfm {int dummy; } ;
struct crypto_ablkcipher {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 struct crypto_tfm* FUNC_0 (struct crypto_ablkcipher*) ;
 struct s5p_aes_ctx* FUNC_1 (struct crypto_tfm*) ;
 int FUNC_2 (int ,int const*,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct crypto_ablkcipher *VAR_4,
     const u8 *VAR_5, unsigned int VAR_6)
{
 struct crypto_tfm *VAR_7 = FUNC_0(VAR_4);
 struct s5p_aes_ctx *VAR_8 = FUNC_1(VAR_7);

 if (VAR_6 != VAR_0 &&
     VAR_6 != VAR_1 &&
     VAR_6 != VAR_2)
  return -VAR_3;

 FUNC_2(VAR_8->aes_key, VAR_5, VAR_6);
 VAR_8->keylen = VAR_6;

 return 0;
}
