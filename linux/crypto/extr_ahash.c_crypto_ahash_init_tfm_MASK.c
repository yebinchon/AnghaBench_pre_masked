
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct crypto_tfm {TYPE_1__* __crt_alg; } ;
struct crypto_ahash {scalar_t__ setkey; int import; int export; int digest; int finup; int final; int update; int init; } ;
struct ahash_alg {scalar_t__ setkey; int import; int export; int digest; scalar_t__ finup; int final; int update; int init; } ;
struct TYPE_2__ {int * cra_type; } ;


 struct crypto_ahash* FUNC_0 (struct crypto_tfm*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct crypto_ahash*) ;
 struct ahash_alg* FUNC_2 (struct crypto_ahash*) ;
 int VAR_2 ;
 int FUNC_3 (struct crypto_tfm*) ;

__attribute__((used)) static int FUNC_4(struct crypto_tfm *VAR_3)
{
 struct crypto_ahash *VAR_4 = FUNC_0(VAR_3);
 struct ahash_alg *VAR_5 = FUNC_2(VAR_4);

 VAR_4->setkey = VAR_1;

 if (VAR_3->__crt_alg->cra_type != &VAR_2)
  return FUNC_3(VAR_3);

 VAR_4->init = VAR_5->init;
 VAR_4->update = VAR_5->update;
 VAR_4->final = VAR_5->final;
 VAR_4->finup = VAR_5->finup ?: VAR_0;
 VAR_4->digest = VAR_5->digest;
 VAR_4->export = VAR_5->export;
 VAR_4->import = VAR_5->import;

 if (VAR_5->setkey) {
  VAR_4->setkey = VAR_5->setkey;
  FUNC_1(VAR_4);
 }

 return 0;
}
