
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {unsigned int needs_freset; } ;
struct eeh_dev {int dummy; } ;


 struct pci_dev* FUNC_0 (struct eeh_dev*) ;

__attribute__((used)) static void FUNC_1(struct eeh_dev *VAR_0, void *VAR_1)
{
 struct pci_dev *VAR_2;
 unsigned int *VAR_3 = (unsigned int *)VAR_1;

 VAR_2 = FUNC_0(VAR_0);
 if (VAR_2)
  *VAR_3 |= VAR_2->needs_freset;
}
