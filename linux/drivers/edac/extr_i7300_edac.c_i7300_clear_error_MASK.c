
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mem_ctl_info {struct i7300_pvt* pvt_info; } ;
struct i7300_pvt {int pci_dev_16_1_fsb_addr_map; int pci_dev_16_2_fsb_err_regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct mem_ctl_info *VAR_4)
{
 struct i7300_pvt *VAR_5 = VAR_4->pvt_info;
 u32 VAR_6;






 FUNC_0(VAR_5->pci_dev_16_2_fsb_err_regs,
         VAR_1, &VAR_6);
 FUNC_1(VAR_5->pci_dev_16_2_fsb_err_regs,
         VAR_1, VAR_6);

 FUNC_0(VAR_5->pci_dev_16_2_fsb_err_regs,
         VAR_2, &VAR_6);
 FUNC_1(VAR_5->pci_dev_16_2_fsb_err_regs,
         VAR_2, VAR_6);


 FUNC_0(VAR_5->pci_dev_16_1_fsb_addr_map,
         VAR_0, &VAR_6);
 FUNC_1(VAR_5->pci_dev_16_1_fsb_addr_map,
         VAR_0, VAR_6);

 FUNC_0(VAR_5->pci_dev_16_1_fsb_addr_map,
         VAR_3, &VAR_6);
 FUNC_1(VAR_5->pci_dev_16_1_fsb_addr_map,
         VAR_3, VAR_6);
}
