
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sb1250_bus_dma_mask_exclude {int set; } ;
struct pci_dev {int bus; } ;


 int FUNC_0 (int ,int ,struct sb1250_bus_dma_mask_exclude*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct pci_dev *VAR_1)
{
 struct sb1250_bus_dma_mask_exclude VAR_2 = { .set = 0 };

 FUNC_0(VAR_1->bus, VAR_0, &VAR_2);
}
