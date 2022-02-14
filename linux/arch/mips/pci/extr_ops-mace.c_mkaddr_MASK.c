
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_bus {int number; } ;



__attribute__((used)) static inline int FUNC_0(struct pci_bus *VAR_0, unsigned int VAR_1,
 unsigned int VAR_2)
{
 return ((VAR_0->number & 0xff) << 16) |
  ((VAR_1 & 0xff) << 8) |
  (VAR_2 & 0xfc);
}
