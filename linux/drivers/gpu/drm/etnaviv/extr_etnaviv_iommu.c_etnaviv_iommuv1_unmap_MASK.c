
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct etnaviv_iommuv1_context {int * pgtable_cpu; } ;
struct etnaviv_iommu_context {TYPE_1__* global; } ;
struct TYPE_2__ {int bad_page_dma; } ;


 size_t VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 struct etnaviv_iommuv1_context* FUNC_0 (struct etnaviv_iommu_context*) ;

__attribute__((used)) static size_t FUNC_1(struct etnaviv_iommu_context *VAR_3,
 unsigned long VAR_4, size_t VAR_5)
{
 struct etnaviv_iommuv1_context *VAR_6 = FUNC_0(VAR_3);
 unsigned int VAR_7 = (VAR_4 - VAR_1) / VAR_2;

 if (VAR_5 != VAR_2)
  return -VAR_0;

 VAR_6->pgtable_cpu[VAR_7] = VAR_3->global->bad_page_dma;

 return VAR_2;
}
