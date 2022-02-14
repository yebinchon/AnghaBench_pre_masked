
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct zpci_dev {int iommu_bitmap_lock; int iommu_pages; int lazy_bitmap; int iommu_bitmap; scalar_t__ fh; int tlb_refresh; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (size_t) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_3 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 scalar_t__ FUNC_5 (struct zpci_dev*) ;
 int FUNC_6 (int,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct zpci_dev *VAR_4, dma_addr_t VAR_5,
      size_t VAR_6, int VAR_7)
{
 unsigned long VAR_8;
 int VAR_9;
 if ((VAR_7 & VAR_2) == VAR_1) {
  if (!VAR_4->tlb_refresh)
   return 0;
 } else {
  if (!VAR_3)
   return 0;
 }

 VAR_9 = FUNC_6((u64) VAR_4->fh << 32, VAR_5,
     FUNC_0(VAR_6));
 if (VAR_9 == -VAR_0 && !VAR_3) {

  if (FUNC_5(VAR_4))
   goto out;

  FUNC_3(&VAR_4->iommu_bitmap_lock, VAR_8);
  FUNC_1(VAR_4->iommu_bitmap, VAR_4->iommu_bitmap,
         VAR_4->lazy_bitmap, VAR_4->iommu_pages);
  FUNC_2(VAR_4->lazy_bitmap, VAR_4->iommu_pages);
  FUNC_4(&VAR_4->iommu_bitmap_lock, VAR_8);
  VAR_9 = 0;
 }
out:
 return VAR_9;
}
