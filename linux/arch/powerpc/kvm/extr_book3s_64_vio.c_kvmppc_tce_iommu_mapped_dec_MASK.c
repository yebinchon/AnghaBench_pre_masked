
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_iommu_table_group_mem_t {int dummy; } ;
struct kvm {int mm; } ;
struct iommu_table {unsigned long long it_page_shift; } ;
typedef int __be64 ;


 long VAR_0 ;
 long VAR_1 ;
 int * FUNC_0 (struct iommu_table*,unsigned long) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct mm_iommu_table_group_mem_t* FUNC_3 (int ,int ,unsigned long const) ;
 int FUNC_4 (struct mm_iommu_table_group_mem_t*) ;

__attribute__((used)) static long FUNC_5(struct kvm *VAR_2,
  struct iommu_table *VAR_3, unsigned long VAR_4)
{
 struct mm_iommu_table_group_mem_t *VAR_5 = ((void*)0);
 const unsigned long VAR_6 = 1ULL << VAR_3->it_page_shift;
 __be64 *VAR_7 = FUNC_0(VAR_3, VAR_4);

 if (!VAR_7)
  return VAR_0;

 VAR_5 = FUNC_3(VAR_2->mm, FUNC_1(*VAR_7), VAR_6);
 if (!VAR_5)
  return VAR_1;

 FUNC_4(VAR_5);

 *VAR_7 = FUNC_2(0);

 return VAR_0;
}
