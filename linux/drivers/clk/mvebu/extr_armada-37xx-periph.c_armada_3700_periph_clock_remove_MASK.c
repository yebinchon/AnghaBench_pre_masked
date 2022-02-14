
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct clk_periph_driver_data {struct clk_hw_onecell_data* hw_data; } ;
struct clk_hw_onecell_data {int num; int * hws; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct clk_periph_driver_data* FUNC_2 (struct platform_device*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct clk_periph_driver_data *VAR_1 = FUNC_2(VAR_0);
 struct clk_hw_onecell_data *VAR_2 = VAR_1->hw_data;
 int VAR_3;

 FUNC_1(VAR_0->dev.of_node);

 for (VAR_3 = 0; VAR_3 < VAR_2->num; VAR_3++)
  FUNC_0(VAR_2->hws[VAR_3]);

 return 0;
}
