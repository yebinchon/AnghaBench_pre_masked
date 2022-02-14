
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int coherent_dma_mask; int * dma_mask; } ;
struct pci_dev {int devfn; int irq; TYPE_1__ dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_1(struct pci_dev *VAR_7)
{
 VAR_7->dev.dma_mask = &VAR_6;
 VAR_7->dev.coherent_dma_mask = FUNC_0(32);
 switch (VAR_7->devfn) {
 case 0x10:
  VAR_7->irq = VAR_0;
  break;
 case 0x11:
  VAR_7->irq = VAR_2;
  break;
 case 0x12:
  VAR_7->irq = VAR_3;
  break;
 case 0x13:
  VAR_7->irq = VAR_1;
  break;
 case 0x14:
  VAR_7->irq = VAR_4;
  break;
 case 0x15:
  VAR_7->irq = VAR_5;
  break;
 }
}
