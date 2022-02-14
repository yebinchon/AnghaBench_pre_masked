
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exynos_rng_ctx {int rng; } ;
struct crypto_tfm {int dummy; } ;


 struct exynos_rng_ctx* FUNC_0 (struct crypto_tfm*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct crypto_tfm *VAR_1)
{
 struct exynos_rng_ctx *VAR_2 = FUNC_0(VAR_1);

 VAR_2->rng = VAR_0;

 return 0;
}
