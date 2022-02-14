
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_bus {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,char*) ;
 int VAR_2 ;
 int FUNC_1 (struct pci_bus*) ;
 int FUNC_2 (struct pci_bus*,int) ;
 int FUNC_3 (struct pci_bus*) ;

void FUNC_4(struct pci_bus *VAR_3)
{
 FUNC_0(VAR_0, &VAR_3->dev, "Allocating resources\n");

 FUNC_1(VAR_3);

 FUNC_2(VAR_3, 0);
 FUNC_2(VAR_3, 1);

 if (!(VAR_2 & VAR_1))
  FUNC_3(VAR_3);
}
