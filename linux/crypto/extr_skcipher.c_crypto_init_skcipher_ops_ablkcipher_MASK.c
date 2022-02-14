
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct crypto_tfm {int exit; struct crypto_alg* __crt_alg; } ;
struct crypto_skcipher {int keysize; scalar_t__ reqsize; int ivsize; int decrypt; int encrypt; int setkey; } ;
struct TYPE_2__ {int max_keysize; } ;
struct crypto_alg {TYPE_1__ cra_ablkcipher; } ;
struct crypto_ablkcipher {int dummy; } ;
struct ablkcipher_request {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct crypto_tfm*) ;
 int FUNC_1 (struct crypto_tfm*) ;
 struct crypto_ablkcipher* FUNC_2 (struct crypto_tfm*) ;
 struct crypto_tfm* FUNC_3 (struct crypto_alg*,int ,int ) ;
 struct crypto_skcipher* FUNC_4 (struct crypto_tfm*) ;
 int FUNC_5 (struct crypto_ablkcipher*) ;
 scalar_t__ FUNC_6 (struct crypto_ablkcipher*) ;
 int VAR_1 ;
 int FUNC_7 (struct crypto_alg*) ;
 int FUNC_8 (struct crypto_alg*) ;
 struct crypto_ablkcipher** FUNC_9 (struct crypto_tfm*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_10 (struct crypto_skcipher*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_11(struct crypto_tfm *VAR_5)
{
 struct crypto_alg *VAR_6 = VAR_5->__crt_alg;
 struct crypto_skcipher *VAR_7 = FUNC_4(VAR_5);
 struct crypto_ablkcipher **VAR_8 = FUNC_9(VAR_5);
 struct crypto_ablkcipher *VAR_9;
 struct crypto_tfm *VAR_10;

 if (!FUNC_7(VAR_6))
  return -VAR_0;

 VAR_10 = FUNC_3(VAR_6, 0, 0);
 if (FUNC_0(VAR_10)) {
  FUNC_8(VAR_6);
  return FUNC_1(VAR_10);
 }

 VAR_9 = FUNC_2(VAR_10);
 *VAR_8 = VAR_9;
 VAR_5->exit = VAR_1;

 VAR_7->setkey = VAR_4;
 VAR_7->encrypt = VAR_3;
 VAR_7->decrypt = VAR_2;

 VAR_7->ivsize = FUNC_5(VAR_9);
 VAR_7->reqsize = FUNC_6(VAR_9) +
       sizeof(struct ablkcipher_request);
 VAR_7->keysize = VAR_6->cra_ablkcipher.max_keysize;

 FUNC_10(VAR_7);

 return 0;
}
