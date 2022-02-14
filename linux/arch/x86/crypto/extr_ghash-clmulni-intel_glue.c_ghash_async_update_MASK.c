
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shash_desc {int dummy; } ;
struct ghash_async_ctx {struct cryptd_ahash* cryptd_tfm; } ;
struct crypto_ahash {int dummy; } ;
struct cryptd_ahash {int base; } ;
struct ahash_request {int dummy; } ;


 struct ahash_request* FUNC_0 (struct ahash_request*) ;
 int FUNC_1 (struct ahash_request*,int *) ;
 scalar_t__ FUNC_2 (struct cryptd_ahash*) ;
 struct shash_desc* FUNC_3 (struct ahash_request*) ;
 struct ghash_async_ctx* FUNC_4 (struct crypto_ahash*) ;
 struct crypto_ahash* FUNC_5 (struct ahash_request*) ;
 int FUNC_6 (struct ahash_request*) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (struct ahash_request*,struct ahash_request*,int) ;
 int FUNC_10 (struct ahash_request*,struct shash_desc*) ;

__attribute__((used)) static int FUNC_11(struct ahash_request *VAR_0)
{
 struct ahash_request *VAR_1 = FUNC_0(VAR_0);
 struct crypto_ahash *VAR_2 = FUNC_5(VAR_0);
 struct ghash_async_ctx *VAR_3 = FUNC_4(VAR_2);
 struct cryptd_ahash *VAR_4 = VAR_3->cryptd_tfm;

 if (!FUNC_7() ||
     (FUNC_8() && FUNC_2(VAR_4))) {
  FUNC_9(VAR_1, VAR_0, sizeof(*VAR_0));
  FUNC_1(VAR_1, &VAR_4->base);
  return FUNC_6(VAR_1);
 } else {
  struct shash_desc *VAR_5 = FUNC_3(VAR_1);
  return FUNC_10(VAR_0, VAR_5);
 }
}
