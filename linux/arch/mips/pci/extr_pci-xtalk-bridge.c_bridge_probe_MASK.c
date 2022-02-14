
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct xtalk_bridge_platform_data {int masterwid; int intr_addr; scalar_t__ bridge_addr; int nasid; int io_offset; int io; int mem_offset; int mem; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct TYPE_4__ {struct device* parent; } ;
struct pci_host_bridge {int windows; int bus; int swizzle_irq; int map_irq; int * ops; scalar_t__ busnr; struct bridge_controller* sysdata; TYPE_1__ dev; } ;
struct irq_domain {int dummy; } ;
struct fwnode_handle {int dummy; } ;
struct bridge_regs {int dummy; } ;
struct TYPE_5__ {char* name; int end; int flags; scalar_t__ start; } ;
struct bridge_controller {int baddr; int intr_addr; int* pci_int; struct bridge_regs* base; int nasid; TYPE_2__ busn; struct irq_domain* domain; } ;
struct TYPE_6__ {int reg; } ;


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
 TYPE_3__* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (struct bridge_controller*,int ,int) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_1 (struct bridge_controller*,int ) ;
 int FUNC_2 (struct bridge_controller*,int ,int) ;
 int FUNC_3 (struct bridge_controller*,int ,int) ;
 struct xtalk_bridge_platform_data* FUNC_4 (struct device*) ;
 struct pci_host_bridge* FUNC_5 (struct device*,int) ;
 int FUNC_6 (struct device*,int *) ;
 struct fwnode_handle* FUNC_7 (char*) ;
 struct irq_domain* FUNC_8 (struct irq_domain*,int ,int,struct fwnode_handle*,int *,int *) ;
 int FUNC_9 (struct fwnode_handle*) ;
 int FUNC_10 (struct irq_domain*) ;
 struct irq_domain* FUNC_11 () ;
 int FUNC_12 (int *,TYPE_2__*) ;
 int FUNC_13 (int *,int *,int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int VAR_22 ;
 int FUNC_16 (int *) ;
 struct bridge_controller* FUNC_17 (struct pci_host_bridge*) ;
 int FUNC_18 (struct pci_host_bridge*) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (struct platform_device*,int ) ;

__attribute__((used)) static int FUNC_21(struct platform_device *VAR_23)
{
 struct xtalk_bridge_platform_data *VAR_24 = FUNC_4(&VAR_23->dev);
 struct device *VAR_25 = &VAR_23->dev;
 struct bridge_controller *VAR_26;
 struct pci_host_bridge *VAR_27;
 struct irq_domain *VAR_28, *VAR_29;
 struct fwnode_handle *VAR_30;
 int VAR_31;
 int VAR_32;

 VAR_29 = FUNC_11();
 if (!VAR_29)
  return -VAR_5;
 VAR_30 = FUNC_7("BRIDGE");
 if (!VAR_30)
  return -VAR_6;
 VAR_28 = FUNC_8(VAR_29, 0, 8, VAR_30,
          &VAR_19, ((void*)0));
 FUNC_9(VAR_30);
 if (!VAR_28)
  return -VAR_6;

 FUNC_19(VAR_9);

 VAR_27 = FUNC_5(VAR_25, sizeof(*VAR_26));
 if (!VAR_27) {
  VAR_32 = -VAR_6;
  goto err_remove_domain;
 }

 VAR_26 = FUNC_17(VAR_27);

 VAR_26->busn.name = "Bridge PCI busn";
 VAR_26->busn.start = 0;
 VAR_26->busn.end = 0xff;
 VAR_26->busn.flags = VAR_7;

 VAR_26->domain = VAR_28;

 FUNC_13(&VAR_27->windows, &VAR_24->mem, VAR_24->mem_offset);
 FUNC_13(&VAR_27->windows, &VAR_24->io, VAR_24->io_offset);
 FUNC_12(&VAR_27->windows, &VAR_26->busn);

 VAR_32 = FUNC_6(VAR_25, &VAR_27->windows);
 if (VAR_32 < 0)
  goto err_free_resource;

 VAR_26->nasid = VAR_24->nasid;

 VAR_26->baddr = (u64)VAR_24->masterwid << 60 | VAR_8;
 VAR_26->base = (struct bridge_regs *)VAR_24->bridge_addr;
 VAR_26->intr_addr = VAR_24->intr_addr;




 FUNC_3(VAR_26, VAR_14, VAR_4);




 FUNC_3(VAR_26, VAR_12, 0x0);




 FUNC_0(VAR_26, VAR_15,
     VAR_0 | VAR_1);



 FUNC_2(VAR_26, VAR_15, VAR_2);






 FUNC_3(VAR_26, VAR_17,
       ((VAR_26->intr_addr >> 32) & 0xffff) | (VAR_24->masterwid << 16));
 FUNC_3(VAR_26, VAR_16, VAR_26->intr_addr & 0xffffffff);
 FUNC_3(VAR_26, VAR_11, (VAR_24->masterwid << 20));
 FUNC_3(VAR_26, VAR_13, 0);

 for (VAR_31 = 0; VAR_31 < 8; VAR_31++) {
  FUNC_2(VAR_26, VAR_10[VAR_31].reg, VAR_3);
  VAR_26->pci_int[VAR_31] = -1;
 }
 FUNC_1(VAR_26, VAR_18);

 VAR_27->dev.parent = VAR_25;
 VAR_27->sysdata = VAR_26;
 VAR_27->busnr = 0;
 VAR_27->ops = &VAR_21;
 VAR_27->map_irq = VAR_20;
 VAR_27->swizzle_irq = VAR_22;

 VAR_32 = FUNC_18(VAR_27);
 if (VAR_32 < 0)
  goto err_free_resource;

 FUNC_15(VAR_27->bus);
 FUNC_14(VAR_27->bus);

 FUNC_20(VAR_23, VAR_27->bus);

 return 0;

err_free_resource:
 FUNC_16(&VAR_27->windows);
err_remove_domain:
 FUNC_10(VAR_28);
 return VAR_32;
}
