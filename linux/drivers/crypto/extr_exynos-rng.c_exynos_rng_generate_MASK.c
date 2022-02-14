
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
 int FUNC_3 (struct exynos_rng_dev*,int *,unsigned int,unsigned int*) ;
 int FUNC_4 (struct exynos_rng_dev*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct crypto_rng *VAR_0,
          const u8 *VAR_1, unsigned int VAR_2,
          u8 *VAR_3, unsigned int VAR_4)
{
 struct exynos_rng_ctx *VAR_5 = FUNC_2(VAR_0);
 struct exynos_rng_dev *VAR_6 = VAR_5->rng;
 unsigned int VAR_7 = 0;
 int VAR_8;

 VAR_8 = FUNC_1(VAR_6->clk);
 if (VAR_8)
  return VAR_8;

 FUNC_5(&VAR_6->lock);
 do {
  VAR_8 = FUNC_3(VAR_6, VAR_3, VAR_4, &VAR_7);
  if (VAR_8)
   break;

  VAR_4 -= VAR_7;
  VAR_3 += VAR_7;

  FUNC_4(VAR_6);
 } while (VAR_4 > 0);
 FUNC_6(&VAR_6->lock);

 FUNC_0(VAR_6->clk);

 return VAR_8;
}
