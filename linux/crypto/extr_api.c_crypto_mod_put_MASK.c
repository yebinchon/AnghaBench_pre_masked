
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module {int dummy; } ;
struct crypto_alg {struct module* cra_module; } ;


 int FUNC_0 (struct crypto_alg*) ;
 int FUNC_1 (struct module*) ;

void FUNC_2(struct crypto_alg *VAR_0)
{
 struct module *VAR_1 = VAR_0->cra_module;

 FUNC_0(VAR_0);
 FUNC_1(VAR_1);
}
