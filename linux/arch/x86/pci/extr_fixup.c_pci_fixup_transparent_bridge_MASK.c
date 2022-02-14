
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int device; int transparent; } ;



__attribute__((used)) static void FUNC_0(struct pci_dev *VAR_0)
{
 if ((VAR_0->device & 0xff00) == 0x2400)
  VAR_0->transparent = 1;
}
