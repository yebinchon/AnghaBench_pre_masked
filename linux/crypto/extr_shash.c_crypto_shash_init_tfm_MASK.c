
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shash_alg {int descsize; } ;
struct crypto_tfm {int dummy; } ;
struct crypto_shash {int descsize; } ;


 struct crypto_shash* FUNC_0 (struct crypto_tfm*) ;
 struct shash_alg* FUNC_1 (struct crypto_shash*) ;
 int FUNC_2 (struct crypto_shash*,struct shash_alg*) ;

__attribute__((used)) static int FUNC_3(struct crypto_tfm *VAR_0)
{
 struct crypto_shash *VAR_1 = FUNC_0(VAR_0);
 struct shash_alg *VAR_2 = FUNC_1(VAR_1);

 VAR_1->descsize = VAR_2->descsize;

 FUNC_2(VAR_1, VAR_2);

 return 0;
}
