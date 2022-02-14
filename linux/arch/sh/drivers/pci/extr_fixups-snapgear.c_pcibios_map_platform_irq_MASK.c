
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_dev {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int,int,int) ;

int FUNC_2(const struct pci_dev *VAR_0, u8 VAR_1, u8 VAR_2)
{
 int VAR_3 = -1;

 switch (VAR_1) {
 case 8: break;
 case 11: VAR_3 = FUNC_0(0x300); break;
 case 12: VAR_3 = FUNC_0(0x360); break;
 case 13: VAR_3 = FUNC_0(0x2a0); break;
 case 14: VAR_3 = FUNC_0(0x300); break;
 case 15: VAR_3 = FUNC_0(0x360); break;
 }

 FUNC_1("PCI: Mapping SnapGear IRQ for slot %d, pin %c to irq %d\n",
        VAR_1, VAR_2 - 1 + 'A', VAR_3);

 return VAR_3;
}
