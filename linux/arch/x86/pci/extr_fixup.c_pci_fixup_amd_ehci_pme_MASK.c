
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int pme_support; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;

__attribute__((used)) static void FUNC_1(struct pci_dev *VAR_3)
{
 FUNC_0(&VAR_3->dev, "PME# does not work under D3, disabling it\n");
 VAR_3->pme_support &= ~((VAR_0 | VAR_1)
  >> VAR_2);
}
