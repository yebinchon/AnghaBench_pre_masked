
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct etnaviv_iommu_context {TYPE_2__* global; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {size_t (* dump_size ) (struct etnaviv_iommu_context*) ;} ;


 size_t FUNC_0 (struct etnaviv_iommu_context*) ;

size_t FUNC_1(struct etnaviv_iommu_context *VAR_0)
{
 return VAR_0->global->ops->dump_size(VAR_0);
}
