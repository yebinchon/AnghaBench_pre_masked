
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct crypto_type {int dummy; } ;
struct crypto_tfm {int (* exit ) (struct crypto_tfm*) ;TYPE_1__* __crt_alg; } ;
struct TYPE_2__ {struct crypto_type* cra_type; } ;


 int FUNC_0 (struct crypto_tfm*) ;

__attribute__((used)) static void FUNC_1(struct crypto_tfm *VAR_0)
{
 const struct crypto_type *VAR_1 = VAR_0->__crt_alg->cra_type;

 if (VAR_1 && VAR_0->exit)
  VAR_0->exit(VAR_0);
}
