
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dn {int dummy; } ;
struct pci_dev {int dummy; } ;
struct eeh_dev {int dummy; } ;
struct TYPE_2__ {int (* restore_config ) (struct pci_dn*) ;} ;


 struct pci_dev* FUNC_0 (struct eeh_dev*) ;
 struct pci_dn* FUNC_1 (struct eeh_dev*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dn*) ;

__attribute__((used)) static void FUNC_4(struct eeh_dev *VAR_1, void *VAR_2)
{
 struct pci_dn *VAR_3 = FUNC_1(VAR_1);
 struct pci_dev *VAR_4 = FUNC_0(VAR_1);
 struct pci_dev *VAR_5 = VAR_2;

 if (!VAR_4)
  return;


 if (VAR_3 && VAR_0->restore_config)
  VAR_0->restore_config(VAR_3);


 if (VAR_4 != VAR_5)
  FUNC_2(VAR_4);
}
