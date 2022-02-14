
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct crypto_tfm {int exit; struct crypto_alg* __crt_alg; } ;
struct crypto_skcipher {int keysize; int ivsize; int decrypt; int encrypt; int setkey; } ;
struct crypto_blkcipher {int dummy; } ;
struct TYPE_2__ {int max_keysize; } ;
struct crypto_alg {TYPE_1__ cra_blkcipher; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct crypto_tfm*) ;
 int FUNC_1 (struct crypto_tfm*) ;
 struct crypto_tfm* FUNC_2 (struct crypto_alg*,int ,int ) ;
 struct crypto_blkcipher* FUNC_3 (struct crypto_tfm*) ;
 struct crypto_skcipher* FUNC_4 (struct crypto_tfm*) ;
 int FUNC_5 (struct crypto_blkcipher*) ;
 int VAR_3 ;
 int FUNC_6 (struct crypto_alg*) ;
 int FUNC_7 (struct crypto_alg*) ;
 struct crypto_blkcipher** FUNC_8 (struct crypto_tfm*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_9 (struct crypto_skcipher*) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_10(struct crypto_tfm *VAR_7)
{
 struct crypto_alg *VAR_8 = VAR_7->__crt_alg;
 struct crypto_skcipher *VAR_9 = FUNC_4(VAR_7);
 struct crypto_blkcipher **VAR_10 = FUNC_8(VAR_7);
 struct crypto_blkcipher *VAR_11;
 struct crypto_tfm *VAR_12;

 if (!FUNC_6(VAR_8))
  return -VAR_2;

 VAR_12 = FUNC_2(VAR_8, VAR_0,
     VAR_1);
 if (FUNC_0(VAR_12)) {
  FUNC_7(VAR_8);
  return FUNC_1(VAR_12);
 }

 VAR_11 = FUNC_3(VAR_12);
 *VAR_10 = VAR_11;
 VAR_7->exit = VAR_3;

 VAR_9->setkey = VAR_6;
 VAR_9->encrypt = VAR_5;
 VAR_9->decrypt = VAR_4;

 VAR_9->ivsize = FUNC_5(VAR_11);
 VAR_9->keysize = VAR_8->cra_blkcipher.max_keysize;

 FUNC_9(VAR_9);

 return 0;
}
