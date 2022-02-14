
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dn {int dummy; } ;
struct eeh_dev {TYPE_1__* pe; scalar_t__ physfn; } ;
struct TYPE_2__ {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct eeh_dev* FUNC_0 (struct pci_dn*) ;

__attribute__((used)) static inline bool FUNC_1(struct pci_dn *VAR_2)
{
 struct eeh_dev *VAR_3 = FUNC_0(VAR_2);

 if (!VAR_3 || !VAR_3->pe)
  return 0;






 if (VAR_3->physfn && (VAR_3->pe->state & VAR_1))
  return 0;

 if (VAR_3->pe->state & VAR_0)
  return 1;

 return 0;
}
