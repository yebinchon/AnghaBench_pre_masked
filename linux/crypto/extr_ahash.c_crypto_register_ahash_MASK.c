
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct crypto_alg {int dummy; } ;
struct TYPE_2__ {struct crypto_alg base; } ;
struct ahash_alg {TYPE_1__ halg; } ;


 int FUNC_0 (struct ahash_alg*) ;
 int FUNC_1 (struct crypto_alg*) ;

int FUNC_2(struct ahash_alg *VAR_0)
{
 struct crypto_alg *VAR_1 = &VAR_0->halg.base;
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0);
 if (VAR_2)
  return VAR_2;

 return FUNC_1(VAR_1);
}
