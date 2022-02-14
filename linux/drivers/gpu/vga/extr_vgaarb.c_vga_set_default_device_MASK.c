
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;


 struct pci_dev* FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*) ;
 struct pci_dev* VAR_0 ;

void FUNC_2(struct pci_dev *VAR_1)
{
 if (VAR_0 == VAR_1)
  return;

 FUNC_1(VAR_0);
 VAR_0 = FUNC_0(VAR_1);
}
