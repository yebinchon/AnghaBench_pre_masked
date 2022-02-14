
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shash_desc {struct crypto_shash* tfm; } ;
struct crypto_shash {int dummy; } ;
struct ahash_request {int dummy; } ;


 struct shash_desc* FUNC_0 (struct ahash_request*) ;
 struct crypto_shash** FUNC_1 (int ) ;
 int FUNC_2 (struct ahash_request*) ;
 int FUNC_3 (struct ahash_request*,struct shash_desc*) ;

__attribute__((used)) static int FUNC_4(struct ahash_request *VAR_0)
{
 struct crypto_shash **VAR_1 = FUNC_1(FUNC_2(VAR_0));
 struct shash_desc *VAR_2 = FUNC_0(VAR_0);

 VAR_2->tfm = *VAR_1;

 return FUNC_3(VAR_0, VAR_2);
}
