
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; scalar_t__ dma_mask; } ;


 scalar_t__ FUNC_0 (int const) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct pci_dev *VAR_0, int VAR_1)
{
 const int VAR_2 = VAR_1 ? 64 : 32;
 int VAR_3;
 if (VAR_0->dma_mask && VAR_0->dma_mask < FUNC_0(32))
  return 0;

 VAR_3 = FUNC_2(&VAR_0->dev, FUNC_0(VAR_2));
 if (VAR_3)
  FUNC_1(&VAR_0->dev, "DMA enable failed\n");
 return VAR_3;
}
