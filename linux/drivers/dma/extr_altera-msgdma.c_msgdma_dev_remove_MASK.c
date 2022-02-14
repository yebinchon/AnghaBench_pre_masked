
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int device_node; } ;
struct msgdma_device {TYPE_1__ dmachan; int irq_tasklet; int irq; int dev; } ;


 int FUNC_0 (int ,int ,struct msgdma_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct msgdma_device *VAR_0)
{
 if (!VAR_0)
  return;

 FUNC_0(VAR_0->dev, VAR_0->irq, VAR_0);
 FUNC_2(&VAR_0->irq_tasklet);
 FUNC_1(&VAR_0->dmachan.device_node);
}
