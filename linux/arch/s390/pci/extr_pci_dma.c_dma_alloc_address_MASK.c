
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zpci_dev {unsigned long next_bit; int iommu_bitmap_lock; scalar_t__ start_dma; int iommu_pages; int lazy_bitmap; int iommu_bitmap; } ;
struct device {int dummy; } ;
typedef scalar_t__ dma_addr_t ;


 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_0 (struct device*,unsigned long,int) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_2 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct device*) ;
 struct zpci_dev* FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (struct zpci_dev*) ;

__attribute__((used)) static dma_addr_t FUNC_8(struct device *VAR_3, int VAR_4)
{
 struct zpci_dev *VAR_5 = FUNC_6(FUNC_5(VAR_3));
 unsigned long VAR_6, VAR_7;

 FUNC_3(&VAR_5->iommu_bitmap_lock, VAR_7);
 VAR_6 = FUNC_0(VAR_3, VAR_5->next_bit, VAR_4);
 if (VAR_6 == -1) {
  if (!VAR_2) {

   if (FUNC_7(VAR_5))
    goto out_error;

   FUNC_1(VAR_5->iommu_bitmap, VAR_5->iommu_bitmap,
          VAR_5->lazy_bitmap, VAR_5->iommu_pages);
   FUNC_2(VAR_5->lazy_bitmap, VAR_5->iommu_pages);
  }

  VAR_6 = FUNC_0(VAR_3, 0, VAR_4);
  if (VAR_6 == -1)
   goto out_error;
 }
 VAR_5->next_bit = VAR_6 + VAR_4;
 FUNC_4(&VAR_5->iommu_bitmap_lock, VAR_7);

 return VAR_5->start_dma + VAR_6 * VAR_1;

out_error:
 FUNC_4(&VAR_5->iommu_bitmap_lock, VAR_7);
 return VAR_0;
}
