
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shash_desc {int dummy; } ;
struct hmac_ctx {struct crypto_shash* hash; } ;
struct crypto_tfm {scalar_t__ __crt_alg; } ;
struct crypto_shash_spawn {int dummy; } ;
struct crypto_shash {scalar_t__ descsize; } ;
struct crypto_instance {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct crypto_shash*) ;
 int FUNC_1 (struct crypto_shash*) ;
 scalar_t__ FUNC_2 (int) ;
 struct crypto_shash* FUNC_3 (struct crypto_tfm*) ;
 int FUNC_4 (struct crypto_shash*) ;
 struct crypto_shash_spawn* FUNC_5 (struct crypto_instance*) ;
 scalar_t__ FUNC_6 (struct crypto_shash*) ;
 struct crypto_shash* FUNC_7 (struct crypto_shash_spawn*) ;
 struct hmac_ctx* FUNC_8 (struct crypto_shash*) ;

__attribute__((used)) static int FUNC_9(struct crypto_tfm *VAR_2)
{
 struct crypto_shash *VAR_3 = FUNC_3(VAR_2);
 struct crypto_shash *VAR_4;
 struct crypto_instance *VAR_5 = (void *)VAR_2->__crt_alg;
 struct crypto_shash_spawn *VAR_6 = FUNC_5(VAR_5);
 struct hmac_ctx *VAR_7 = FUNC_8(VAR_3);

 VAR_4 = FUNC_7(VAR_6);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 VAR_3->descsize = sizeof(struct shash_desc) +
      FUNC_6(VAR_4);
 if (FUNC_2(VAR_3->descsize > VAR_1)) {
  FUNC_4(VAR_4);
  return -VAR_0;
 }

 VAR_7->hash = VAR_4;
 return 0;
}
