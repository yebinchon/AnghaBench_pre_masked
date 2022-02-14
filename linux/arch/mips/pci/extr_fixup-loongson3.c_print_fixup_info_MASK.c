
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int irq; int device; int vendor; int dev; } ;


 int FUNC_0 (int *,char*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(const struct pci_dev *VAR_0)
{
 FUNC_0(&VAR_0->dev, "Device %x:%x, irq %d\n",
   VAR_0->vendor, VAR_0->device, VAR_0->irq);
}
