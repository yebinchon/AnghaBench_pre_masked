
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_alg {int dummy; } ;


 int FUNC_0 (struct crypto_alg*) ;
 int FUNC_1 (struct crypto_alg*) ;

int FUNC_2(struct crypto_alg *VAR_0, int VAR_1)
{
 int VAR_2, VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
  VAR_3 = FUNC_0(&VAR_0[VAR_2]);
  if (VAR_3)
   goto err;
 }

 return 0;

err:
 for (--VAR_2; VAR_2 >= 0; --VAR_2)
  FUNC_1(&VAR_0[VAR_2]);

 return VAR_3;
}
