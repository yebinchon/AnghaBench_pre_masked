
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ablkcipher_tfm {int ivsize; int base; int decrypt; int encrypt; int setkey; } ;
struct crypto_tfm {struct ablkcipher_tfm crt_ablkcipher; TYPE_1__* __crt_alg; } ;
struct ablkcipher_alg {int ivsize; int decrypt; int encrypt; } ;
struct TYPE_2__ {struct ablkcipher_alg cra_ablkcipher; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct crypto_tfm*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(struct crypto_tfm *VAR_3, u32 VAR_4,
          u32 VAR_5)
{
 struct ablkcipher_alg *VAR_6 = &VAR_3->__crt_alg->cra_ablkcipher;
 struct ablkcipher_tfm *VAR_7 = &VAR_3->crt_ablkcipher;

 if (VAR_6->ivsize > VAR_1 / 8)
  return -VAR_0;

 VAR_7->setkey = VAR_2;
 VAR_7->encrypt = VAR_6->encrypt;
 VAR_7->decrypt = VAR_6->decrypt;
 VAR_7->base = FUNC_0(VAR_3);
 VAR_7->ivsize = VAR_6->ivsize;

 return 0;
}
