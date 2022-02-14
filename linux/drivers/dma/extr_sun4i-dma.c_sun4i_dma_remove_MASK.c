
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sun4i_dma_dev {int clk; int slave; int irq; } ;
struct TYPE_2__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 struct sun4i_dma_dev* FUNC_4 (struct platform_device*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_0)
{
 struct sun4i_dma_dev *VAR_1 = FUNC_4(VAR_0);


 FUNC_1(VAR_1->irq);

 FUNC_3(VAR_0->dev.of_node);
 FUNC_2(&VAR_1->slave);

 FUNC_0(VAR_1->clk);

 return 0;
}
