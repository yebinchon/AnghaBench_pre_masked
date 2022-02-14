
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int device; int vendor; int devfn; } ;
struct mem_ctl_info {struct i5400_pvt* pvt_info; } ;
struct i5400_pvt {scalar_t__ maxch; struct pci_dev* branchmap_werrors; struct pci_dev* fsb_error_regs; struct pci_dev* branch_0; int * branch_1; struct pci_dev* system_address; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 int FUNC_1 (int,char*,int ,int ,int ) ;
 int FUNC_2 (int ,char*,int ,int ) ;
 int FUNC_3 (struct pci_dev*) ;
 void* FUNC_4 (int ,int ,struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_6(struct mem_ctl_info *VAR_7, int VAR_8)
{
 struct i5400_pvt *VAR_9;
 struct pci_dev *VAR_10;

 VAR_9 = VAR_7->pvt_info;
 VAR_9->branchmap_werrors = ((void*)0);
 VAR_9->fsb_error_regs = ((void*)0);
 VAR_9->branch_0 = ((void*)0);
 VAR_9->branch_1 = ((void*)0);


 VAR_10 = ((void*)0);
 while (1) {
  VAR_10 = FUNC_4(VAR_6,
          VAR_3, VAR_10);
  if (!VAR_10) {

   FUNC_2(VAR_2,
    "'system address,Process Bus' "
    "device not found:"
    "vendor 0x%x device 0x%x ERR func 1 "
    "(broken BIOS?)\n",
    VAR_6,
    VAR_3);
   return -VAR_1;
  }


  if (FUNC_0(VAR_10->devfn) == 1)
   break;
 }
 VAR_9->branchmap_werrors = VAR_10;

 VAR_10 = ((void*)0);
 while (1) {
  VAR_10 = FUNC_4(VAR_6,
          VAR_3, VAR_10);
  if (!VAR_10) {

   FUNC_2(VAR_2,
    "'system address,Process Bus' "
    "device not found:"
    "vendor 0x%x device 0x%x ERR func 2 "
    "(broken BIOS?)\n",
    VAR_6,
    VAR_3);

   FUNC_3(VAR_9->branchmap_werrors);
   return -VAR_1;
  }


  if (FUNC_0(VAR_10->devfn) == 2)
   break;
 }
 VAR_9->fsb_error_regs = VAR_10;

 FUNC_1(1, "System Address, processor bus- PCI Bus ID: %s  %x:%x\n",
   FUNC_5(VAR_9->system_address),
   VAR_9->system_address->vendor, VAR_9->system_address->device);
 FUNC_1(1, "Branchmap, control and errors - PCI Bus ID: %s  %x:%x\n",
   FUNC_5(VAR_9->branchmap_werrors),
   VAR_9->branchmap_werrors->vendor,
   VAR_9->branchmap_werrors->device);
 FUNC_1(1, "FSB Error Regs - PCI Bus ID: %s  %x:%x\n",
   FUNC_5(VAR_9->fsb_error_regs),
   VAR_9->fsb_error_regs->vendor, VAR_9->fsb_error_regs->device);

 VAR_9->branch_0 = FUNC_4(VAR_6,
           VAR_4, ((void*)0));
 if (!VAR_9->branch_0) {
  FUNC_2(VAR_2,
   "MC: 'BRANCH 0' device not found:"
   "vendor 0x%x device 0x%x Func 0 (broken BIOS?)\n",
   VAR_6, VAR_4);

  FUNC_3(VAR_9->fsb_error_regs);
  FUNC_3(VAR_9->branchmap_werrors);
  return -VAR_1;
 }




 if (VAR_9->maxch < VAR_0)
  return 0;

 VAR_9->branch_1 = FUNC_4(VAR_6,
           VAR_5, ((void*)0));
 if (!VAR_9->branch_1) {
  FUNC_2(VAR_2,
   "MC: 'BRANCH 1' device not found:"
   "vendor 0x%x device 0x%x Func 0 "
   "(broken BIOS?)\n",
   VAR_6,
   VAR_5);

  FUNC_3(VAR_9->branch_0);
  FUNC_3(VAR_9->fsb_error_regs);
  FUNC_3(VAR_9->branchmap_werrors);
  return -VAR_1;
 }

 return 0;
}
