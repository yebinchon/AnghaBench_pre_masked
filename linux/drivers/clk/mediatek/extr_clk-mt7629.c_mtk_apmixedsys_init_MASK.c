
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;
struct clk_onecell_data {int * clks; } ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 struct clk_onecell_data* FUNC_2 (int ) ;
 int FUNC_3 (struct device_node*,int ,int ,struct clk_onecell_data*) ;
 int FUNC_4 (struct device_node*,int ,int ,struct clk_onecell_data*) ;
 int FUNC_5 (struct device_node*,int ,struct clk_onecell_data*) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_7)
{
 struct clk_onecell_data *VAR_8;
 struct device_node *VAR_9 = VAR_7->dev.of_node;

 VAR_8 = FUNC_2(VAR_2);
 if (!VAR_8)
  return -VAR_3;

 FUNC_4(VAR_9, VAR_6, FUNC_0(VAR_6),
         VAR_8);

 FUNC_3(VAR_9, VAR_4,
          FUNC_0(VAR_4), VAR_8);

 FUNC_1(VAR_8->clks[VAR_0]);
 FUNC_1(VAR_8->clks[VAR_1]);

 return FUNC_5(VAR_9, VAR_5, VAR_8);
}
