
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_alg {int cra_flags; int * cra_type; } ;
struct rng_alg {int seedsize; struct crypto_alg base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct crypto_alg*) ;
 int VAR_4 ;

int FUNC_1(struct rng_alg *VAR_5)
{
 struct crypto_alg *VAR_6 = &VAR_5->base;

 if (VAR_5->seedsize > VAR_3 / 8)
  return -VAR_2;

 VAR_6->cra_type = &VAR_4;
 VAR_6->cra_flags &= ~VAR_0;
 VAR_6->cra_flags |= VAR_1;

 return FUNC_0(VAR_6);
}
