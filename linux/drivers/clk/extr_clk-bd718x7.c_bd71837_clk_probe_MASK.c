
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct rohm_regmap_dev {int chip_type; } ;
struct TYPE_7__ {struct device* parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct device {int of_node; } ;
struct clk_init_data {char* name; int num_parents; char const** parent_names; int * ops; } ;
struct TYPE_8__ {struct clk_init_data* init; } ;
struct bd718xx_clk {TYPE_2__ hw; struct platform_device* pdev; struct rohm_regmap_dev* mfd; int mask; int reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;



 int VAR_7 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 struct rohm_regmap_dev* FUNC_1 (struct device*) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*) ;
 struct bd718xx_clk* FUNC_3 (TYPE_1__*,int,int ) ;
 int FUNC_4 (TYPE_1__*,int ,TYPE_2__*) ;
 char* FUNC_5 (int ,int ) ;
 int VAR_8 ;
 int FUNC_6 (int ,char*,int ,char**) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_9)
{
 struct bd718xx_clk *VAR_10;
 int VAR_11 = -VAR_5;
 const char *VAR_12;
 struct device *VAR_13 = VAR_9->dev.parent;
 struct rohm_regmap_dev *VAR_14 = FUNC_1(VAR_13);
 struct clk_init_data VAR_15 = {
  .name = "bd718xx-32k-out",
  .ops = &VAR_7,
 };

 VAR_10 = FUNC_3(&VAR_9->dev, sizeof(*VAR_10), VAR_6);
 if (!VAR_10)
  return -VAR_5;

 VAR_15.num_parents = 1;
 VAR_12 = FUNC_5(VAR_13->of_node, 0);

 VAR_15.parent_names = &VAR_12;
 if (!VAR_12) {
  FUNC_0(&VAR_9->dev, "No parent clk found\n");
  return -VAR_4;
 }
 switch (VAR_14->chip_type) {
 case 129:
 case 128:
  VAR_10->reg = VAR_3;
  VAR_10->mask = VAR_2;
  break;
 case 130:
  VAR_10->reg = VAR_1;
  VAR_10->mask = VAR_0;
  break;
 default:
  FUNC_0(&VAR_9->dev, "Unknown clk chip\n");
  return -VAR_4;
 }
 VAR_10->mfd = VAR_14;
 VAR_10->pdev = VAR_9;
 VAR_10->hw.init = &VAR_15;

 FUNC_6(VAR_13->of_node,
          "clock-output-names", 0, &VAR_15.name);

 VAR_11 = FUNC_2(&VAR_9->dev, &VAR_10->hw);
 if (VAR_11) {
  FUNC_0(&VAR_9->dev, "failed to register 32K clk");
  return VAR_11;
 }
 VAR_11 = FUNC_4(&VAR_9->dev, VAR_8,
        &VAR_10->hw);
 if (VAR_11)
  FUNC_0(&VAR_9->dev, "adding clk provider failed\n");

 return VAR_11;
}
