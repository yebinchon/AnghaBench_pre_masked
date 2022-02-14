
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int class; scalar_t__ dma_mask; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 struct pci_dev* VAR_3 ;

__attribute__((used)) static void FUNC_0(struct pci_dev *VAR_4)
{
 unsigned int VAR_5 = VAR_4->class >> 8;

 if (VAR_5 == VAR_2 || VAR_5 == VAR_1) {
  VAR_4->dma_mask = VAR_0 - 1;
  VAR_3 = VAR_4;
 }
}
