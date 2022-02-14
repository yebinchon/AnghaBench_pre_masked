
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;


 int FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*,int) ;

int
FUNC_3 (struct pci_dev *VAR_0, int VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_2(VAR_0, VAR_1);
 if (VAR_2 < 0)
  return VAR_2;

 if (!FUNC_1(VAR_0))
  return FUNC_0(VAR_0);
 return 0;
}
