
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct resource {int end; int start; } ;
struct platform_device {int id; int dev; } ;
struct TYPE_6__ {TYPE_2__* mem_resource; TYPE_1__* io_resource; int * pci_ops; } ;
struct TYPE_5__ {char* name; void* flags; int end; int start; struct resource* parent; } ;
struct TYPE_4__ {char* name; void* flags; int end; int start; struct resource* parent; } ;
struct ar724x_pci_controller {scalar_t__ irq; TYPE_3__ pci_controller; int link_up; TYPE_2__ mem_res; TYPE_1__ io_res; void* crp_base; void* devcfg_base; void* ctrl_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 scalar_t__ FUNC_0 (void*) ;
 int VAR_8 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (struct ar724x_pci_controller*) ;
 int FUNC_3 (struct ar724x_pci_controller*) ;
 int FUNC_4 (struct ar724x_pci_controller*,int) ;
 int FUNC_5 (struct ar724x_pci_controller*,int ,int,int ) ;
 int VAR_9 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,char*) ;
 void* FUNC_8 (int *,struct resource*) ;
 struct ar724x_pci_controller* FUNC_9 (int *,int,int ) ;
 scalar_t__ FUNC_10 (struct platform_device*,int ) ;
 struct resource* FUNC_11 (struct platform_device*,void*,char*) ;
 int FUNC_12 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_10)
{
 struct ar724x_pci_controller *VAR_11;
 struct resource *VAR_12;
 int VAR_13;

 VAR_13 = VAR_10->id;
 if (VAR_13 == -1)
  VAR_13 = 0;

 VAR_11 = FUNC_9(&VAR_10->dev, sizeof(struct ar724x_pci_controller),
       VAR_5);
 if (!VAR_11)
  return -VAR_4;

 VAR_12 = FUNC_11(VAR_10, VAR_7, "ctrl_base");
 VAR_11->ctrl_base = FUNC_8(&VAR_10->dev, VAR_12);
 if (FUNC_0(VAR_11->ctrl_base))
  return FUNC_1(VAR_11->ctrl_base);

 VAR_12 = FUNC_11(VAR_10, VAR_7, "cfg_base");
 VAR_11->devcfg_base = FUNC_8(&VAR_10->dev, VAR_12);
 if (FUNC_0(VAR_11->devcfg_base))
  return FUNC_1(VAR_11->devcfg_base);

 VAR_12 = FUNC_11(VAR_10, VAR_7, "crp_base");
 VAR_11->crp_base = FUNC_8(&VAR_10->dev, VAR_12);
 if (FUNC_0(VAR_11->crp_base))
  return FUNC_1(VAR_11->crp_base);

 VAR_11->irq = FUNC_10(VAR_10, 0);
 if (VAR_11->irq < 0)
  return -VAR_3;

 VAR_12 = FUNC_11(VAR_10, VAR_6, "io_base");
 if (!VAR_12)
  return -VAR_3;

 VAR_11->io_res.parent = VAR_12;
 VAR_11->io_res.name = "PCI IO space";
 VAR_11->io_res.start = VAR_12->start;
 VAR_11->io_res.end = VAR_12->end;
 VAR_11->io_res.flags = VAR_6;

 VAR_12 = FUNC_11(VAR_10, VAR_7, "mem_base");
 if (!VAR_12)
  return -VAR_3;

 VAR_11->mem_res.parent = VAR_12;
 VAR_11->mem_res.name = "PCI memory space";
 VAR_11->mem_res.start = VAR_12->start;
 VAR_11->mem_res.end = VAR_12->end;
 VAR_11->mem_res.flags = VAR_7;

 VAR_11->pci_controller.pci_ops = &VAR_9;
 VAR_11->pci_controller.io_resource = &VAR_11->io_res;
 VAR_11->pci_controller.mem_resource = &VAR_11->mem_res;





 if (FUNC_6(VAR_2) & VAR_1)
  FUNC_3(VAR_11);

 VAR_11->link_up = FUNC_2(VAR_11);
 if (!VAR_11->link_up)
  FUNC_7(&VAR_10->dev, "PCIe link is down\n");

 FUNC_4(VAR_11, VAR_13);

 FUNC_5(VAR_11, VAR_8, 4, VAR_0);

 FUNC_12(&VAR_11->pci_controller);

 return 0;
}
