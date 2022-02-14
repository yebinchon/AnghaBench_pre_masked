
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spacc_alg {int type; } ;
struct crypto_tfm {int __crt_alg; } ;
struct crypto_ablkcipher {int dummy; } ;
struct ablkcipher_request {int dummy; } ;


 struct crypto_ablkcipher* FUNC_0 (struct ablkcipher_request*) ;
 struct crypto_tfm* FUNC_1 (struct crypto_ablkcipher*) ;
 int FUNC_2 (struct ablkcipher_request*,int ,int) ;
 struct spacc_alg* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct ablkcipher_request *VAR_0)
{
 struct crypto_ablkcipher *VAR_1 = FUNC_0(VAR_0);
 struct crypto_tfm *VAR_2 = FUNC_1(VAR_1);
 struct spacc_alg *VAR_3 = FUNC_3(VAR_2->__crt_alg);

 return FUNC_2(VAR_0, VAR_3->type, 1);
}
