
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*) ;
 scalar_t__ FUNC_4 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_5(struct pci_dev *VAR_1)
{
 int VAR_2 = 0;

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2) {
  FUNC_0(&VAR_1->dev, "Failed to save pci state\n");
  return -VAR_0;
 }


 if (FUNC_4(VAR_1))
  FUNC_3(VAR_1);

 FUNC_1(VAR_1);

 return 0;
}
