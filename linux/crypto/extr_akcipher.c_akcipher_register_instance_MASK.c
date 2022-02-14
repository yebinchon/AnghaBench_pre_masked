
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_template {int dummy; } ;
struct akcipher_instance {int alg; } ;


 int FUNC_0 (struct akcipher_instance*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct crypto_template*,int ) ;

int FUNC_3(struct crypto_template *VAR_0,
          struct akcipher_instance *VAR_1)
{
 FUNC_1(&VAR_1->alg);
 return FUNC_2(VAR_0, FUNC_0(VAR_1));
}
