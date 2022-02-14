
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int dummy; } ;
struct device {scalar_t__ of_node; } ;
struct platform_device {struct device dev; } ;
struct TYPE_2__ {int quality; unsigned long priv; int name; int cleanup; int init; int read; } ;
struct omap_rng_dev {int * clk; int * clk_reg; int * base; TYPE_1__ rng; struct device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct device*,char*,...) ;
 int FUNC_5 (struct device*,char*,int ) ;
 int FUNC_6 (struct device*) ;
 void* FUNC_7 (struct device*,char*) ;
 int FUNC_8 (struct device*,TYPE_1__*) ;
 int * FUNC_9 (struct device*,struct resource*) ;
 int FUNC_10 (struct device*,int ,int ) ;
 struct omap_rng_dev* FUNC_11 (struct device*,int,int ) ;
 int FUNC_12 (struct omap_rng_dev*) ;
 int FUNC_13 (struct omap_rng_dev*,struct platform_device*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_14 (struct omap_rng_dev*,int ) ;
 struct resource* FUNC_15 (struct platform_device*,int ,int ) ;
 int FUNC_16 (struct platform_device*,struct omap_rng_dev*) ;
 int FUNC_17 (struct device*) ;
 int FUNC_18 (struct device*) ;
 int FUNC_19 (struct device*) ;
 int FUNC_20 (struct device*) ;
 int FUNC_21 (struct device*) ;

__attribute__((used)) static int FUNC_22(struct platform_device *VAR_8)
{
 struct omap_rng_dev *VAR_9;
 struct resource *VAR_10;
 struct device *VAR_11 = &VAR_8->dev;
 int VAR_12;

 VAR_9 = FUNC_11(VAR_11, sizeof(struct omap_rng_dev), VAR_2);
 if (!VAR_9)
  return -VAR_0;

 VAR_9->rng.read = VAR_6;
 VAR_9->rng.init = VAR_7;
 VAR_9->rng.cleanup = VAR_5;
 VAR_9->rng.quality = 900;

 VAR_9->rng.priv = (unsigned long)VAR_9;
 FUNC_16(VAR_8, VAR_9);
 VAR_9->dev = VAR_11;

 VAR_10 = FUNC_15(VAR_8, VAR_3, 0);
 VAR_9->base = FUNC_9(VAR_11, VAR_10);
 if (FUNC_0(VAR_9->base)) {
  VAR_12 = FUNC_1(VAR_9->base);
  goto err_ioremap;
 }

 VAR_9->rng.name = FUNC_10(VAR_11, FUNC_6(VAR_11), VAR_2);
 if (!VAR_9->rng.name) {
  VAR_12 = -VAR_0;
  goto err_ioremap;
 }

 FUNC_18(&VAR_8->dev);
 VAR_12 = FUNC_19(&VAR_8->dev);
 if (VAR_12 < 0) {
  FUNC_4(&VAR_8->dev, "Failed to runtime_get device: %d\n", VAR_12);
  FUNC_20(&VAR_8->dev);
  goto err_ioremap;
 }

 VAR_9->clk = FUNC_7(&VAR_8->dev, ((void*)0));
 if (FUNC_0(VAR_9->clk) && FUNC_1(VAR_9->clk) == -VAR_1)
  return -VAR_1;
 if (!FUNC_0(VAR_9->clk)) {
  VAR_12 = FUNC_3(VAR_9->clk);
  if (VAR_12) {
   FUNC_4(&VAR_8->dev,
    "Unable to enable the clk: %d\n", VAR_12);
   goto err_register;
  }
 }

 VAR_9->clk_reg = FUNC_7(&VAR_8->dev, "reg");
 if (FUNC_0(VAR_9->clk_reg) && FUNC_1(VAR_9->clk_reg) == -VAR_1)
  return -VAR_1;
 if (!FUNC_0(VAR_9->clk_reg)) {
  VAR_12 = FUNC_3(VAR_9->clk_reg);
  if (VAR_12) {
   FUNC_4(&VAR_8->dev,
    "Unable to enable the register clk: %d\n",
    VAR_12);
   goto err_register;
  }
 }

 VAR_12 = (VAR_11->of_node) ? FUNC_13(VAR_9, VAR_8) :
    FUNC_12(VAR_9);
 if (VAR_12)
  goto err_register;

 VAR_12 = FUNC_8(&VAR_8->dev, &VAR_9->rng);
 if (VAR_12)
  goto err_register;

 FUNC_5(&VAR_8->dev, "Random Number Generator ver. %02x\n",
   FUNC_14(VAR_9, VAR_4));

 return 0;

err_register:
 VAR_9->base = ((void*)0);
 FUNC_21(&VAR_8->dev);
 FUNC_17(&VAR_8->dev);

 FUNC_2(VAR_9->clk_reg);
 FUNC_2(VAR_9->clk);
err_ioremap:
 FUNC_4(VAR_11, "initialization failed.\n");
 return VAR_12;
}
