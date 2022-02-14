
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * dev; int * ops; int list; } ;
struct tegra_dc {scalar_t__ pipe; scalar_t__ irq; TYPE_2__ client; int regs; int powergate; TYPE_1__* soc; int clk; int rst; int * dev; int list; } ;
struct resource {int dummy; } ;
struct platform_device {int dev; } ;
struct TYPE_3__ {scalar_t__ has_powergate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_7 ;
 int FUNC_5 (int *,char*,...) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,struct resource*) ;
 struct tegra_dc* FUNC_8 (int *,int,int ) ;
 int FUNC_9 (int *,char*) ;
 int FUNC_10 (TYPE_2__*) ;
 TYPE_1__* FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (struct platform_device*,int ) ;
 struct resource* FUNC_13 (struct platform_device*,int ,int ) ;
 int FUNC_14 (struct platform_device*,struct tegra_dc*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (struct tegra_dc*) ;
 int FUNC_18 (struct tegra_dc*) ;
 int FUNC_19 (struct tegra_dc*) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int,int) ;

__attribute__((used)) static int FUNC_22(struct platform_device *VAR_8)
{
 struct resource *VAR_9;
 struct tegra_dc *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_8(&VAR_8->dev, sizeof(*VAR_10), VAR_3);
 if (!VAR_10)
  return -VAR_1;

 VAR_10->soc = FUNC_11(&VAR_8->dev);

 FUNC_0(&VAR_10->list);
 VAR_10->dev = &VAR_8->dev;

 VAR_11 = FUNC_18(VAR_10);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_11 = FUNC_17(VAR_10);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_10->clk = FUNC_6(&VAR_8->dev, ((void*)0));
 if (FUNC_1(VAR_10->clk)) {
  FUNC_5(&VAR_8->dev, "failed to get clock\n");
  return FUNC_2(VAR_10->clk);
 }

 VAR_10->rst = FUNC_9(&VAR_8->dev, "dc");
 if (FUNC_1(VAR_10->rst)) {
  FUNC_5(&VAR_8->dev, "failed to get reset\n");
  return FUNC_2(VAR_10->rst);
 }


 VAR_11 = FUNC_4(VAR_10->clk);
 if (VAR_11 < 0)
  return VAR_11;

 FUNC_21(2000, 4000);

 VAR_11 = FUNC_16(VAR_10->rst);
 if (VAR_11 < 0)
  return VAR_11;

 FUNC_21(2000, 4000);

 FUNC_3(VAR_10->clk);

 if (VAR_10->soc->has_powergate) {
  if (VAR_10->pipe == 0)
   VAR_10->powergate = VAR_5;
  else
   VAR_10->powergate = VAR_6;

  FUNC_20(VAR_10->powergate);
 }

 VAR_9 = FUNC_13(VAR_8, VAR_4, 0);
 VAR_10->regs = FUNC_7(&VAR_8->dev, VAR_9);
 if (FUNC_1(VAR_10->regs))
  return FUNC_2(VAR_10->regs);

 VAR_10->irq = FUNC_12(VAR_8, 0);
 if (VAR_10->irq < 0) {
  FUNC_5(&VAR_8->dev, "failed to get IRQ\n");
  return -VAR_2;
 }

 VAR_11 = FUNC_19(VAR_10);
 if (VAR_11 < 0 && VAR_11 != -VAR_0) {
  FUNC_5(&VAR_8->dev, "failed to probe RGB output: %d\n", VAR_11);
  return VAR_11;
 }

 FUNC_14(VAR_8, VAR_10);
 FUNC_15(&VAR_8->dev);

 FUNC_0(&VAR_10->client.list);
 VAR_10->client.ops = &VAR_7;
 VAR_10->client.dev = &VAR_8->dev;

 VAR_11 = FUNC_10(&VAR_10->client);
 if (VAR_11 < 0) {
  FUNC_5(&VAR_8->dev, "failed to register host1x client: %d\n",
   VAR_11);
  return VAR_11;
 }

 return 0;
}
