
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shash_desc {struct crypto_shash* tfm; } ;
struct ghash_async_ctx {struct cryptd_ahash* cryptd_tfm; } ;
struct crypto_shash {int dummy; } ;
struct crypto_ahash {int dummy; } ;
struct cryptd_ahash {int base; } ;
struct ahash_request {int dummy; } ;


 struct ahash_request* FUNC_0 (struct ahash_request*) ;
 int FUNC_1 (struct ahash_request*,int *) ;
 struct crypto_shash* FUNC_2 (struct cryptd_ahash*) ;
 scalar_t__ FUNC_3 (struct cryptd_ahash*) ;
 struct shash_desc* FUNC_4 (struct ahash_request*) ;
 struct ghash_async_ctx* FUNC_5 (struct crypto_ahash*) ;
 int FUNC_6 (struct ahash_request*) ;
 struct crypto_ahash* FUNC_7 (struct ahash_request*) ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 (struct ahash_request*,struct ahash_request*,int) ;
 int FUNC_11 (struct ahash_request*,struct shash_desc*) ;

__attribute__((used)) static int FUNC_12(struct ahash_request *VAR_0)
{
 struct crypto_ahash *VAR_1 = FUNC_7(VAR_0);
 struct ghash_async_ctx *VAR_2 = FUNC_5(VAR_1);
 struct ahash_request *VAR_3 = FUNC_0(VAR_0);
 struct cryptd_ahash *VAR_4 = VAR_2->cryptd_tfm;

 if (!FUNC_8() ||
     (FUNC_9() && FUNC_3(VAR_4))) {
  FUNC_10(VAR_3, VAR_0, sizeof(*VAR_0));
  FUNC_1(VAR_3, &VAR_4->base);
  return FUNC_6(VAR_3);
 } else {
  struct shash_desc *VAR_5 = FUNC_4(VAR_3);
  struct crypto_shash *VAR_6 = FUNC_2(VAR_4);

  VAR_5->tfm = VAR_6;
  return FUNC_11(VAR_0, VAR_5);
 }
}
