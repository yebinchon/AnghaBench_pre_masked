
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct ide_host {scalar_t__* dev; } ;


 int FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*) ;
 struct ide_host* FUNC_2 (struct pci_dev*) ;
 struct pci_dev* FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct pci_dev *VAR_0)
{
 struct ide_host *VAR_1 = FUNC_2(VAR_0);
 struct pci_dev *VAR_2 = VAR_1->dev[1] ? FUNC_3(VAR_1->dev[1]) : ((void*)0);

 FUNC_0(VAR_0);
 FUNC_1(VAR_2);
}
