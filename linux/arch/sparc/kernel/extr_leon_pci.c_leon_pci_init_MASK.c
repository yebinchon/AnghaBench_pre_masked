
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct TYPE_4__ {int * parent; } ;
struct pci_host_bridge {struct pci_bus* bus; int map_irq; int swizzle_irq; int ops; scalar_t__ busnr; struct leon_pci_info* sysdata; TYPE_1__ dev; int windows; } ;
struct pci_bus {int dummy; } ;
struct TYPE_6__ {int flags; } ;
struct TYPE_5__ {scalar_t__ start; } ;
struct leon_pci_info {int map_irq; int ops; TYPE_3__ busn; TYPE_3__ mem_space; TYPE_2__ io_space; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,TYPE_3__*) ;
 int FUNC_3 (int *,TYPE_2__*,scalar_t__) ;
 struct pci_host_bridge* FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (struct pci_bus*) ;
 int VAR_1 ;
 int FUNC_7 (struct pci_host_bridge*) ;
 int FUNC_8 (struct pci_host_bridge*) ;
 int VAR_2 ;

void FUNC_9(struct platform_device *VAR_3, struct leon_pci_info *VAR_4)
{
 FUNC_0(VAR_2);
 struct pci_bus *VAR_5;
 struct pci_host_bridge *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_4(0);
 if (!VAR_6)
  return;

 FUNC_3(&VAR_2, &VAR_4->io_space,
    VAR_4->io_space.start - 0x1000);
 FUNC_2(&VAR_2, &VAR_4->mem_space);
 VAR_4->busn.flags = VAR_0;
 FUNC_2(&VAR_2, &VAR_4->busn);

 FUNC_1(&VAR_2, &VAR_6->windows);
 VAR_6->dev.parent = &VAR_3->dev;
 VAR_6->sysdata = VAR_4;
 VAR_6->busnr = 0;
 VAR_6->ops = VAR_4->ops;
 VAR_6->swizzle_irq = VAR_1;
 VAR_6->map_irq = VAR_4->map_irq;

 VAR_7 = FUNC_8(VAR_6);
 if (VAR_7) {
  FUNC_7(VAR_6);
  return;
 }

 VAR_5 = VAR_6->bus;


 FUNC_5();
 FUNC_6(VAR_5);
}
