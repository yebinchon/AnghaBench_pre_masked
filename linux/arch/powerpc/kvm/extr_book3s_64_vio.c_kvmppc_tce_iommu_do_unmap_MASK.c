
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm {int mm; } ;
struct iommu_table {int dummy; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 int VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,struct iommu_table*,unsigned long,unsigned long*,int*) ;
 long FUNC_2 (struct kvm*,struct iommu_table*,unsigned long) ;

__attribute__((used)) static long FUNC_3(struct kvm *VAR_3,
  struct iommu_table *VAR_4, unsigned long VAR_5)
{
 enum dma_data_direction VAR_6 = VAR_0;
 unsigned long VAR_7 = 0;
 long VAR_8;

 if (FUNC_0(FUNC_1(VAR_3->mm, VAR_4, VAR_5, &VAR_7,
     &VAR_6)))
  return VAR_2;

 if (VAR_6 == VAR_0)
  return VAR_1;

 VAR_8 = FUNC_2(VAR_3, VAR_4, VAR_5);
 if (VAR_8 != VAR_1)
  FUNC_1(VAR_3->mm, VAR_4, VAR_5, &VAR_7, &VAR_6);

 return VAR_8;
}
