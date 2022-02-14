
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct skcipher_alg {int (* init ) (struct crypto_skcipher*) ;scalar_t__ exit; int max_keysize; int ivsize; int decrypt; int encrypt; } ;
struct crypto_tfm {TYPE_1__* __crt_alg; } ;
struct TYPE_4__ {int exit; } ;
struct crypto_skcipher {TYPE_2__ base; int keysize; int ivsize; int decrypt; int encrypt; int setkey; } ;
struct TYPE_3__ {int * cra_type; } ;


 struct crypto_skcipher* FUNC_0 (struct crypto_tfm*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct crypto_tfm*) ;
 int FUNC_2 (struct crypto_tfm*) ;
 struct skcipher_alg* FUNC_3 (struct crypto_skcipher*) ;
 int VAR_2 ;
 int FUNC_4 (struct crypto_skcipher*) ;
 int VAR_3 ;
 int FUNC_5 (struct crypto_skcipher*) ;

__attribute__((used)) static int FUNC_6(struct crypto_tfm *VAR_4)
{
 struct crypto_skcipher *VAR_5 = FUNC_0(VAR_4);
 struct skcipher_alg *VAR_6 = FUNC_3(VAR_5);

 if (VAR_4->__crt_alg->cra_type == &VAR_1)
  return FUNC_2(VAR_4);

 if (VAR_4->__crt_alg->cra_type == &VAR_0)
  return FUNC_1(VAR_4);

 VAR_5->setkey = VAR_3;
 VAR_5->encrypt = VAR_6->encrypt;
 VAR_5->decrypt = VAR_6->decrypt;
 VAR_5->ivsize = VAR_6->ivsize;
 VAR_5->keysize = VAR_6->max_keysize;

 FUNC_4(VAR_5);

 if (VAR_6->exit)
  VAR_5->base.exit = VAR_2;

 if (VAR_6->init)
  return VAR_6->init(VAR_5);

 return 0;
}
