
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct crypto_template {int instances; int module; } ;
struct crypto_larval {int dummy; } ;
struct TYPE_3__ {int cra_flags; int cra_module; } ;
struct crypto_instance {struct crypto_template* tmpl; int list; TYPE_1__ alg; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct crypto_larval*) ;
 int FUNC_1 (struct crypto_larval*) ;
 struct crypto_larval* FUNC_2 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct crypto_larval*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct crypto_template *VAR_2,
        struct crypto_instance *VAR_3)
{
 struct crypto_larval *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_3(&VAR_3->alg);
 if (VAR_5)
  return VAR_5;

 VAR_3->alg.cra_module = VAR_2->module;
 VAR_3->alg.cra_flags |= VAR_0;

 FUNC_5(&VAR_1);

 VAR_4 = FUNC_2(&VAR_3->alg);
 if (FUNC_0(VAR_4))
  goto unlock;

 FUNC_6(&VAR_3->list, &VAR_2->instances);
 VAR_3->tmpl = VAR_2;

unlock:
 FUNC_7(&VAR_1);

 VAR_5 = FUNC_1(VAR_4);
 if (FUNC_0(VAR_4))
  goto err;

 FUNC_4(VAR_4);
 VAR_5 = 0;

err:
 return VAR_5;
}
