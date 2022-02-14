
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_alg {int cra_module; } ;


 struct crypto_alg* FUNC_0 (struct crypto_alg*) ;
 scalar_t__ FUNC_1 (int ) ;

struct crypto_alg *FUNC_2(struct crypto_alg *VAR_0)
{
 return FUNC_1(VAR_0->cra_module) ? FUNC_0(VAR_0) : ((void*)0);
}
