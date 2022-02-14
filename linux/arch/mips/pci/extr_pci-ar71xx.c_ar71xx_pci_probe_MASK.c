
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct resource {int end; int start; } ;
struct platform_device {int dev; } ;
struct TYPE_6__ {TYPE_2__* io_resource; TYPE_1__* mem_resource; int * pci_ops; } ;
struct TYPE_5__ {char* name; void* flags; int end; int start; struct resource* parent; } ;
struct TYPE_4__ {char* name; void* flags; int end; int start; struct resource* parent; } ;
struct ar71xx_pci_controller {scalar_t__ irq; TYPE_3__ pci_ctrl; TYPE_2__ io_res; TYPE_1__ mem_res; int cfg_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ar71xx_pci_controller*,int) ;
 int FUNC_3 (struct ar71xx_pci_controller*) ;
 int FUNC_4 (struct ar71xx_pci_controller*,int ,int,int) ;
 int VAR_12 ;
 int FUNC_5 () ;
 int FUNC_6 (int *,struct resource*) ;
 struct ar71xx_pci_controller* FUNC_7 (int *,int,int ) ;
 scalar_t__ FUNC_8 (struct platform_device*,int ) ;
 struct resource* FUNC_9 (struct platform_device*,void*,char*) ;
 int FUNC_10 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_13)
{
 struct ar71xx_pci_controller *VAR_14;
 struct resource *VAR_15;
 u32 VAR_16;

 VAR_14 = FUNC_7(&VAR_13->dev, sizeof(struct ar71xx_pci_controller),
      VAR_2);
 if (!VAR_14)
  return -VAR_1;

 VAR_15 = FUNC_9(VAR_13, VAR_4, "cfg_base");
 VAR_14->cfg_base = FUNC_6(&VAR_13->dev, VAR_15);
 if (FUNC_0(VAR_14->cfg_base))
  return FUNC_1(VAR_14->cfg_base);

 VAR_14->irq = FUNC_8(VAR_13, 0);
 if (VAR_14->irq < 0)
  return -VAR_0;

 VAR_15 = FUNC_9(VAR_13, VAR_3, "io_base");
 if (!VAR_15)
  return -VAR_0;

 VAR_14->io_res.parent = VAR_15;
 VAR_14->io_res.name = "PCI IO space";
 VAR_14->io_res.start = VAR_15->start;
 VAR_14->io_res.end = VAR_15->end;
 VAR_14->io_res.flags = VAR_3;

 VAR_15 = FUNC_9(VAR_13, VAR_4, "mem_base");
 if (!VAR_15)
  return -VAR_0;

 VAR_14->mem_res.parent = VAR_15;
 VAR_14->mem_res.name = "PCI memory space";
 VAR_14->mem_res.start = VAR_15->start;
 VAR_14->mem_res.end = VAR_15->end;
 VAR_14->mem_res.flags = VAR_4;

 FUNC_5();


 VAR_16 = VAR_9 | VAR_8 | VAR_7
   | VAR_10 | VAR_11 | VAR_6;
 FUNC_4(VAR_14, VAR_5, 4, VAR_16);


 FUNC_2(VAR_14, 1);

 FUNC_3(VAR_14);

 VAR_14->pci_ctrl.pci_ops = &VAR_12;
 VAR_14->pci_ctrl.mem_resource = &VAR_14->mem_res;
 VAR_14->pci_ctrl.io_resource = &VAR_14->io_res;

 FUNC_10(&VAR_14->pci_ctrl);

 return 0;
}
