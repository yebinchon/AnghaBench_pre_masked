
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; int name; } ;
struct device_node {int dummy; } ;
struct clk_onecell_data {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,char*,int ,int) ;
 int FUNC_2 (TYPE_1__*) ;
 struct clk_onecell_data* FUNC_3 (int ) ;
 int FUNC_4 (struct device_node*,int ,int ,struct clk_onecell_data*) ;
 int FUNC_5 (struct device_node*,int ,struct clk_onecell_data*) ;
 int FUNC_6 (struct device_node*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_3)
{
 struct clk_onecell_data *VAR_4;
 struct device_node *VAR_5 = VAR_3->dev.of_node;
 int VAR_6;

 VAR_4 = FUNC_3(VAR_0);

 FUNC_4(VAR_5, VAR_1, FUNC_0(VAR_1),
          VAR_4);

 VAR_6 = FUNC_5(VAR_5, VAR_2, VAR_4);
 if (VAR_6) {
  FUNC_1(&VAR_3->dev,
   "could not register clock provider: %s: %d\n",
   VAR_3->name, VAR_6);

  goto err_clk_provider;
 }

 VAR_6 = FUNC_2(&VAR_3->dev);
 if (VAR_6)
  goto err_plat_populate;

 return 0;

err_plat_populate:
 FUNC_6(VAR_5);
err_clk_provider:
 return VAR_6;
}
