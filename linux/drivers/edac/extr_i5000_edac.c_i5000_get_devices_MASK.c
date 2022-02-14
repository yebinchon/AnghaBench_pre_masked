
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int device; int vendor; int devfn; } ;
struct mem_ctl_info {struct i5000_pvt* pvt_info; } ;
struct i5000_pvt {scalar_t__ maxch; struct pci_dev* branch_1; struct pci_dev* branch_0; struct pci_dev* fsb_error_regs; struct pci_dev* branchmap_werrors; struct pci_dev* system_address; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (int,char*,int ,int ,int ) ;
 int FUNC_2 (int ,char*,int ,int ) ;
 int FUNC_3 (struct pci_dev*) ;
 struct pci_dev* FUNC_4 (int ,int ,struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_6(struct mem_ctl_info *VAR_6, int VAR_7)
{

 struct i5000_pvt *VAR_8;
 struct pci_dev *VAR_9;

 VAR_8 = VAR_6->pvt_info;


 VAR_9 = ((void*)0);
 while (1) {
  VAR_9 = FUNC_4(VAR_5,
    VAR_4, VAR_9);


  if (VAR_9 == ((void*)0)) {
   FUNC_2(VAR_1,
    "'system address,Process Bus' "
    "device not found:"
    "vendor 0x%x device 0x%x FUNC 1 "
    "(broken BIOS?)\n",
    VAR_5,
    VAR_4);

   return 1;
  }


  if (FUNC_0(VAR_9->devfn) == 1)
   break;
 }

 VAR_8->branchmap_werrors = VAR_9;


 VAR_9 = ((void*)0);
 while (1) {
  VAR_9 = FUNC_4(VAR_5,
    VAR_4, VAR_9);

  if (VAR_9 == ((void*)0)) {
   FUNC_2(VAR_1,
    "MC: 'branchmap,control,errors' "
    "device not found:"
    "vendor 0x%x device 0x%x Func 2 "
    "(broken BIOS?)\n",
    VAR_5,
    VAR_4);

   FUNC_3(VAR_8->branchmap_werrors);
   return 1;
  }


  if (FUNC_0(VAR_9->devfn) == 2)
   break;
 }

 VAR_8->fsb_error_regs = VAR_9;

 FUNC_1(1, "System Address, processor bus- PCI Bus ID: %s  %x:%x\n",
   FUNC_5(VAR_8->system_address),
   VAR_8->system_address->vendor, VAR_8->system_address->device);
 FUNC_1(1, "Branchmap, control and errors - PCI Bus ID: %s  %x:%x\n",
   FUNC_5(VAR_8->branchmap_werrors),
   VAR_8->branchmap_werrors->vendor,
   VAR_8->branchmap_werrors->device);
 FUNC_1(1, "FSB Error Regs - PCI Bus ID: %s  %x:%x\n",
   FUNC_5(VAR_8->fsb_error_regs),
   VAR_8->fsb_error_regs->vendor, VAR_8->fsb_error_regs->device);

 VAR_9 = ((void*)0);
 VAR_9 = FUNC_4(VAR_5,
   VAR_2, VAR_9);

 if (VAR_9 == ((void*)0)) {
  FUNC_2(VAR_1,
   "MC: 'BRANCH 0' device not found:"
   "vendor 0x%x device 0x%x Func 0 (broken BIOS?)\n",
   VAR_5, VAR_2);

  FUNC_3(VAR_8->branchmap_werrors);
  FUNC_3(VAR_8->fsb_error_regs);
  return 1;
 }

 VAR_8->branch_0 = VAR_9;




 if (VAR_8->maxch >= VAR_0) {
  VAR_9 = ((void*)0);
  VAR_9 = FUNC_4(VAR_5,
    VAR_3, VAR_9);

  if (VAR_9 == ((void*)0)) {
   FUNC_2(VAR_1,
    "MC: 'BRANCH 1' device not found:"
    "vendor 0x%x device 0x%x Func 0 "
    "(broken BIOS?)\n",
    VAR_5,
    VAR_3);

   FUNC_3(VAR_8->branchmap_werrors);
   FUNC_3(VAR_8->fsb_error_regs);
   FUNC_3(VAR_8->branch_0);
   return 1;
  }

  VAR_8->branch_1 = VAR_9;
 }

 return 0;
}
