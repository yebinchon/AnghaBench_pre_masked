
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct ioatdma_device {int * dca; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ioatdma_device*) ;
 int FUNC_3 (struct pci_dev*) ;
 struct ioatdma_device* FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (int *,int *) ;

__attribute__((used)) static void FUNC_6(struct pci_dev *VAR_0)
{
 struct ioatdma_device *VAR_1 = FUNC_4(VAR_0);

 if (!VAR_1)
  return;

 FUNC_0(&VAR_0->dev, "Removing dma and dca services\n");
 if (VAR_1->dca) {
  FUNC_5(VAR_1->dca, &VAR_0->dev);
  FUNC_1(VAR_1->dca);
  VAR_1->dca = ((void*)0);
 }

 FUNC_3(VAR_0);
 FUNC_2(VAR_1);
}
