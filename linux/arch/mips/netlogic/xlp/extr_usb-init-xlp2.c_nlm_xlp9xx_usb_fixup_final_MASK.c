
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int coherent_dma_mask; int * dma_mask; } ;
struct pci_dev {int devfn; void* irq; TYPE_1__ dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_1 (int,int ) ;
 int FUNC_2 (struct pci_dev*) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_3(struct pci_dev *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_2(VAR_4);
 VAR_4->dev.dma_mask = &VAR_3;
 VAR_4->dev.coherent_dma_mask = FUNC_0(32);
 switch (VAR_4->devfn) {
 case 0x21:
  VAR_4->irq = FUNC_1(VAR_5, VAR_0);
  break;
 case 0x22:
  VAR_4->irq = FUNC_1(VAR_5, VAR_1);
  break;
 case 0x23:
  VAR_4->irq = FUNC_1(VAR_5, VAR_2);
  break;
 }
}
