
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct zpci_dev {int iommu_size; int iommu_pages; int * dma_table; int * lazy_bitmap; int * iommu_bitmap; scalar_t__ end_dma; scalar_t__ start_dma; int dma_table_lock; int iommu_bitmap_lock; int s390_domain; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 int * FUNC_2 () ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int ,scalar_t__,scalar_t__) ;
 int VAR_4 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 void* FUNC_7 (int) ;
 int FUNC_8 (struct zpci_dev*,int ,scalar_t__,scalar_t__,int ) ;

int FUNC_9(struct zpci_dev *VAR_5)
{
 int VAR_6;






 FUNC_1(VAR_5->s390_domain);

 FUNC_5(&VAR_5->iommu_bitmap_lock);
 FUNC_5(&VAR_5->dma_table_lock);

 VAR_5->dma_table = FUNC_2();
 if (!VAR_5->dma_table) {
  VAR_6 = -VAR_0;
  goto out;
 }
 VAR_5->start_dma = FUNC_0(VAR_5->start_dma);
 VAR_5->iommu_size = FUNC_4((u64) VAR_3,
    VAR_2 - VAR_5->start_dma,
    VAR_5->end_dma - VAR_5->start_dma + 1);
 VAR_5->end_dma = VAR_5->start_dma + VAR_5->iommu_size - 1;
 VAR_5->iommu_pages = VAR_5->iommu_size >> VAR_1;
 VAR_5->iommu_bitmap = FUNC_7(VAR_5->iommu_pages / 8);
 if (!VAR_5->iommu_bitmap) {
  VAR_6 = -VAR_0;
  goto free_dma_table;
 }
 if (!VAR_4) {
  VAR_5->lazy_bitmap = FUNC_7(VAR_5->iommu_pages / 8);
  if (!VAR_5->lazy_bitmap) {
   VAR_6 = -VAR_0;
   goto free_bitmap;
  }

 }
 VAR_6 = FUNC_8(VAR_5, 0, VAR_5->start_dma, VAR_5->end_dma,
    (u64) VAR_5->dma_table);
 if (VAR_6)
  goto free_bitmap;

 return 0;
free_bitmap:
 FUNC_6(VAR_5->iommu_bitmap);
 VAR_5->iommu_bitmap = ((void*)0);
 FUNC_6(VAR_5->lazy_bitmap);
 VAR_5->lazy_bitmap = ((void*)0);
free_dma_table:
 FUNC_3(VAR_5->dma_table);
 VAR_5->dma_table = ((void*)0);
out:
 return VAR_6;
}
