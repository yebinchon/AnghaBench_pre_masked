
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct skcipher_request {int dummy; } ;
struct crypto_tfm {TYPE_1__* __crt_alg; } ;
struct crypto_skcipher {int dummy; } ;
struct ablkcipher_alg {int encrypt; } ;
struct TYPE_2__ {struct ablkcipher_alg cra_ablkcipher; } ;


 struct crypto_skcipher* FUNC_0 (struct skcipher_request*) ;
 struct crypto_tfm* FUNC_1 (struct crypto_skcipher*) ;
 int FUNC_2 (struct skcipher_request*,int ) ;

__attribute__((used)) static int FUNC_3(struct skcipher_request *VAR_0)
{
 struct crypto_skcipher *VAR_1 = FUNC_0(VAR_0);
 struct crypto_tfm *VAR_2 = FUNC_1(VAR_1);
 struct ablkcipher_alg *VAR_3 = &VAR_2->__crt_alg->cra_ablkcipher;

 return FUNC_2(VAR_0, VAR_3->encrypt);
}
