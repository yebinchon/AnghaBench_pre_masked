
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shash_desc {int tfm; } ;
struct ghash_async_ctx {int cryptd_tfm; } ;
struct crypto_ahash {int dummy; } ;
struct ahash_request {int dummy; } ;


 struct ahash_request* FUNC_0 (struct ahash_request*) ;
 int FUNC_1 (int ) ;
 struct shash_desc* FUNC_2 (struct ahash_request*) ;
 struct ghash_async_ctx* FUNC_3 (struct crypto_ahash*) ;
 struct crypto_ahash* FUNC_4 (struct ahash_request*) ;
 int FUNC_5 (struct shash_desc*,void const*) ;

__attribute__((used)) static int FUNC_6(struct ahash_request *VAR_0, const void *VAR_1)
{
 struct ahash_request *VAR_2 = FUNC_0(VAR_0);
 struct crypto_ahash *VAR_3 = FUNC_4(VAR_0);
 struct ghash_async_ctx *VAR_4 = FUNC_3(VAR_3);
 struct shash_desc *VAR_5 = FUNC_2(VAR_2);

 VAR_5->tfm = FUNC_1(VAR_4->cryptd_tfm);

 return FUNC_5(VAR_5, VAR_1);
}
