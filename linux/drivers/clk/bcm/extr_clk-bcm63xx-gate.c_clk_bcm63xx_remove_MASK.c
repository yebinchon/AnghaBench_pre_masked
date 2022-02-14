
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct TYPE_4__ {int num; int * hws; } ;
struct clk_bcm63xx_hw {TYPE_2__ data; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct clk_bcm63xx_hw* FUNC_3 (struct platform_device*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct clk_bcm63xx_hw *VAR_1 = FUNC_3(VAR_0);
 int VAR_2;

 FUNC_2(VAR_0->dev.of_node);

 for (VAR_2 = 0; VAR_2 < VAR_1->data.num; VAR_2++) {
  if (!FUNC_0(VAR_1->data.hws[VAR_2]))
   FUNC_1(VAR_1->data.hws[VAR_2]);
 }

 return 0;
}
