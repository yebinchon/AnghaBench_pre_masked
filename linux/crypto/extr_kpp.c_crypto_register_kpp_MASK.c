
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_alg {int dummy; } ;
struct kpp_alg {struct crypto_alg base; } ;


 int FUNC_0 (struct crypto_alg*) ;
 int FUNC_1 (struct kpp_alg*) ;

int FUNC_2(struct kpp_alg *VAR_0)
{
 struct crypto_alg *VAR_1 = &VAR_0->base;

 FUNC_1(VAR_0);
 return FUNC_0(VAR_1);
}
