
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_alg {int cra_flags; int * cra_type; } ;
struct shash_alg {scalar_t__ digestsize; scalar_t__ descsize; scalar_t__ statesize; scalar_t__ setkey; scalar_t__ import; scalar_t__ export; scalar_t__ digest; scalar_t__ finup; struct crypto_alg base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;

__attribute__((used)) static int FUNC_0(struct shash_alg *VAR_12)
{
 struct crypto_alg *VAR_13 = &VAR_12->base;

 if (VAR_12->digestsize > VAR_4 ||
     VAR_12->descsize > VAR_3 ||
     VAR_12->statesize > VAR_5)
  return -VAR_2;

 if ((VAR_12->export && !VAR_12->import) || (VAR_12->import && !VAR_12->export))
  return -VAR_2;

 VAR_13->cra_type = &VAR_6;
 VAR_13->cra_flags &= ~VAR_0;
 VAR_13->cra_flags |= VAR_1;

 if (!VAR_12->finup)
  VAR_12->finup = VAR_10;
 if (!VAR_12->digest)
  VAR_12->digest = VAR_9;
 if (!VAR_12->export) {
  VAR_12->export = VAR_7;
  VAR_12->import = VAR_8;
  VAR_12->statesize = VAR_12->descsize;
 }
 if (!VAR_12->setkey)
  VAR_12->setkey = VAR_11;

 return 0;
}
