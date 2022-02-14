
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;
struct clk_onecell_data {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct clk_onecell_data* FUNC_1 (int ) ;
 int FUNC_2 (struct device_node*,int ,int ,struct clk_onecell_data*) ;
 int FUNC_3 (struct device_node*,int ,struct clk_onecell_data*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_4)
{
 struct clk_onecell_data *VAR_5;
 struct device_node *VAR_6 = VAR_4->dev.of_node;

 VAR_5 = FUNC_1(VAR_0);
 if (!VAR_5)
  return -VAR_1;

 FUNC_2(VAR_6, VAR_3, FUNC_0(VAR_3), VAR_5);

 return FUNC_3(VAR_6, VAR_2, VAR_5);
}
