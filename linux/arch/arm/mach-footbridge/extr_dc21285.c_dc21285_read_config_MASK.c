
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_bus {int dummy; } ;


 int* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_0 (struct pci_bus*,unsigned int) ;

__attribute__((used)) static int
FUNC_1(struct pci_bus *VAR_3, unsigned int VAR_4, int VAR_5,
      int VAR_6, u32 *VAR_7)
{
 unsigned long VAR_8 = FUNC_0(VAR_3, VAR_4);
 u32 VAR_9 = 0xffffffff;

 if (VAR_8)
  switch (VAR_6) {
  case 1:
   asm("ldrb	%0, [%1, %2]"
    : "=r" (VAR_9) : "r" (VAR_8), "r" (VAR_5) : "cc");
   break;
  case 2:
   asm("ldrh	%0, [%1, %2]"
    : "=r" (VAR_9) : "r" (VAR_8), "r" (VAR_5) : "cc");
   break;
  case 4:
   asm("ldr	%0, [%1, %2]"
    : "=r" (VAR_9) : "r" (VAR_8), "r" (VAR_5) : "cc");
   break;
  }

 *VAR_7 = VAR_9;

 VAR_9 = *VAR_0;
 if (VAR_9 & VAR_2) {
  *VAR_0 = VAR_9 & (0xffff|VAR_2);
  return -1;
 }

 return VAR_1;
}
