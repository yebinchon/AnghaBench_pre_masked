
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int device; } ;







 int VAR_0 ;
 int FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*,int ,int) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_5(struct pci_dev *VAR_1)
{
 int VAR_2 = 0;


 FUNC_1(VAR_1, VAR_0, 0x40);

 switch (VAR_1->device) {
 case 128:
  VAR_2 = FUNC_4(VAR_1);
  break;
 case 132:
  FUNC_0(VAR_1);

 case 131:
 case 130:
  VAR_2 = FUNC_2(VAR_1);
  break;
 case 129:
  FUNC_3(VAR_1);
  break;
 }

 return VAR_2;
}
