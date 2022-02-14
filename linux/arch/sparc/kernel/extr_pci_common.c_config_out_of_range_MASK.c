
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_pbm_info {unsigned long pci_first_busno; unsigned long pci_last_busno; } ;



__attribute__((used)) static int FUNC_0(struct pci_pbm_info *VAR_0,
          unsigned long VAR_1,
          unsigned long VAR_2,
          unsigned long VAR_3)
{
 if (VAR_1 < VAR_0->pci_first_busno ||
     VAR_1 > VAR_0->pci_last_busno)
  return 1;
 return 0;
}
