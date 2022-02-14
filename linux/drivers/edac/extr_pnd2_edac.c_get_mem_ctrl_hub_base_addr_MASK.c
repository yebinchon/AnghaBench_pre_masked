
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct pci_dev {int dummy; } ;
struct b_cr_mchbar_lo_pci {int base; int enable; } ;
struct b_cr_mchbar_hi_pci {int base; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (struct pci_dev*) ;
 struct pci_dev* FUNC_3 (int ,int,int *) ;
 int FUNC_4 (struct pci_dev*,int,int *) ;

__attribute__((used)) static u64 FUNC_5(void)
{
 struct b_cr_mchbar_lo_pci VAR_1;
 struct b_cr_mchbar_hi_pci VAR_2;
 struct pci_dev *VAR_3;

 VAR_3 = FUNC_3(VAR_0, 0x1980, ((void*)0));
 if (VAR_3) {
  FUNC_4(VAR_3, 0x48, (u32 *)&VAR_1);
  FUNC_4(VAR_3, 0x4c, (u32 *)&VAR_2);
  FUNC_2(VAR_3);
 } else {
  return 0;
 }

 if (!VAR_1.enable) {
  FUNC_1(2, "MMIO via memory controller hub base address is disabled!\n");
  return 0;
 }

 return FUNC_0(VAR_2.base, 32) | FUNC_0(VAR_1.base, 15);
}
