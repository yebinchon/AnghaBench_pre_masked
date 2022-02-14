
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct at_xdmac_chan {int chan; int tasklet; } ;
struct TYPE_4__ {int chancnt; } ;
struct at_xdmac {struct at_xdmac_chan* chan; TYPE_2__ dma; int irq; int clk; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct at_xdmac*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ,struct at_xdmac*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct platform_device*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_0)
{
 struct at_xdmac *VAR_1 = (struct at_xdmac *)FUNC_6(VAR_0);
 int VAR_2;

 FUNC_1(VAR_1);
 FUNC_5(VAR_0->dev.of_node);
 FUNC_3(&VAR_1->dma);
 FUNC_2(VAR_1->clk);

 FUNC_4(VAR_1->irq, VAR_1);

 for (VAR_2 = 0; VAR_2 < VAR_1->dma.chancnt; VAR_2++) {
  struct at_xdmac_chan *VAR_3 = &VAR_1->chan[VAR_2];

  FUNC_7(&VAR_3->tasklet);
  FUNC_0(&VAR_3->chan);
 }

 return 0;
}
