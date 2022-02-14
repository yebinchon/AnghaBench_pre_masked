
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_larval {int dummy; } ;
struct crypto_alg {int cra_flags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct crypto_larval*) ;
 int FUNC_1 (struct crypto_larval*) ;
 struct crypto_larval* FUNC_2 (struct crypto_alg*) ;
 int VAR_1 ;
 int FUNC_3 (struct crypto_alg*) ;
 int FUNC_4 (struct crypto_larval*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct crypto_alg *VAR_2)
{
 struct crypto_larval *VAR_3;
 int VAR_4;

 VAR_2->cra_flags &= ~VAR_0;
 VAR_4 = FUNC_3(VAR_2);
 if (VAR_4)
  return VAR_4;

 FUNC_5(&VAR_1);
 VAR_3 = FUNC_2(VAR_2);
 FUNC_6(&VAR_1);

 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 FUNC_4(VAR_3);
 return 0;
}
