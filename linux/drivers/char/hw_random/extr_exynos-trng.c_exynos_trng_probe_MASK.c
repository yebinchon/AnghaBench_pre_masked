
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int dummy; } ;
struct platform_device {int dev; } ;
struct TYPE_2__ {unsigned long priv; int read; int init; int name; } ;
struct exynos_trng_dev {int clk; TYPE_1__ rng; int mem; int * dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *,TYPE_1__*) ;
 int FUNC_9 (int *,struct resource*) ;
 int FUNC_10 (int *,int ,int ) ;
 struct exynos_trng_dev* FUNC_11 (int *,int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 struct resource* FUNC_12 (struct platform_device*,int ,int ) ;
 int FUNC_13 (struct platform_device*,struct exynos_trng_dev*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;

__attribute__((used)) static int FUNC_18(struct platform_device *VAR_5)
{
 struct exynos_trng_dev *VAR_6;
 struct resource *VAR_7;
 int VAR_8 = -VAR_0;

 VAR_6 = FUNC_11(&VAR_5->dev, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return VAR_8;

 VAR_6->rng.name = FUNC_10(&VAR_5->dev, FUNC_6(&VAR_5->dev),
          VAR_1);
 if (!VAR_6->rng.name)
  return VAR_8;

 VAR_6->rng.init = VAR_4;
 VAR_6->rng.read = VAR_3;
 VAR_6->rng.priv = (unsigned long) VAR_6;

 FUNC_13(VAR_5, VAR_6);
 VAR_6->dev = &VAR_5->dev;

 VAR_7 = FUNC_12(VAR_5, VAR_2, 0);
 VAR_6->mem = FUNC_9(&VAR_5->dev, VAR_7);
 if (FUNC_0(VAR_6->mem))
  return FUNC_1(VAR_6->mem);

 FUNC_15(&VAR_5->dev);
 VAR_8 = FUNC_16(&VAR_5->dev);
 if (VAR_8 < 0) {
  FUNC_4(&VAR_5->dev, "Could not get runtime PM.\n");
  goto err_pm_get;
 }

 VAR_6->clk = FUNC_7(&VAR_5->dev, "secss");
 if (FUNC_0(VAR_6->clk)) {
  VAR_8 = FUNC_1(VAR_6->clk);
  FUNC_4(&VAR_5->dev, "Could not get clock.\n");
  goto err_clock;
 }

 VAR_8 = FUNC_3(VAR_6->clk);
 if (VAR_8) {
  FUNC_4(&VAR_5->dev, "Could not enable the clk.\n");
  goto err_clock;
 }

 VAR_8 = FUNC_8(&VAR_5->dev, &VAR_6->rng);
 if (VAR_8) {
  FUNC_4(&VAR_5->dev, "Could not register hwrng device.\n");
  goto err_register;
 }

 FUNC_5(&VAR_5->dev, "Exynos True Random Number Generator.\n");

 return 0;

err_register:
 FUNC_2(VAR_6->clk);

err_clock:
 FUNC_17(&VAR_5->dev);

err_pm_get:
 FUNC_14(&VAR_5->dev);

 return VAR_8;
}
