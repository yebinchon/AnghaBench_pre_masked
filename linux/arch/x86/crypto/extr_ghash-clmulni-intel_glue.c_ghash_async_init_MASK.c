
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shash_desc {struct crypto_shash* tfm; } ;
struct ghash_async_ctx {struct cryptd_ahash* cryptd_tfm; } ;
struct crypto_shash {int dummy; } ;
struct crypto_ahash {int dummy; } ;
struct cryptd_ahash {int dummy; } ;
struct ahash_request {int dummy; } ;


 struct ahash_request* FUNC_0 (struct ahash_request*) ;
 struct crypto_shash* FUNC_1 (struct cryptd_ahash*) ;
 struct shash_desc* FUNC_2 (struct ahash_request*) ;
 struct ghash_async_ctx* FUNC_3 (struct crypto_ahash*) ;
 struct crypto_ahash* FUNC_4 (struct ahash_request*) ;
 int FUNC_5 (struct shash_desc*) ;

__attribute__((used)) static int FUNC_6(struct ahash_request *VAR_0)
{
 struct crypto_ahash *VAR_1 = FUNC_4(VAR_0);
 struct ghash_async_ctx *VAR_2 = FUNC_3(VAR_1);
 struct ahash_request *VAR_3 = FUNC_0(VAR_0);
 struct cryptd_ahash *VAR_4 = VAR_2->cryptd_tfm;
 struct shash_desc *VAR_5 = FUNC_2(VAR_3);
 struct crypto_shash *VAR_6 = FUNC_1(VAR_4);

 VAR_5->tfm = VAR_6;
 return FUNC_5(VAR_5);
}
