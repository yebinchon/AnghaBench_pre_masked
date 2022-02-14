
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zpci_dev {unsigned long start_dma; int iommu_pages; int iommu_bitmap; } ;
struct device {int dummy; } ;


 unsigned long FUNC_0 (scalar_t__,int ) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct device*) ;
 unsigned long FUNC_2 (int ,int ,unsigned long,int,unsigned long,unsigned long,int ) ;
 int FUNC_3 (struct device*) ;
 struct zpci_dev* FUNC_4 (int ) ;

__attribute__((used)) static unsigned long FUNC_5(struct device *VAR_2,
           unsigned long VAR_3, int VAR_4)
{
 struct zpci_dev *VAR_5 = FUNC_4(FUNC_3(VAR_2));
 unsigned long VAR_6;

 VAR_6 = FUNC_0(FUNC_1(VAR_2) + 1,
         VAR_1) >> VAR_0;
 return FUNC_2(VAR_5->iommu_bitmap, VAR_5->iommu_pages,
    VAR_3, VAR_4, VAR_5->start_dma >> VAR_0,
    VAR_6, 0);
}
