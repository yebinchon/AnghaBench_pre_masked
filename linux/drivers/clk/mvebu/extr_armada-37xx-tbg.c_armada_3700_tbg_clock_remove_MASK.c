
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct clk_hw_onecell_data {int num; int * hws; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct clk_hw_onecell_data* FUNC_2 (struct platform_device*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 int VAR_1;
 struct clk_hw_onecell_data *VAR_2 = FUNC_2(VAR_0);

 FUNC_1(VAR_0->dev.of_node);
 for (VAR_1 = 0; VAR_1 < VAR_2->num; VAR_1++)
  FUNC_0(VAR_2->hws[VAR_1]);

 return 0;
}
