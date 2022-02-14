
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_dev {int irq; } ;



int FUNC_0(const struct pci_dev *VAR_0, u8 VAR_1, u8 VAR_2)
{
 switch (VAR_1) {
 case 1:
  return 14;
 case 2:
  return 13;
 case 3:
  return 12;
 default:
  return VAR_0->irq;
 }
}
