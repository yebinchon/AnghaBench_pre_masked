
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pci_devinst {int dummy; } ;


 int FUNC_0 (struct pci_devinst*,int) ;
 int FUNC_1 (struct pci_devinst*,int) ;
 int FUNC_2 (struct pci_devinst*,int) ;

__attribute__((used)) static __inline uint32_t
FUNC_3(struct pci_devinst *VAR_0, int VAR_1, int VAR_2)
{

 if (VAR_2 == 1)
  return (FUNC_2(VAR_0, VAR_1));
 else if (VAR_2 == 2)
  return (FUNC_0(VAR_0, VAR_1));
 else
  return (FUNC_1(VAR_0, VAR_1));
}
