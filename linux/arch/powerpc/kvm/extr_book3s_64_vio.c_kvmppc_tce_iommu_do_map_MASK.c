
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_iommu_table_group_mem_t {int dummy; } ;
struct kvm {int mm; } ;
struct iommu_table {unsigned long long it_page_shift; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef int __be64 ;


 int VAR_0 ;
 long VAR_1 ;
 int * FUNC_0 (struct iommu_table*,unsigned long) ;
 scalar_t__ FUNC_1 (long) ;
 int FUNC_2 (unsigned long) ;
 long FUNC_3 (int ,struct iommu_table*,unsigned long,unsigned long*,int*) ;
 int FUNC_4 (struct kvm*,struct iommu_table*,unsigned long) ;
 struct mm_iommu_table_group_mem_t* FUNC_5 (int ,unsigned long,unsigned long long) ;
 int FUNC_6 (struct mm_iommu_table_group_mem_t*) ;
 scalar_t__ FUNC_7 (struct mm_iommu_table_group_mem_t*) ;
 long FUNC_8 (struct mm_iommu_table_group_mem_t*,unsigned long,unsigned long long,unsigned long*) ;

long FUNC_9(struct kvm *VAR_2, struct iommu_table *VAR_3,
  unsigned long VAR_4, unsigned long VAR_5,
  enum dma_data_direction VAR_6)
{
 long VAR_7;
 unsigned long VAR_8;
 __be64 *VAR_9 = FUNC_0(VAR_3, VAR_4);
 struct mm_iommu_table_group_mem_t *VAR_10;

 if (!VAR_9)

  return VAR_1;

 VAR_10 = FUNC_5(VAR_2->mm, VAR_5, 1ULL << VAR_3->it_page_shift);
 if (!VAR_10)

  return VAR_1;

 if (FUNC_1(FUNC_8(VAR_10, VAR_5, VAR_3->it_page_shift, &VAR_8)))
  return VAR_1;

 if (FUNC_7(VAR_10))
  return VAR_1;

 VAR_7 = FUNC_3(VAR_2->mm, VAR_3, VAR_4, &VAR_8, &VAR_6);
 if (FUNC_1(VAR_7)) {
  FUNC_6(VAR_10);
  return VAR_1;
 }

 if (VAR_6 != VAR_0)
  FUNC_4(VAR_2, VAR_3, VAR_4);

 *VAR_9 = FUNC_2(VAR_5);

 return 0;
}
