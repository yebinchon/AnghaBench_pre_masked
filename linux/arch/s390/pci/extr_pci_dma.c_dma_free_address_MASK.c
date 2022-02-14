
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zpci_dev {unsigned long start_dma; int iommu_bitmap_lock; int lazy_bitmap; int iommu_bitmap; } ;
struct device {int dummy; } ;
typedef unsigned long dma_addr_t ;


 unsigned long VAR_0 ;
 int FUNC_0 (int ,unsigned long,int) ;
 int FUNC_1 (int ,unsigned long,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct device*) ;
 struct zpci_dev* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct device *VAR_2, dma_addr_t VAR_3, int VAR_4)
{
 struct zpci_dev *VAR_5 = FUNC_5(FUNC_4(VAR_2));
 unsigned long VAR_6, VAR_7;

 VAR_7 = (VAR_3 - VAR_5->start_dma) >> VAR_0;

 FUNC_2(&VAR_5->iommu_bitmap_lock, VAR_6);
 if (!VAR_5->iommu_bitmap)
  goto out;

 if (VAR_1)
  FUNC_0(VAR_5->iommu_bitmap, VAR_7, VAR_4);
 else
  FUNC_1(VAR_5->lazy_bitmap, VAR_7, VAR_4);

out:
 FUNC_3(&VAR_5->iommu_bitmap_lock, VAR_6);
}
