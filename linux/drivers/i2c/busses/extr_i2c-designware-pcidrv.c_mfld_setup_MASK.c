
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int device; } ;
struct dw_pci_controller {int bus_num; int bus_cfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct pci_dev *VAR_3, struct dw_pci_controller *VAR_4)
{
 switch (VAR_3->device) {
 case 0x0817:
  VAR_4->bus_cfg &= ~VAR_0;
  VAR_4->bus_cfg |= VAR_1;

 case 0x0818:
 case 0x0819:
  VAR_4->bus_num = VAR_3->device - 0x817 + 3;
  return 0;
 case 0x082C:
 case 0x082D:
 case 0x082E:
  VAR_4->bus_num = VAR_3->device - 0x82C + 0;
  return 0;
 }
 return -VAR_2;
}
