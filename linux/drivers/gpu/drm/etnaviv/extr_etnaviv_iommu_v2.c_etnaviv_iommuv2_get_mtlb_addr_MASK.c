
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct etnaviv_iommuv2_context {int mtlb_dma; } ;
struct etnaviv_iommu_context {int dummy; } ;


 struct etnaviv_iommuv2_context* FUNC_0 (struct etnaviv_iommu_context*) ;

u32 FUNC_1(struct etnaviv_iommu_context *VAR_0)
{
 struct etnaviv_iommuv2_context *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->mtlb_dma;
}
