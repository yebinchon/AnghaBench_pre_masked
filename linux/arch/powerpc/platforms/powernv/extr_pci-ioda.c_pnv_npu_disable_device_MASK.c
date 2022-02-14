
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct eeh_pe {int dummy; } ;
struct eeh_dev {struct eeh_pe* pe; } ;
struct TYPE_2__ {int (* reset ) (struct eeh_pe*,int ) ;} ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 struct eeh_dev* FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct eeh_pe*,int ) ;

__attribute__((used)) static void FUNC_2(struct pci_dev *VAR_2)
{
 struct eeh_dev *VAR_3 = FUNC_0(VAR_2);
 struct eeh_pe *VAR_4 = VAR_3 ? VAR_3->pe : ((void*)0);

 if (VAR_4 && VAR_1 && VAR_1->reset)
  VAR_1->reset(VAR_4, VAR_0);
}
