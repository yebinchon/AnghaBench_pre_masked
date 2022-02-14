
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct eeh_dev {TYPE_1__* pe; } ;
struct TYPE_2__ {int state; } ;


 int VAR_0 ;
 struct pci_dev* FUNC_0 (struct eeh_dev*) ;
 int FUNC_1 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_2(struct eeh_dev *VAR_1, void *VAR_2)
{
 struct pci_dev *VAR_3;

 if (!VAR_1)
  return;
 if (VAR_1->pe && (VAR_1->pe->state & VAR_0))
  return;

 VAR_3 = FUNC_0(VAR_1);
 if (!VAR_3)
  return;

 FUNC_1(VAR_3);
}
