
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct dw_dma_chip_pdata {int (* remove ) (struct dw_dma_chip*) ;struct dw_dma_chip* chip; } ;
struct dw_dma_chip {int dummy; } ;


 int FUNC_0 (int *,char*,int) ;
 struct dw_dma_chip_pdata* FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct dw_dma_chip*) ;

__attribute__((used)) static void FUNC_3(struct pci_dev *VAR_0)
{
 struct dw_dma_chip_pdata *VAR_1 = FUNC_1(VAR_0);
 struct dw_dma_chip *VAR_2 = VAR_1->chip;
 int VAR_3;

 VAR_3 = VAR_1->remove(VAR_2);
 if (VAR_3)
  FUNC_0(&VAR_0->dev, "can't remove device properly: %d\n", VAR_3);
}
