
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dn {int dummy; } ;
struct TYPE_3__ {struct pci_dn* pci_data; } ;
struct TYPE_4__ {TYPE_1__ archdata; } ;
struct pci_dev {TYPE_2__ dev; } ;


 struct pci_dn* FUNC_0 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_1(struct pci_dev *VAR_0)
{
 struct pci_dn *VAR_1;

 if (VAR_0->dev.archdata.pci_data)
  return;


 VAR_1 = FUNC_0(VAR_0);
 VAR_0->dev.archdata.pci_data = VAR_1;
}
