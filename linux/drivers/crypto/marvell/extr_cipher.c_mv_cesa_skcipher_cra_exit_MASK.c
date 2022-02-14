
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct crypto_tfm {TYPE_1__* __crt_alg; } ;
struct TYPE_2__ {int cra_ctxsize; } ;


 void* FUNC_0 (struct crypto_tfm*) ;
 int FUNC_1 (void*,int ) ;

__attribute__((used)) static void FUNC_2(struct crypto_tfm *VAR_0)
{
 void *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_1, VAR_0->__crt_alg->cra_ctxsize);
}
