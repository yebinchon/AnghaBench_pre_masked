
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct qib_devdata {struct pci_dev* pcidev; } ;
struct pci_dev {int pcie_mpss; TYPE_1__* bus; } ;
struct TYPE_2__ {struct pci_dev* self; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*,int) ;
 int FUNC_6 (struct pci_dev*,int) ;
 int FUNC_7 (struct pci_dev*,char*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_8(struct qib_devdata *VAR_1)
{
 struct pci_dev *VAR_2;
 u16 VAR_3, VAR_4, VAR_5, VAR_6;
 u16 VAR_7, VAR_8, VAR_9;


 VAR_2 = VAR_1->pcidev->bus->self;
 if (!FUNC_2(VAR_2->bus)) {
  FUNC_7(VAR_1->pcidev, "Parent not root\n");
  return;
 }

 if (!FUNC_1(VAR_2) || !FUNC_1(VAR_1->pcidev))
  return;

 VAR_3 = VAR_2->pcie_mpss;
 VAR_4 = FUNC_0(FUNC_3(VAR_2)) - 8;

 VAR_5 = VAR_1->pcidev->pcie_mpss;
 VAR_6 = FUNC_0(FUNC_3(VAR_1->pcidev)) - 8;


 if (VAR_3 > VAR_5)
  VAR_3 = VAR_5;


 if (VAR_3 > (VAR_0 & 7))
  VAR_3 = VAR_0 & 7;

 if (VAR_3 > VAR_4) {
  VAR_4 = VAR_3;
  FUNC_5(VAR_2, 128 << VAR_4);
 }

 if (VAR_3 > VAR_6) {
  VAR_6 = VAR_3;
  FUNC_5(VAR_1->pcidev, 128 << VAR_6);
 }






 VAR_9 = 5;
 if (VAR_9 > ((VAR_0 >> 4) & 7))
  VAR_9 = (VAR_0 >> 4) & 7;

 VAR_9 = 128 << VAR_9;
 VAR_7 = FUNC_4(VAR_2);
 VAR_8 = FUNC_4(VAR_1->pcidev);

 if (VAR_9 > VAR_7) {
  VAR_7 = VAR_9;
  FUNC_6(VAR_2, VAR_7);
 }
 if (VAR_9 > VAR_8) {
  VAR_8 = VAR_9;
  FUNC_6(VAR_1->pcidev, VAR_8);
 }
}
