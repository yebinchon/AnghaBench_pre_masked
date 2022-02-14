
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_group {void (* iommu_data_release ) (void*) ;void* iommu_data; } ;



void FUNC_0(struct iommu_group *VAR_0, void *VAR_1,
          void (*VAR_2)(void *VAR_3))
{
 VAR_0->iommu_data = VAR_1;
 VAR_0->iommu_data_release = VAR_2;
}
