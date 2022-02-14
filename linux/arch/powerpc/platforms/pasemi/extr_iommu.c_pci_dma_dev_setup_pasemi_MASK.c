
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int coherent_dma_mask; int * dma_ops; } ;
struct pci_dev {int vendor; int device; TYPE_1__ dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (char*,struct pci_dev*,int ) ;
 int FUNC_4 (TYPE_1__*,int *) ;

__attribute__((used)) static void FUNC_5(struct pci_dev *VAR_2)
{
 FUNC_3("pci_dma_dev_setup, dev %p (%s)\n", VAR_2, FUNC_2(VAR_2));






 if (VAR_2->vendor == 0x1959 && VAR_2->device == 0xa007 &&
     !FUNC_1(VAR_0)) {
  VAR_2->dev.dma_ops = ((void*)0);




  VAR_2->dev.coherent_dma_mask = FUNC_0(44);
  return;
 }


 FUNC_4(&VAR_2->dev, &VAR_1);
}
