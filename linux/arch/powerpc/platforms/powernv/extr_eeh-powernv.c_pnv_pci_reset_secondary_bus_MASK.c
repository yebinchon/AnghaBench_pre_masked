
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int bus; } ;
struct pci_controller {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct pci_controller* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct pci_dev*,int ) ;
 int FUNC_3 (struct pci_controller*,int ) ;

void FUNC_4(struct pci_dev *VAR_2)
{
 struct pci_controller *VAR_3;

 if (FUNC_1(VAR_2->bus)) {
  VAR_3 = FUNC_0(VAR_2->bus);
  FUNC_3(VAR_3, VAR_1);
  FUNC_3(VAR_3, VAR_0);
 } else {
  FUNC_2(VAR_2, VAR_1);
  FUNC_2(VAR_2, VAR_0);
 }
}
