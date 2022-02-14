
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct etnaviv_iommuv2_context {int* mtlb_cpu; } ;
struct etnaviv_iommu_context {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 struct etnaviv_iommuv2_context* FUNC_0 (struct etnaviv_iommu_context*) ;

__attribute__((used)) static size_t FUNC_1(struct etnaviv_iommu_context *VAR_3)
{
 struct etnaviv_iommuv2_context *VAR_4 = FUNC_0(VAR_3);
 size_t VAR_5 = VAR_2;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
  if (VAR_4->mtlb_cpu[VAR_6] & VAR_1)
   VAR_5 += VAR_2;

 return VAR_5;
}
