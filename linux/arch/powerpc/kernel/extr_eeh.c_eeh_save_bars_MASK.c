
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dn {int dummy; } ;
struct eeh_dev {int mode; int * config_space; } ;
struct TYPE_2__ {int (* read_config ) (struct pci_dn*,int,int,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct pci_dn* FUNC_0 (struct eeh_dev*) ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (struct pci_dn*,int,int,int *) ;

void FUNC_2(struct eeh_dev *VAR_3)
{
 struct pci_dn *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_0(VAR_3);
 if (!VAR_4)
  return;

 for (VAR_5 = 0; VAR_5 < 16; VAR_5++)
  VAR_2->read_config(VAR_4, VAR_5 * 4, 4, &VAR_3->config_space[VAR_5]);







 if (VAR_3->mode & VAR_0)
  VAR_3->config_space[1] |= VAR_1;
}
