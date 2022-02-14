
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {TYPE_1__* bus; } ;
struct TYPE_4__ {int (* pcibios_fixup_sriov ) (struct pci_dev*) ;} ;
struct TYPE_3__ {scalar_t__ is_added; } ;


 int FUNC_0 (struct pci_dev*) ;
 TYPE_2__ VAR_0 ;
 int FUNC_1 (struct pci_dev*) ;

int FUNC_2(struct pci_dev *VAR_1)
{




 if (VAR_1->bus->is_added)
  FUNC_0(VAR_1);






 return 0;
}
