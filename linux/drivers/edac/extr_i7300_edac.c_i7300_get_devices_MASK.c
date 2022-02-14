
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int devfn; } ;
struct mem_ctl_info {struct i7300_pvt* pvt_info; } ;
struct i7300_pvt {void** pci_dev_2x_0_fbd_branch; TYPE_1__* pci_dev_16_2_fsb_err_regs; TYPE_1__* pci_dev_16_1_fsb_addr_map; TYPE_1__* pci_dev_16_0_fsb_ctlr; } ;
struct TYPE_2__ {int device; int vendor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (int,char*,int ,int ,int ) ;
 int FUNC_2 (int ,char*,int ,int ) ;
 int FUNC_3 (struct mem_ctl_info*) ;
 void* FUNC_4 (struct pci_dev*) ;
 void* FUNC_5 (int ,int ,struct pci_dev*) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_7(struct mem_ctl_info *VAR_6)
{
 struct i7300_pvt *VAR_7;
 struct pci_dev *VAR_8;

 VAR_7 = VAR_6->pvt_info;


 VAR_8 = ((void*)0);
 while ((VAR_8 = FUNC_5(VAR_5,
          VAR_2,
          VAR_8))) {

  switch (FUNC_0(VAR_8->devfn)) {
  case 1:
   if (!VAR_7->pci_dev_16_1_fsb_addr_map)
    VAR_7->pci_dev_16_1_fsb_addr_map =
       FUNC_4(VAR_8);
   break;
  case 2:
   if (!VAR_7->pci_dev_16_2_fsb_err_regs)
    VAR_7->pci_dev_16_2_fsb_err_regs =
       FUNC_4(VAR_8);
   break;
  }
 }

 if (!VAR_7->pci_dev_16_1_fsb_addr_map ||
     !VAR_7->pci_dev_16_2_fsb_err_regs) {

  FUNC_2(VAR_1,
   "'system address,Process Bus' device not found:"
   "vendor 0x%x device 0x%x ERR funcs (broken BIOS?)\n",
   VAR_5,
   VAR_2);
  goto error;
 }

 FUNC_1(1, "System Address, processor bus- PCI Bus ID: %s  %x:%x\n",
   FUNC_6(VAR_7->pci_dev_16_0_fsb_ctlr),
   VAR_7->pci_dev_16_0_fsb_ctlr->vendor,
   VAR_7->pci_dev_16_0_fsb_ctlr->device);
 FUNC_1(1, "Branchmap, control and errors - PCI Bus ID: %s  %x:%x\n",
   FUNC_6(VAR_7->pci_dev_16_1_fsb_addr_map),
   VAR_7->pci_dev_16_1_fsb_addr_map->vendor,
   VAR_7->pci_dev_16_1_fsb_addr_map->device);
 FUNC_1(1, "FSB Error Regs - PCI Bus ID: %s  %x:%x\n",
   FUNC_6(VAR_7->pci_dev_16_2_fsb_err_regs),
   VAR_7->pci_dev_16_2_fsb_err_regs->vendor,
   VAR_7->pci_dev_16_2_fsb_err_regs->device);

 VAR_7->pci_dev_2x_0_fbd_branch[0] = FUNC_5(VAR_5,
         VAR_3,
         ((void*)0));
 if (!VAR_7->pci_dev_2x_0_fbd_branch[0]) {
  FUNC_2(VAR_1,
   "MC: 'BRANCH 0' device not found:"
   "vendor 0x%x device 0x%x Func 0 (broken BIOS?)\n",
   VAR_5, VAR_3);
  goto error;
 }

 VAR_7->pci_dev_2x_0_fbd_branch[1] = FUNC_5(VAR_5,
         VAR_4,
         ((void*)0));
 if (!VAR_7->pci_dev_2x_0_fbd_branch[1]) {
  FUNC_2(VAR_1,
   "MC: 'BRANCH 1' device not found:"
   "vendor 0x%x device 0x%x Func 0 "
   "(broken BIOS?)\n",
   VAR_5,
   VAR_4);
  goto error;
 }

 return 0;

error:
 FUNC_3(VAR_6);
 return -VAR_0;
}
