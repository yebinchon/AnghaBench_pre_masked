
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct TYPE_4__ {int dev; } ;
struct owl_dma {int clk; int irq; TYPE_2__ dma; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,struct owl_dma*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (struct owl_dma*,int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct owl_dma*) ;
 struct owl_dma* FUNC_6 (struct platform_device*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_1)
{
 struct owl_dma *VAR_2 = FUNC_6(VAR_1);

 FUNC_4(VAR_1->dev.of_node);
 FUNC_2(&VAR_2->dma);


 FUNC_3(VAR_2, VAR_0, 0x0);


 FUNC_1(VAR_2->dma.dev, VAR_2->irq, VAR_2);

 FUNC_5(VAR_2);

 FUNC_0(VAR_2->clk);

 return 0;
}
