
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spacc_ablk_ctx {unsigned int key_len; int key; } ;
struct crypto_tfm {int dummy; } ;
struct crypto_ablkcipher {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct crypto_ablkcipher*,int ) ;
 struct crypto_tfm* FUNC_1 (struct crypto_ablkcipher*) ;
 struct spacc_ablk_ctx* FUNC_2 (struct crypto_tfm*) ;
 int FUNC_3 (int ,int const*,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct crypto_ablkcipher *VAR_3,
      const u8 *VAR_4, unsigned int VAR_5)
{
 struct crypto_tfm *VAR_6 = FUNC_1(VAR_3);
 struct spacc_ablk_ctx *VAR_7 = FUNC_2(VAR_6);
 int VAR_8 = 0;

 if (VAR_5 > VAR_0) {
  FUNC_0(VAR_3, VAR_1);
  VAR_8 = -VAR_2;
  goto out;
 }

 FUNC_3(VAR_7->key, VAR_4, VAR_5);
 VAR_7->key_len = VAR_5;

out:
 return VAR_8;
}
