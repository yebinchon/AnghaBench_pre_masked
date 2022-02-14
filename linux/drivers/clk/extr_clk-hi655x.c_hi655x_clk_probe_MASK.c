
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct device* parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct hi655x_pmic {int dummy; } ;
struct TYPE_7__ {struct clk_init_data* init; } ;
struct hi655x_clk {TYPE_2__ clk_hw; struct hi655x_pmic* hi655x; } ;
struct device {int of_node; } ;
struct clk_init_data {char const* name; int * ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct hi655x_pmic* FUNC_0 (struct device*) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*) ;
 struct hi655x_clk* FUNC_2 (TYPE_1__*,int,int ) ;
 int FUNC_3 (TYPE_1__*,int ,TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ,char*,int ,char const**) ;
 int FUNC_5 (struct platform_device*,struct hi655x_clk*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_4)
{
 struct device *VAR_5 = VAR_4->dev.parent;
 struct hi655x_pmic *VAR_6 = FUNC_0(VAR_5);
 struct hi655x_clk *VAR_7;
 const char *VAR_8 = "hi655x-clk";
 struct clk_init_data VAR_9 = {
  .name = VAR_8,
  .ops = &VAR_2
 };
 int VAR_10;

 VAR_7 = FUNC_2(&VAR_4->dev, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 FUNC_4(VAR_5->of_node, "clock-output-names",
          0, &VAR_8);

 VAR_7->clk_hw.init = &VAR_9;
 VAR_7->hi655x = VAR_6;

 FUNC_5(VAR_4, VAR_7);

 VAR_10 = FUNC_1(&VAR_4->dev, &VAR_7->clk_hw);
 if (VAR_10)
  return VAR_10;

 return FUNC_3(&VAR_4->dev, VAR_3,
        &VAR_7->clk_hw);
}
