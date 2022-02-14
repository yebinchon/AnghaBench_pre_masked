
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shash_desc {int dummy; } ;
struct shash_alg {int dummy; } ;
struct crypto_tfm {int exit; struct crypto_alg* __crt_alg; } ;
struct crypto_shash {int dummy; } ;
struct crypto_alg {int dummy; } ;
struct crypto_ahash {scalar_t__ reqsize; int import; int export; int setkey; int digest; int finup; int final; int update; int init; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct crypto_shash*) ;
 int FUNC_1 (struct crypto_shash*) ;
 struct crypto_ahash* FUNC_2 (struct crypto_tfm*) ;
 struct shash_alg* FUNC_3 (struct crypto_alg*) ;
 int FUNC_4 (struct crypto_ahash*,int) ;
 struct crypto_shash* FUNC_5 (struct crypto_alg*,int *) ;
 int VAR_2 ;
 int FUNC_6 (struct crypto_alg*) ;
 int FUNC_7 (struct crypto_alg*) ;
 scalar_t__ FUNC_8 (struct shash_alg*) ;
 scalar_t__ FUNC_9 (struct crypto_shash*) ;
 int FUNC_10 (struct crypto_shash*) ;
 int VAR_3 ;
 struct crypto_shash** FUNC_11 (struct crypto_tfm*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

int FUNC_12(struct crypto_tfm *VAR_12)
{
 struct crypto_alg *VAR_13 = VAR_12->__crt_alg;
 struct shash_alg *VAR_14 = FUNC_3(VAR_13);
 struct crypto_ahash *VAR_15 = FUNC_2(VAR_12);
 struct crypto_shash **VAR_16 = FUNC_11(VAR_12);
 struct crypto_shash *VAR_17;

 if (!FUNC_6(VAR_13))
  return -VAR_1;

 VAR_17 = FUNC_5(VAR_13, &VAR_3);
 if (FUNC_0(VAR_17)) {
  FUNC_7(VAR_13);
  return FUNC_1(VAR_17);
 }

 *VAR_16 = VAR_17;
 VAR_12->exit = VAR_2;

 VAR_15->init = VAR_9;
 VAR_15->update = VAR_11;
 VAR_15->final = VAR_6;
 VAR_15->finup = VAR_7;
 VAR_15->digest = VAR_4;
 if (FUNC_8(VAR_14))
  VAR_15->setkey = VAR_10;

 FUNC_4(VAR_15, FUNC_10(VAR_17) &
        VAR_0);

 VAR_15->export = VAR_5;
 VAR_15->import = VAR_8;

 VAR_15->reqsize = sizeof(struct shash_desc) + FUNC_9(VAR_17);

 return 0;
}
