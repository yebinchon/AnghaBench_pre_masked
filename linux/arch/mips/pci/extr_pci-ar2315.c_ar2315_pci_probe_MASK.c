
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct resource {int start; int end; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct TYPE_6__ {TYPE_2__* io_resource; TYPE_1__* mem_resource; int * pci_ops; } ;
struct TYPE_5__ {char* name; int flags; scalar_t__ end; scalar_t__ start; } ;
struct TYPE_4__ {char* name; int flags; int end; int start; struct resource* parent; } ;
struct ar2315_pci_ctrl {int irq; TYPE_3__ pci_ctrl; TYPE_2__ io_res; TYPE_1__ mem_res; int domain; int cfg_mem; int mmr_mem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ar2315_pci_ctrl*) ;
 int VAR_13 ;
 int FUNC_3 (struct ar2315_pci_ctrl*) ;
 int VAR_14 ;
 int FUNC_4 (struct ar2315_pci_ctrl*,int ,int ,int) ;
 int FUNC_5 (struct ar2315_pci_ctrl*,int ) ;
 int FUNC_6 (struct ar2315_pci_ctrl*,int ,int) ;
 int FUNC_7 (struct device*,char*) ;
 int FUNC_8 (struct device*,char*) ;
 int FUNC_9 (struct device*,int ,int ) ;
 int FUNC_10 (struct device*,struct resource*) ;
 struct ar2315_pci_ctrl* FUNC_11 (struct device*,int,int ) ;
 int FUNC_12 (int *,int ,int *,struct ar2315_pci_ctrl*) ;
 int FUNC_13 (int) ;
 int FUNC_14 (struct platform_device*,int ) ;
 struct resource* FUNC_15 (struct platform_device*,int ,char*) ;
 int FUNC_16 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_17(struct platform_device *VAR_15)
{
 struct ar2315_pci_ctrl *VAR_16;
 struct device *VAR_17 = &VAR_15->dev;
 struct resource *VAR_18;
 int VAR_19, VAR_20;

 VAR_16 = FUNC_11(VAR_17, sizeof(*VAR_16), VAR_10);
 if (!VAR_16)
  return -VAR_9;

 VAR_19 = FUNC_14(VAR_15, 0);
 if (VAR_19 < 0)
  return -VAR_8;
 VAR_16->irq = VAR_19;

 VAR_18 = FUNC_15(VAR_15, VAR_12,
        "ar2315-pci-ctrl");
 VAR_16->mmr_mem = FUNC_10(VAR_17, VAR_18);
 if (FUNC_0(VAR_16->mmr_mem))
  return FUNC_1(VAR_16->mmr_mem);

 VAR_18 = FUNC_15(VAR_15, VAR_12,
        "ar2315-pci-ext");
 if (!VAR_18)
  return -VAR_8;

 VAR_16->mem_res.name = "AR2315 PCI mem space";
 VAR_16->mem_res.parent = VAR_18;
 VAR_16->mem_res.start = VAR_18->start;
 VAR_16->mem_res.end = VAR_18->end;
 VAR_16->mem_res.flags = VAR_12;


 VAR_16->cfg_mem = FUNC_9(VAR_17, VAR_18->start,
         VAR_4);
 if (!VAR_16->cfg_mem) {
  FUNC_7(VAR_17, "failed to remap PCI config space\n");
  return -VAR_9;
 }


 FUNC_4(VAR_16, VAR_6,
       VAR_1,
       VAR_3);
 FUNC_13(100);


 FUNC_4(VAR_16, VAR_6,
       VAR_1,
       VAR_2 | VAR_0 | 0x8);

 FUNC_6(VAR_16, VAR_7,
        0x1E |
        (1 << 5) |
        (0x2 << 30) );
 FUNC_5(VAR_16, VAR_7);

 FUNC_13(500);

 VAR_20 = FUNC_2(VAR_16);
 if (VAR_20)
  return VAR_20;

 VAR_16->domain = FUNC_12(((void*)0), VAR_5,
         &VAR_13, VAR_16);
 if (!VAR_16->domain) {
  FUNC_7(VAR_17, "failed to add IRQ domain\n");
  return -VAR_9;
 }

 FUNC_3(VAR_16);


 VAR_16->io_res.name = "AR2315 IO space";
 VAR_16->io_res.start = 0;
 VAR_16->io_res.end = 0;
 VAR_16->io_res.flags = VAR_11,

 VAR_16->pci_ctrl.pci_ops = &VAR_14;
 VAR_16->pci_ctrl.mem_resource = &VAR_16->mem_res,
 VAR_16->pci_ctrl.io_resource = &VAR_16->io_res,

 FUNC_16(&VAR_16->pci_ctrl);

 FUNC_8(VAR_17, "register PCI controller\n");

 return 0;
}
