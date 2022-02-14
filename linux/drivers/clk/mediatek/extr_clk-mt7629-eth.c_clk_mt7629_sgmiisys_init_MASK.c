
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct device_node* of_node; } ;
struct platform_device {int name; TYPE_1__ dev; } ;
struct device_node {int dummy; } ;
struct clk_onecell_data {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*,int ,int) ;
 struct clk_onecell_data* FUNC_1 (int ) ;
 int FUNC_2 (struct device_node*,int ,int ,struct clk_onecell_data*) ;
 int FUNC_3 (struct device_node*,int ,struct clk_onecell_data*) ;
 int VAR_1 ;
 int * VAR_2 ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_3)
{
 struct clk_onecell_data *VAR_4;
 struct device_node *VAR_5 = VAR_3->dev.of_node;
 static int VAR_6;
 int VAR_7;

 VAR_4 = FUNC_1(VAR_0);

 FUNC_2(VAR_5, VAR_2[VAR_6++], VAR_0,
          VAR_4);

 VAR_7 = FUNC_3(VAR_5, VAR_1, VAR_4);
 if (VAR_7)
  FUNC_0(&VAR_3->dev,
   "could not register clock provider: %s: %d\n",
   VAR_3->name, VAR_7);

 return VAR_7;
}
