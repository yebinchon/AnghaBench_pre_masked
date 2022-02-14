
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_bus {int number; } ;



__attribute__((used)) static inline u32 FUNC_0(struct pci_bus *VAR_0, unsigned int VAR_1, int VAR_2)
{
 return ((VAR_0->number & 0xFF) << 16) | ((VAR_1 & 0xFF) << 8) | (VAR_2 & 0xFC);

}
