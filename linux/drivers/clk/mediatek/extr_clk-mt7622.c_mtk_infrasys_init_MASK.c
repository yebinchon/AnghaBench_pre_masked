
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
 int VAR_2 ;
 struct clk_onecell_data* FUNC_1 (int ) ;
 int FUNC_2 (struct device_node*,int ,int ,struct clk_onecell_data*) ;
 int FUNC_3 (struct device_node*,int ,int ,struct clk_onecell_data*) ;
 int FUNC_4 (struct device_node*,int,int) ;
 int FUNC_5 (struct device_node*,int ,struct clk_onecell_data*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_4)
{
 struct device_node *VAR_5 = VAR_4->dev.of_node;
 struct clk_onecell_data *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_1(VAR_0);

 FUNC_3(VAR_5, VAR_1, FUNC_0(VAR_1),
          VAR_6);

 FUNC_2(VAR_5, VAR_2, FUNC_0(VAR_2),
      VAR_6);

 VAR_7 = FUNC_5(VAR_5, VAR_3,
    VAR_6);
 if (VAR_7)
  return VAR_7;

 FUNC_4(VAR_5, 1, 0x30);

 return 0;
}
