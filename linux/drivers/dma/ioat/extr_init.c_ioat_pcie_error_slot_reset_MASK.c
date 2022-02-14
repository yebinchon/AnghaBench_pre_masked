
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
typedef int pci_ers_result_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*,int) ;

__attribute__((used)) static pci_ers_result_t FUNC_7(struct pci_dev *VAR_3)
{
 pci_ers_result_t VAR_4 = VAR_2;

 FUNC_0(&VAR_3->dev, "%s post reset handling\n", VAR_0);

 if (FUNC_2(VAR_3) < 0) {
  FUNC_1(&VAR_3->dev,
   "Failed to enable PCIe device after reset.\n");
  VAR_4 = VAR_1;
 } else {
  FUNC_5(VAR_3);
  FUNC_3(VAR_3);
  FUNC_4(VAR_3);
  FUNC_6(VAR_3, 0);
 }

 return VAR_4;
}
