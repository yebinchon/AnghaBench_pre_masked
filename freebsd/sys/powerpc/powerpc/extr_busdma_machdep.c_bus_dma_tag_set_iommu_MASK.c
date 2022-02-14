
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int device_t ;
typedef TYPE_1__* bus_dma_tag_t ;
struct TYPE_3__ {void* iommu_cookie; int iommu; } ;



int
FUNC_0(bus_dma_tag_t VAR_0, device_t VAR_1, void *VAR_2)
{
 VAR_0->iommu = VAR_1;
 VAR_0->iommu_cookie = VAR_2;

 return (0);
}
