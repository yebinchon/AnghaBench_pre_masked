
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct TYPE_7__ {int nr_resets; int * ops; int of_node; } ;
struct owl_reset {TYPE_3__ rcdev; int regmap; int reset_map; } ;
struct owl_clk_desc {int hw_clks; int regmap; int resets; int num_resets; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 struct owl_reset* FUNC_1 (TYPE_1__*,int,int ) ;
 int FUNC_2 (TYPE_1__*,TYPE_3__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (struct platform_device*,struct owl_clk_desc*) ;
 int VAR_2 ;
 struct owl_clk_desc VAR_3 ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_4)
{
 struct owl_clk_desc *VAR_5;
 struct owl_reset *VAR_6;
 int VAR_7;

 VAR_5 = &VAR_3;
 FUNC_4(VAR_4, VAR_5);





 VAR_6 = FUNC_1(&VAR_4->dev, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->rcdev.of_node = VAR_4->dev.of_node;
 VAR_6->rcdev.ops = &VAR_2;
 VAR_6->rcdev.nr_resets = VAR_5->num_resets;
 VAR_6->reset_map = VAR_5->resets;
 VAR_6->regmap = VAR_5->regmap;

 VAR_7 = FUNC_2(&VAR_4->dev, &VAR_6->rcdev);
 if (VAR_7)
  FUNC_0(&VAR_4->dev, "Failed to register reset controller\n");

 return FUNC_3(&VAR_4->dev, VAR_5->hw_clks);
}
