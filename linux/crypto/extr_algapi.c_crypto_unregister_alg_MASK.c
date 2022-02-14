
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_alg {int (* cra_destroy ) (struct crypto_alg*) ;int cra_refcnt; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct crypto_alg*,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct crypto_alg*) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct crypto_alg *VAR_2)
{
 int VAR_3;
 FUNC_1(VAR_1);

 FUNC_4(&VAR_0);
 VAR_3 = FUNC_2(VAR_2, &VAR_1);
 FUNC_7(&VAR_0);

 if (VAR_3)
  return VAR_3;

 FUNC_0(FUNC_5(&VAR_2->cra_refcnt) != 1);
 if (VAR_2->cra_destroy)
  VAR_2->cra_destroy(VAR_2);

 FUNC_3(&VAR_1);
 return 0;
}
