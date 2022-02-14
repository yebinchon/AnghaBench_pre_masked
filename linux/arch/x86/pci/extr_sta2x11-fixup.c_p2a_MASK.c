
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sta2x11_mapping {scalar_t__ amba_base; } ;
struct pci_dev {int dummy; } ;
typedef scalar_t__ dma_addr_t ;


 struct sta2x11_mapping* FUNC_0 (struct pci_dev*) ;

__attribute__((used)) static dma_addr_t FUNC_1(dma_addr_t VAR_0, struct pci_dev *VAR_1)
{
 struct sta2x11_mapping *VAR_2;
 dma_addr_t VAR_3;

 VAR_2 = FUNC_0(VAR_1);
 VAR_3 = VAR_0 + VAR_2->amba_base;
 return VAR_3;
}
