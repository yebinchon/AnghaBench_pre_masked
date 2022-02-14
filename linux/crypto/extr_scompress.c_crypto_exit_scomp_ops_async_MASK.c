
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_tfm {int dummy; } ;
struct crypto_scomp {int dummy; } ;


 int FUNC_0 (struct crypto_scomp*) ;
 int FUNC_1 () ;
 struct crypto_scomp** FUNC_2 (struct crypto_tfm*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_5(struct crypto_tfm *VAR_2)
{
 struct crypto_scomp **VAR_3 = FUNC_2(VAR_2);

 FUNC_0(*VAR_3);

 FUNC_3(&VAR_0);
 if (!--VAR_1)
  FUNC_1();
 FUNC_4(&VAR_0);
}
