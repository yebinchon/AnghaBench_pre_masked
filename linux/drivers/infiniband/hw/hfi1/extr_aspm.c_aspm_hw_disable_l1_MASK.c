
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {TYPE_1__* bus; } ;
struct hfi1_devdata {struct pci_dev* pcidev; } ;
struct TYPE_2__ {struct pci_dev* self; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pci_dev*,int ,int ,int) ;

void FUNC_1(struct hfi1_devdata *VAR_2)
{
 struct pci_dev *VAR_3 = VAR_2->pcidev->bus->self;


 FUNC_0(VAR_2->pcidev, VAR_0,
        VAR_1, 0x0);
 if (VAR_3)
  FUNC_0(VAR_3, VAR_0,
         VAR_1, 0x0);
}
