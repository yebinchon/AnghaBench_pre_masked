
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int devfn; } ;
struct dw_pci_controller {int bus_num; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct pci_dev *VAR_1, struct dw_pci_controller *VAR_2)
{






 switch (FUNC_1(VAR_1->devfn)) {
 case 8:
  VAR_2->bus_num = FUNC_0(VAR_1->devfn) + 0 + 1;
  return 0;
 case 9:
  VAR_2->bus_num = FUNC_0(VAR_1->devfn) + 4 + 1;
  return 0;
 }
 return -VAR_0;
}
