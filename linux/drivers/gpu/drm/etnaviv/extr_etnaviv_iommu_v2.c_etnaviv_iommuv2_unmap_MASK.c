
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct etnaviv_iommuv2_context {int ** stlb_cpu; } ;
struct etnaviv_iommu_context {int dummy; } ;


 size_t VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 size_t VAR_6 ;
 struct etnaviv_iommuv2_context* FUNC_0 (struct etnaviv_iommu_context*) ;

__attribute__((used)) static size_t FUNC_1(struct etnaviv_iommu_context *VAR_7,
        unsigned long VAR_8, size_t VAR_9)
{
 struct etnaviv_iommuv2_context *VAR_10 = FUNC_0(VAR_7);
 int VAR_11, VAR_12;

 if (VAR_9 != VAR_6)
  return -VAR_0;

 VAR_11 = (VAR_8 & VAR_1) >> VAR_2;
 VAR_12 = (VAR_8 & VAR_4) >> VAR_5;

 VAR_10->stlb_cpu[VAR_11][VAR_12] = VAR_3;

 return VAR_6;
}
