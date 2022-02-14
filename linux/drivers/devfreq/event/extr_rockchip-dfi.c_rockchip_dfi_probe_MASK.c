
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rockchip_dfi {int edev; struct devfreq_event_desc* desc; struct device* dev; int regmap_pmu; int clk; int regs; } ;
struct resource {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct device_node {int name; } ;
struct devfreq_event_desc {int name; struct rockchip_dfi* driver_data; int * ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*,struct devfreq_event_desc*) ;
 int FUNC_5 (struct device*,struct resource*) ;
 void* FUNC_6 (struct device*,int,int ) ;
 struct device_node* FUNC_7 (struct device_node*,char*,int ) ;
 struct resource* FUNC_8 (struct platform_device*,int ,int ) ;
 int FUNC_9 (struct platform_device*,struct rockchip_dfi*) ;
 int VAR_3 ;
 int FUNC_10 (struct device_node*) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_4)
{
 struct device *VAR_5 = &VAR_4->dev;
 struct rockchip_dfi *VAR_6;
 struct resource *VAR_7;
 struct devfreq_event_desc *VAR_8;
 struct device_node *VAR_9 = VAR_4->dev.of_node, *VAR_10;

 VAR_6 = FUNC_6(VAR_5, sizeof(struct rockchip_dfi), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_7 = FUNC_8(VAR_4, VAR_2, 0);
 VAR_6->regs = FUNC_5(&VAR_4->dev, VAR_7);
 if (FUNC_0(VAR_6->regs))
  return FUNC_1(VAR_6->regs);

 VAR_6->clk = FUNC_3(VAR_5, "pclk_ddr_mon");
 if (FUNC_0(VAR_6->clk)) {
  FUNC_2(VAR_5, "Cannot get the clk dmc_clk\n");
  return FUNC_1(VAR_6->clk);
 }


 VAR_10 = FUNC_7(VAR_9, "rockchip,pmu", 0);
 if (VAR_10) {
  VAR_6->regmap_pmu = FUNC_10(VAR_10);
  if (FUNC_0(VAR_6->regmap_pmu))
   return FUNC_1(VAR_6->regmap_pmu);
 }
 VAR_6->dev = VAR_5;

 VAR_8 = FUNC_6(VAR_5, sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_8->ops = &VAR_3;
 VAR_8->driver_data = VAR_6;
 VAR_8->name = VAR_9->name;
 VAR_6->desc = VAR_8;

 VAR_6->edev = FUNC_4(&VAR_4->dev, VAR_8);
 if (FUNC_0(VAR_6->edev)) {
  FUNC_2(&VAR_4->dev,
   "failed to add devfreq-event device\n");
  return FUNC_1(VAR_6->edev);
 }

 FUNC_9(VAR_4, VAR_6);

 return 0;
}
