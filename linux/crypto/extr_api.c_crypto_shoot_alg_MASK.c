
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_alg {int cra_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct crypto_alg *VAR_2)
{
 FUNC_0(&VAR_1);
 VAR_2->cra_flags |= VAR_0;
 FUNC_1(&VAR_1);
}
