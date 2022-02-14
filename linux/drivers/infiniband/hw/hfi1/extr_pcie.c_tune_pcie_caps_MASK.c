
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct pci_dev {int pcie_mpss; TYPE_1__* bus; } ;
struct hfi1_devdata {struct pci_dev* pcidev; } ;
struct TYPE_2__ {struct pci_dev* self; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hfi1_devdata*,char*) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct pci_dev*,int ,int*) ;
 int FUNC_5 (struct pci_dev*,int ,int) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct pci_dev*,int) ;
 int FUNC_9 (struct pci_dev*,int) ;

void FUNC_10(struct hfi1_devdata *VAR_3)
{
 struct pci_dev *VAR_4;
 u16 VAR_5, VAR_6, VAR_7, VAR_8;
 u16 VAR_9, VAR_10, VAR_11, VAR_12;
 int VAR_13;





 VAR_13 = FUNC_4(VAR_3->pcidev, VAR_0, &VAR_12);
 if ((!VAR_13) && !(VAR_12 & VAR_1)) {
  FUNC_0(VAR_3, "Enabling PCIe extended tags\n");
  VAR_12 |= VAR_1;
  VAR_13 = FUNC_5(VAR_3->pcidev,
       VAR_0, VAR_12);
  if (VAR_13)
   FUNC_0(VAR_3, "Unable to write to PCI config\n");
 }

 VAR_4 = VAR_3->pcidev->bus->self;




 if (!VAR_4) {
  FUNC_0(VAR_3, "Parent not found\n");
  return;
 }
 if (!FUNC_3(VAR_4->bus)) {
  FUNC_0(VAR_3, "Parent not root\n");
  return;
 }
 if (!FUNC_2(VAR_4)) {
  FUNC_0(VAR_3, "Parent is not PCI Express capable\n");
  return;
 }
 if (!FUNC_2(VAR_3->pcidev)) {
  FUNC_0(VAR_3, "PCI device is not PCI Express capable\n");
  return;
 }
 VAR_5 = VAR_4->pcie_mpss;
 VAR_6 = FUNC_1(FUNC_6(VAR_4)) - 8;

 VAR_7 = VAR_3->pcidev->pcie_mpss;
 VAR_8 = FUNC_1(FUNC_6(VAR_3->pcidev)) - 8;


 if (VAR_5 > VAR_7)
  VAR_5 = VAR_7;


 if (VAR_5 > (VAR_2 & 7))
  VAR_5 = VAR_2 & 7;

 if (VAR_5 > VAR_6) {
  VAR_6 = VAR_5;
  FUNC_8(VAR_4, 128 << VAR_6);
 }

 if (VAR_5 > VAR_8) {
  VAR_8 = VAR_5;
  FUNC_8(VAR_3->pcidev, 128 << VAR_8);
 }






 VAR_11 = 5;
 if (VAR_11 > ((VAR_2 >> 4) & 7))
  VAR_11 = (VAR_2 >> 4) & 7;

 VAR_11 = 128 << VAR_11;
 VAR_9 = FUNC_7(VAR_4);
 VAR_10 = FUNC_7(VAR_3->pcidev);

 if (VAR_11 > VAR_9) {
  VAR_9 = VAR_11;
  FUNC_9(VAR_4, VAR_9);
 }
 if (VAR_11 > VAR_10) {
  VAR_10 = VAR_11;
  FUNC_9(VAR_3->pcidev, VAR_10);
 }
}
