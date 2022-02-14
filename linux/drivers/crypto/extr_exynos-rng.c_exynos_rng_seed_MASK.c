
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct exynos_rng_dev {int clk; int lock; } ;
struct exynos_rng_ctx {struct exynos_rng_dev* rng; } ;
struct crypto_rng {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct exynos_rng_ctx* FUNC_2 (struct crypto_rng*) ;
 int FUNC_3 (struct exynos_rng_dev*,int const*,unsigned int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct crypto_rng *VAR_0, const u8 *VAR_1,
      unsigned int VAR_2)
{
 struct exynos_rng_ctx *VAR_3 = FUNC_2(VAR_0);
 struct exynos_rng_dev *VAR_4 = VAR_3->rng;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_4->clk);
 if (VAR_5)
  return VAR_5;

 FUNC_4(&VAR_4->lock);
 VAR_5 = FUNC_3(VAR_3->rng, VAR_1, VAR_2);
 FUNC_5(&VAR_4->lock);

 FUNC_0(VAR_4->clk);

 return VAR_5;
}
