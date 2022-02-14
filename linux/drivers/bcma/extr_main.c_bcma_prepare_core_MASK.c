
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int coherent_dma_mask; int * dma_mask; struct TYPE_5__* parent; int * bus; int release; } ;
struct bcma_device {TYPE_2__ dev; TYPE_2__* dma_dev; int irq; int core_index; } ;
struct bcma_bus {int hosttype; TYPE_2__* dev; TYPE_1__* host_pci; int num; } ;
struct TYPE_4__ {int irq; } ;





 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,struct bcma_device*) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_2__*,char*,int ,int ) ;

void FUNC_3(struct bcma_bus *VAR_3, struct bcma_device *VAR_4)
{
 VAR_4->dev.release = VAR_2;
 VAR_4->dev.bus = &VAR_1;
 FUNC_2(&VAR_4->dev, "bcma%d:%d", VAR_3->num, VAR_4->core_index);
 VAR_4->dev.parent = VAR_3->dev;
 if (VAR_3->dev)
  FUNC_1(VAR_3->dev, VAR_4);

 switch (VAR_3->hosttype) {
 case 130:
  VAR_4->dma_dev = VAR_3->dev;
  VAR_4->irq = VAR_3->host_pci->irq;
  break;
 case 128:
  if (FUNC_0(VAR_0) && VAR_3->dev) {
   VAR_4->dma_dev = VAR_3->dev;
  } else {
   VAR_4->dev.dma_mask = &VAR_4->dev.coherent_dma_mask;
   VAR_4->dma_dev = &VAR_4->dev;
  }
  break;
 case 129:
  break;
 }
}
