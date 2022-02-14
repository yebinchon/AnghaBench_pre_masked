
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shash_desc {int tfm; } ;
struct crypto_ahash {int dummy; } ;
struct cryptd_hash_ctx {int child; } ;
struct ahash_request {int dummy; } ;


 struct shash_desc* FUNC_0 (struct ahash_request*) ;
 struct cryptd_hash_ctx* FUNC_1 (struct crypto_ahash*) ;
 struct crypto_ahash* FUNC_2 (struct ahash_request*) ;
 int FUNC_3 (struct shash_desc*,void const*) ;

__attribute__((used)) static int FUNC_4(struct ahash_request *VAR_0, const void *VAR_1)
{
 struct crypto_ahash *VAR_2 = FUNC_2(VAR_0);
 struct cryptd_hash_ctx *VAR_3 = FUNC_1(VAR_2);
 struct shash_desc *VAR_4 = FUNC_0(VAR_0);

 VAR_4->tfm = VAR_3->child;

 return FUNC_3(VAR_4, VAR_1);
}
