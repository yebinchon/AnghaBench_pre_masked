
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;


 int FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(struct pci_dev *VAR_1)
{
 int VAR_2;

 if (!VAR_0)
  return;

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2 < 0)
  return;





 FUNC_1(VAR_1);
}
