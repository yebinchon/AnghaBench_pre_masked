
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pci_devinst {scalar_t__ pi_cfgdata; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static __inline void
FUNC_1(struct pci_devinst *VAR_1, int VAR_2, uint32_t VAR_3)
{
 FUNC_0(VAR_2 <= (VAR_0 - 3) && (VAR_2 & 3) == 0);
 *(uint32_t *)(VAR_1->pi_cfgdata + VAR_2) = VAR_3;
}
