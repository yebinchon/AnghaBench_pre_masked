
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void crypto_tfm ;
struct crypto_spawn {int frontend; } ;
typedef void crypto_alg ;


 void* FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (void*) ;
 void* FUNC_2 (void*,int ) ;
 int FUNC_3 (void*) ;
 void* FUNC_4 (struct crypto_spawn*) ;

void *FUNC_5(struct crypto_spawn *VAR_0)
{
 struct crypto_alg *VAR_1;
 struct crypto_tfm *VAR_2;

 VAR_1 = FUNC_4(VAR_0);
 if (FUNC_1(VAR_1))
  return FUNC_0(VAR_1);

 VAR_2 = FUNC_2(VAR_1, VAR_0->frontend);
 if (FUNC_1(VAR_2))
  goto out_put_alg;

 return VAR_2;

out_put_alg:
 FUNC_3(VAR_1);
 return VAR_2;
}
