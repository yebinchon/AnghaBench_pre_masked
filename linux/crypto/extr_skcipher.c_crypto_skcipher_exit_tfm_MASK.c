
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skcipher_alg {int (* exit ) (struct crypto_skcipher*) ;} ;
struct crypto_tfm {int dummy; } ;
struct crypto_skcipher {int dummy; } ;


 struct crypto_skcipher* FUNC_0 (struct crypto_tfm*) ;
 struct skcipher_alg* FUNC_1 (struct crypto_skcipher*) ;
 int FUNC_2 (struct crypto_skcipher*) ;

__attribute__((used)) static void FUNC_3(struct crypto_tfm *VAR_0)
{
 struct crypto_skcipher *VAR_1 = FUNC_0(VAR_0);
 struct skcipher_alg *VAR_2 = FUNC_1(VAR_1);

 VAR_2->exit(VAR_1);
}
