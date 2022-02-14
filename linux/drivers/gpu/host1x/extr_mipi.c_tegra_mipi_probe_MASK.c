
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct tegra_mipi {int clk; int lock; int regs; TYPE_1__* dev; int soc; } ;
struct resource {int dummy; } ;
struct TYPE_5__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct of_device_id {int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (TYPE_1__*,struct resource*) ;
 struct tegra_mipi* FUNC_6 (TYPE_1__*,int,int ) ;
 int FUNC_7 (int *) ;
 struct of_device_id* FUNC_8 (int ,int ) ;
 struct resource* FUNC_9 (struct platform_device*,int ,int ) ;
 int FUNC_10 (struct platform_device*,struct tegra_mipi*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_5)
{
 const struct of_device_id *VAR_6;
 struct tegra_mipi *VAR_7;
 struct resource *VAR_8;
 int VAR_9;

 VAR_6 = FUNC_8(VAR_4, VAR_5->dev.of_node);
 if (!VAR_6)
  return -VAR_0;

 VAR_7 = FUNC_6(&VAR_5->dev, sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_1;

 VAR_7->soc = VAR_6->data;
 VAR_7->dev = &VAR_5->dev;

 VAR_8 = FUNC_9(VAR_5, VAR_3, 0);
 VAR_7->regs = FUNC_5(&VAR_5->dev, VAR_8);
 if (FUNC_0(VAR_7->regs))
  return FUNC_1(VAR_7->regs);

 FUNC_7(&VAR_7->lock);

 VAR_7->clk = FUNC_4(&VAR_5->dev, ((void*)0));
 if (FUNC_0(VAR_7->clk)) {
  FUNC_3(&VAR_5->dev, "failed to get clock\n");
  return FUNC_1(VAR_7->clk);
 }

 VAR_9 = FUNC_2(VAR_7->clk);
 if (VAR_9 < 0)
  return VAR_9;

 FUNC_10(VAR_5, VAR_7);

 return 0;
}
