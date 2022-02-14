
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_iotlb_gather {int dummy; } ;
struct io_pgtable_ops {int dummy; } ;
struct arm_v7s_io_pgtable {int pgd; } ;


 scalar_t__ FUNC_0 (int ) ;
 size_t FUNC_1 (struct arm_v7s_io_pgtable*,struct iommu_iotlb_gather*,unsigned long,size_t,int,int ) ;
 struct arm_v7s_io_pgtable* FUNC_2 (struct io_pgtable_ops*) ;
 int FUNC_3 (unsigned long) ;

__attribute__((used)) static size_t FUNC_4(struct io_pgtable_ops *VAR_0, unsigned long VAR_1,
       size_t VAR_2, struct iommu_iotlb_gather *VAR_3)
{
 struct arm_v7s_io_pgtable *VAR_4 = FUNC_2(VAR_0);

 if (FUNC_0(FUNC_3(VAR_1)))
  return 0;

 return FUNC_1(VAR_4, VAR_3, VAR_1, VAR_2, 1, VAR_4->pgd);
}
