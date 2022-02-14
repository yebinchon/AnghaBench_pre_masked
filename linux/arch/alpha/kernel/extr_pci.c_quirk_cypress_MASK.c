
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_iommu_arena {int dma_base; int size; } ;
struct pci_dev {int class; struct pci_controller* sysdata; TYPE_1__* resource; int devfn; } ;
struct pci_controller {struct pci_iommu_arena* sg_pci; } ;
struct TYPE_2__ {int start; int end; scalar_t__ flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_1(struct pci_dev *VAR_4)
{





 if (VAR_4->class >> 8 == VAR_1) {
  VAR_4->resource[2].start = VAR_4->resource[3].start = 0;
  VAR_4->resource[2].end = VAR_4->resource[3].end = 0;
  VAR_4->resource[2].flags = VAR_4->resource[3].flags = 0;
  if (FUNC_0(VAR_4->devfn) == 2) {
   VAR_4->resource[0].start = 0x170;
   VAR_4->resource[0].end = 0x177;
   VAR_4->resource[1].start = 0x376;
   VAR_4->resource[1].end = 0x376;
  }
 }







 if (VAR_4->class >> 8 == VAR_0) {
  if (VAR_2 + VAR_3 >= 0xfff00000UL)
   VAR_3 = 0xfff00000UL - VAR_2;
  else {
   struct pci_controller *VAR_5 = VAR_4->sysdata;
   struct pci_iommu_arena *VAR_6 = VAR_5->sg_pci;
   if (VAR_6 && VAR_6->dma_base + VAR_6->size >= 0xfff00000UL)
    VAR_6->size = 0xfff00000UL - VAR_6->dma_base;
  }
 }
}
