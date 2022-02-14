
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kpp_alg {int (* exit ) (struct crypto_kpp*) ;} ;
struct crypto_tfm {int dummy; } ;
struct crypto_kpp {int dummy; } ;


 struct crypto_kpp* FUNC_0 (struct crypto_tfm*) ;
 struct kpp_alg* FUNC_1 (struct crypto_kpp*) ;
 int FUNC_2 (struct crypto_kpp*) ;

__attribute__((used)) static void FUNC_3(struct crypto_tfm *VAR_0)
{
 struct crypto_kpp *VAR_1 = FUNC_0(VAR_0);
 struct kpp_alg *VAR_2 = FUNC_1(VAR_1);

 VAR_2->exit(VAR_1);
}
