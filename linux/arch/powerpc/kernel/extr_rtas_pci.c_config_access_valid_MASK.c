
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dn {scalar_t__ pci_ext_config_space; } ;



__attribute__((used)) static inline int FUNC_0(struct pci_dn *VAR_0, int VAR_1)
{
 if (VAR_1 < 256)
  return 1;
 if (VAR_1 < 4096 && VAR_0->pci_ext_config_space)
  return 1;

 return 0;
}
