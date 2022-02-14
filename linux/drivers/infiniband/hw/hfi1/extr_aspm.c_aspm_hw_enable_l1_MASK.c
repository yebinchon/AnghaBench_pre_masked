
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
 int VAR_2 ;
 int FUNC_0 (struct pci_dev*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct hfi1_devdata *VAR_3)
{
 struct pci_dev *VAR_4 = VAR_3->pcidev->bus->self;





 if (!VAR_4)
  return;


 FUNC_0(VAR_4, VAR_0,
        VAR_1,
        VAR_2);
 FUNC_0(VAR_3->pcidev, VAR_0,
        VAR_1,
        VAR_2);
}
