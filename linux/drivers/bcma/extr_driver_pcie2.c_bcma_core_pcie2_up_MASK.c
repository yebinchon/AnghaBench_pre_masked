
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct bcma_drv_pcie2 {int reqsize; TYPE_1__* core; } ;
struct bcma_bus {struct pci_dev* host_pci; } ;
struct TYPE_2__ {struct bcma_bus* bus; } ;


 int FUNC_0 (struct bcma_bus*,char*,int) ;
 int FUNC_1 (struct pci_dev*,int ) ;

void FUNC_2(struct bcma_drv_pcie2 *VAR_0)
{
 struct bcma_bus *VAR_1 = VAR_0->core->bus;
 struct pci_dev *VAR_2 = VAR_1->host_pci;
 int VAR_3;

 VAR_3 = FUNC_1(VAR_2, VAR_0->reqsize);
 if (VAR_3)
  FUNC_0(VAR_1, "Error setting PCI_EXP_DEVCTL_READRQ: %d\n", VAR_3);
}
