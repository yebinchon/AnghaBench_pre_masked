
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bcma_device {struct bcma_bus* bus; } ;
struct TYPE_4__ {int core; } ;
struct bcma_bus {int hosttype; int dev; TYPE_2__ drv_mips; TYPE_1__* host_pci; } ;
struct TYPE_3__ {unsigned int irq; } ;





 unsigned int FUNC_0 (struct bcma_device*) ;
 unsigned int FUNC_1 (int ,struct bcma_device*,int) ;

unsigned int FUNC_2(struct bcma_device *VAR_0, int VAR_1)
{
 struct bcma_bus *VAR_2 = VAR_0->bus;
 unsigned int VAR_3;

 switch (VAR_2->hosttype) {
 case 130:
  return VAR_2->host_pci->irq;
 case 128:
  if (VAR_2->drv_mips.core && VAR_1 == 0) {
   VAR_3 = FUNC_0(VAR_0);
   return VAR_3 <= 4 ? VAR_3 + 2 : 0;
  }
  if (VAR_2->dev)
   return FUNC_1(VAR_2->dev, VAR_0, VAR_1);
  return 0;
 case 129:
  return 0;
 }

 return 0;
}
