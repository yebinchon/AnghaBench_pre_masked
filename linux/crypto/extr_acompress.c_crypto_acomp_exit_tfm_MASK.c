
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_tfm {int dummy; } ;
struct crypto_acomp {int dummy; } ;
struct acomp_alg {int (* exit ) (struct crypto_acomp*) ;} ;


 struct crypto_acomp* FUNC_0 (struct crypto_tfm*) ;
 struct acomp_alg* FUNC_1 (struct crypto_acomp*) ;
 int FUNC_2 (struct crypto_acomp*) ;

__attribute__((used)) static void FUNC_3(struct crypto_tfm *VAR_0)
{
 struct crypto_acomp *VAR_1 = FUNC_0(VAR_0);
 struct acomp_alg *VAR_2 = FUNC_1(VAR_1);

 VAR_2->exit(VAR_1);
}
