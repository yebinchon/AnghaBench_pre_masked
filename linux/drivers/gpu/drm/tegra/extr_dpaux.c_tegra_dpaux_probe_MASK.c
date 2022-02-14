
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_16__ {int owner; int * pmxops; int * pctlops; int npins; int pins; int name; } ;
struct TYPE_15__ {TYPE_1__* dev; int transfer; } ;
struct tegra_dpaux {int list; void* pinctrl; TYPE_8__ desc; TYPE_3__ aux; int irq; TYPE_1__* dev; void* vdd; void* clk_parent; void* clk; void* rst; void* regs; int complete; int work; } ;
struct resource {int dummy; } ;
struct TYPE_14__ {int pm_domain; } ;
struct platform_device {TYPE_1__ dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int VAR_12 ;
 scalar_t__ FUNC_3 (void*) ;
 int FUNC_4 (void*) ;
 int VAR_13 ;
 int FUNC_5 (void*,int) ;
 int FUNC_6 (TYPE_1__*,char*,...) ;
 int FUNC_7 (TYPE_1__*) ;
 void* FUNC_8 (TYPE_1__*,char*) ;
 void* FUNC_9 (TYPE_1__*,struct resource*) ;
 struct tegra_dpaux* FUNC_10 (TYPE_1__*,int,int ) ;
 void* FUNC_11 (TYPE_1__*,TYPE_8__*,struct tegra_dpaux*) ;
 void* FUNC_12 (TYPE_1__*,char*) ;
 int FUNC_13 (TYPE_1__*,int ,int ,int ,int ,struct tegra_dpaux*) ;
 void* FUNC_14 (TYPE_1__*,char*) ;
 int FUNC_15 (int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_16 (TYPE_3__*) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *,int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (struct platform_device*,int ) ;
 struct resource* FUNC_22 (struct platform_device*,int ,int ) ;
 int FUNC_23 (struct platform_device*,struct tegra_dpaux*) ;
 int FUNC_24 (TYPE_1__*) ;
 int FUNC_25 (TYPE_1__*) ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_26 (struct tegra_dpaux*,int ) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_27 (struct tegra_dpaux*,int,int ) ;

__attribute__((used)) static int FUNC_28(struct platform_device *VAR_22)
{
 struct tegra_dpaux *VAR_23;
 struct resource *VAR_24;
 u32 VAR_25;
 int VAR_26;

 VAR_23 = FUNC_10(&VAR_22->dev, sizeof(*VAR_23), VAR_11);
 if (!VAR_23)
  return -VAR_8;

 FUNC_2(&VAR_23->work, VAR_16);
 FUNC_17(&VAR_23->complete);
 FUNC_1(&VAR_23->list);
 VAR_23->dev = &VAR_22->dev;

 VAR_24 = FUNC_22(VAR_22, VAR_12, 0);
 VAR_23->regs = FUNC_9(&VAR_22->dev, VAR_24);
 if (FUNC_3(VAR_23->regs))
  return FUNC_4(VAR_23->regs);

 VAR_23->irq = FUNC_21(VAR_22, 0);
 if (VAR_23->irq < 0) {
  FUNC_6(&VAR_22->dev, "failed to get IRQ\n");
  return -VAR_9;
 }

 if (!VAR_22->dev.pm_domain) {
  VAR_23->rst = FUNC_14(&VAR_22->dev, "dpaux");
  if (FUNC_3(VAR_23->rst)) {
   FUNC_6(&VAR_22->dev,
    "failed to get reset control: %ld\n",
    FUNC_4(VAR_23->rst));
   return FUNC_4(VAR_23->rst);
  }
 }

 VAR_23->clk = FUNC_8(&VAR_22->dev, ((void*)0));
 if (FUNC_3(VAR_23->clk)) {
  FUNC_6(&VAR_22->dev, "failed to get module clock: %ld\n",
   FUNC_4(VAR_23->clk));
  return FUNC_4(VAR_23->clk);
 }

 VAR_23->clk_parent = FUNC_8(&VAR_22->dev, "parent");
 if (FUNC_3(VAR_23->clk_parent)) {
  FUNC_6(&VAR_22->dev, "failed to get parent clock: %ld\n",
   FUNC_4(VAR_23->clk_parent));
  return FUNC_4(VAR_23->clk_parent);
 }

 VAR_26 = FUNC_5(VAR_23->clk_parent, 270000000);
 if (VAR_26 < 0) {
  FUNC_6(&VAR_22->dev, "failed to set clock to 270 MHz: %d\n",
   VAR_26);
  return VAR_26;
 }

 VAR_23->vdd = FUNC_12(&VAR_22->dev, "vdd");
 if (FUNC_3(VAR_23->vdd)) {
  if (FUNC_4(VAR_23->vdd) != -VAR_7) {
   if (FUNC_4(VAR_23->vdd) != -VAR_10)
    FUNC_6(&VAR_22->dev,
     "failed to get VDD supply: %ld\n",
     FUNC_4(VAR_23->vdd));

   return FUNC_4(VAR_23->vdd);
  }
 }

 FUNC_23(VAR_22, VAR_23);
 FUNC_24(&VAR_22->dev);
 FUNC_25(&VAR_22->dev);

 VAR_26 = FUNC_13(VAR_23->dev, VAR_23->irq, VAR_17, 0,
          FUNC_7(VAR_23->dev), VAR_23);
 if (VAR_26 < 0) {
  FUNC_6(VAR_23->dev, "failed to request IRQ#%u: %d\n",
   VAR_23->irq, VAR_26);
  return VAR_26;
 }

 FUNC_15(VAR_23->irq);

 VAR_23->aux.transfer = VAR_21;
 VAR_23->aux.dev = &VAR_22->dev;

 VAR_26 = FUNC_16(&VAR_23->aux);
 if (VAR_26 < 0)
  return VAR_26;
 VAR_26 = FUNC_26(VAR_23, VAR_6);
 if (VAR_26 < 0)
  return VAR_26;
 VAR_25 = VAR_1 | VAR_3 |
  VAR_5 | VAR_4;
 FUNC_27(VAR_23, VAR_25, VAR_2);
 FUNC_27(VAR_23, VAR_25, VAR_0);

 FUNC_19(&VAR_15);
 FUNC_18(&VAR_23->list, &VAR_14);
 FUNC_20(&VAR_15);

 return 0;
}
