
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shash_instance {int alg; } ;
struct crypto_template {int dummy; } ;


 int FUNC_0 (struct crypto_template*,int ) ;
 int FUNC_1 (struct shash_instance*) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct crypto_template *VAR_0,
       struct shash_instance *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_2(&VAR_1->alg);
 if (VAR_2)
  return VAR_2;

 return FUNC_0(VAR_0, FUNC_1(VAR_1));
}
