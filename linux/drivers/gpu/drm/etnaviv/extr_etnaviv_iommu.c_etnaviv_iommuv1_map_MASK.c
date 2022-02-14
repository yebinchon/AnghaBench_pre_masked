
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct etnaviv_iommuv1_context {int * pgtable_cpu; } ;
struct etnaviv_iommu_context {int dummy; } ;
typedef int phys_addr_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 struct etnaviv_iommuv1_context* FUNC_0 (struct etnaviv_iommu_context*) ;

__attribute__((used)) static int FUNC_1(struct etnaviv_iommu_context *VAR_3,
          unsigned long VAR_4, phys_addr_t VAR_5,
          size_t VAR_6, int VAR_7)
{
 struct etnaviv_iommuv1_context *VAR_8 = FUNC_0(VAR_3);
 unsigned int VAR_9 = (VAR_4 - VAR_1) / VAR_2;

 if (VAR_6 != VAR_2)
  return -VAR_0;

 VAR_8->pgtable_cpu[VAR_9] = VAR_5;

 return 0;
}
