
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zpci_dev {scalar_t__ next_bit; int * lazy_bitmap; int * iommu_bitmap; int * dma_table; int s390_domain; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct zpci_dev*,int ) ;

void FUNC_4(struct zpci_dev *VAR_0)
{





 FUNC_0(VAR_0->s390_domain);

 if (FUNC_3(VAR_0, 0))
  return;

 FUNC_1(VAR_0->dma_table);
 VAR_0->dma_table = ((void*)0);
 FUNC_2(VAR_0->iommu_bitmap);
 VAR_0->iommu_bitmap = ((void*)0);
 FUNC_2(VAR_0->lazy_bitmap);
 VAR_0->lazy_bitmap = ((void*)0);

 VAR_0->next_bit = 0;
}
