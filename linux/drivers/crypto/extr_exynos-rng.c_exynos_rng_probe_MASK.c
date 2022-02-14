
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct exynos_rng_dev {int type; int mem; int clk; int * dev; int lock; } ;
typedef enum exynos_prng_type { ____Placeholder_exynos_prng_type } exynos_prng_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (int *,char*) ;
 struct exynos_rng_dev* FUNC_5 (int *,int,int ) ;
 int FUNC_6 (struct platform_device*,int ) ;
 int VAR_3 ;
 struct exynos_rng_dev* VAR_4 ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (struct platform_device*,struct exynos_rng_dev*) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_5)
{
 struct exynos_rng_dev *VAR_6;
 int VAR_7;

 if (VAR_4)
  return -VAR_0;

 VAR_6 = FUNC_5(&VAR_5->dev, sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return -VAR_1;

 VAR_6->type = (enum exynos_prng_type)FUNC_8(&VAR_5->dev);

 FUNC_7(&VAR_6->lock);

 VAR_6->dev = &VAR_5->dev;
 VAR_6->clk = FUNC_4(&VAR_5->dev, "secss");
 if (FUNC_0(VAR_6->clk)) {
  FUNC_3(&VAR_5->dev, "Couldn't get clock.\n");
  return FUNC_1(VAR_6->clk);
 }

 VAR_6->mem = FUNC_6(VAR_5, 0);
 if (FUNC_0(VAR_6->mem))
  return FUNC_1(VAR_6->mem);

 FUNC_9(VAR_5, VAR_6);

 VAR_4 = VAR_6;

 VAR_7 = FUNC_2(&VAR_3);
 if (VAR_7) {
  FUNC_3(&VAR_5->dev,
   "Couldn't register rng crypto alg: %d\n", VAR_7);
  VAR_4 = ((void*)0);
 }

 return VAR_7;
}
