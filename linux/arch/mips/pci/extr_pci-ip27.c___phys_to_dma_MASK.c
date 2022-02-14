
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int bus; } ;
struct device {int dummy; } ;
struct bridge_controller {scalar_t__ baddr; } ;
typedef scalar_t__ phys_addr_t ;
typedef scalar_t__ dma_addr_t ;


 struct bridge_controller* FUNC_0 (int ) ;
 struct pci_dev* FUNC_1 (struct device*) ;

dma_addr_t FUNC_2(struct device *VAR_0, phys_addr_t VAR_1)
{
 struct pci_dev *VAR_2 = FUNC_1(VAR_0);
 struct bridge_controller *VAR_3 = FUNC_0(VAR_2->bus);

 return VAR_3->baddr + VAR_1;
}
