
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct qcom_rng_ctx {TYPE_1__* rng; } ;
struct crypto_tfm {int dummy; } ;
struct TYPE_3__ {int skip_init; } ;


 struct qcom_rng_ctx* FUNC_0 (struct crypto_tfm*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(struct crypto_tfm *VAR_1)
{
 struct qcom_rng_ctx *VAR_2 = FUNC_0(VAR_1);

 VAR_2->rng = VAR_0;

 if (!VAR_2->rng->skip_init)
  return FUNC_1(VAR_2->rng);

 return 0;
}
