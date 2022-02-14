
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dn {int dummy; } ;
struct eeh_dev {int mode; } ;
struct TYPE_2__ {int (* restore_config ) (struct pci_dn*) ;} ;


 int VAR_0 ;
 struct pci_dn* FUNC_0 (struct eeh_dev*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (struct eeh_dev*) ;
 int FUNC_2 (struct eeh_dev*) ;
 int FUNC_3 (struct pci_dn*) ;

__attribute__((used)) static void FUNC_4(struct eeh_dev *VAR_2, void *VAR_3)
{
 struct pci_dn *VAR_4 = FUNC_0(VAR_2);


 if (VAR_2->mode & VAR_0)
  FUNC_1(VAR_2);
 else
  FUNC_2(VAR_2);

 if (VAR_1->restore_config && VAR_4)
  VAR_1->restore_config(VAR_4);
}
