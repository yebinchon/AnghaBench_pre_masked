
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int device_node; } ;
struct zynqmp_dma_chan {TYPE_2__ common; int tasklet; scalar_t__ irq; TYPE_1__* zdev; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int ,scalar_t__,struct zynqmp_dma_chan*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct zynqmp_dma_chan *VAR_0)
{
 if (!VAR_0)
  return;

 if (VAR_0->irq)
  FUNC_0(VAR_0->zdev->dev, VAR_0->irq, VAR_0);
 FUNC_2(&VAR_0->tasklet);
 FUNC_1(&VAR_0->common.device_node);
}
