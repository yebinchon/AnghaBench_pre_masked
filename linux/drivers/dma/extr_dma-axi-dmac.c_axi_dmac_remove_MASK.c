
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct TYPE_5__ {int task; } ;
struct TYPE_6__ {TYPE_2__ vchan; } ;
struct axi_dmac {int clk; int dma_dev; TYPE_3__ chan; int irq; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,struct axi_dmac*) ;
 int FUNC_3 (int ) ;
 struct axi_dmac* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_0)
{
 struct axi_dmac *VAR_1 = FUNC_4(VAR_0);

 FUNC_3(VAR_0->dev.of_node);
 FUNC_2(VAR_1->irq, VAR_1);
 FUNC_5(&VAR_1->chan.vchan.task);
 FUNC_1(&VAR_1->dma_dev);
 FUNC_0(VAR_1->clk);

 return 0;
}
