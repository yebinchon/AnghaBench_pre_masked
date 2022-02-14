
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct essiv_tfm_ctx {struct crypto_shash* hash; struct crypto_shash* essiv_cipher; } ;
struct essiv_instance_ctx {int shash_driver_name; int essiv_cipher_name; } ;
struct crypto_shash {int dummy; } ;
typedef struct crypto_shash crypto_cipher ;


 scalar_t__ FUNC_0 (struct crypto_shash*) ;
 int FUNC_1 (struct crypto_shash*) ;
 struct crypto_shash* FUNC_2 (int ,int ,int ) ;
 struct crypto_shash* FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct crypto_shash*) ;

__attribute__((used)) static int FUNC_5(struct essiv_instance_ctx *VAR_0,
     struct essiv_tfm_ctx *VAR_1)
{
 struct crypto_cipher *VAR_2;
 struct crypto_shash *VAR_3;
 int VAR_4;

 VAR_2 = FUNC_2(VAR_0->essiv_cipher_name, 0, 0);
 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);

 VAR_3 = FUNC_3(VAR_0->shash_driver_name, 0, 0);
 if (FUNC_0(VAR_3)) {
  VAR_4 = FUNC_1(VAR_3);
  goto err_free_essiv_cipher;
 }

 VAR_1->essiv_cipher = VAR_2;
 VAR_1->hash = VAR_3;

 return 0;

err_free_essiv_cipher:
 FUNC_4(VAR_2);
 return VAR_4;
}
