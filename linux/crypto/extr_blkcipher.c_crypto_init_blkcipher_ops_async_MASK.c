
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ablkcipher_tfm {int ivsize; int base; int decrypt; int encrypt; int setkey; } ;
struct crypto_tfm {TYPE_1__* __crt_alg; struct ablkcipher_tfm crt_ablkcipher; } ;
struct blkcipher_alg {int ivsize; } ;
struct TYPE_2__ {struct blkcipher_alg cra_blkcipher; } ;


 int FUNC_0 (struct crypto_tfm*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(struct crypto_tfm *VAR_3)
{
 struct ablkcipher_tfm *VAR_4 = &VAR_3->crt_ablkcipher;
 struct blkcipher_alg *VAR_5 = &VAR_3->__crt_alg->cra_blkcipher;

 VAR_4->setkey = VAR_2;
 VAR_4->encrypt = VAR_1;
 VAR_4->decrypt = VAR_0;
 VAR_4->base = FUNC_0(VAR_3);
 VAR_4->ivsize = VAR_5->ivsize;

 return 0;
}
