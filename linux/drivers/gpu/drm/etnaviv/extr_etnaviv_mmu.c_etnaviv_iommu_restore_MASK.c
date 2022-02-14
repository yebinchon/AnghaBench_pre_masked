
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct etnaviv_iommu_context {TYPE_2__* global; } ;
struct etnaviv_gpu {int dummy; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* restore ) (struct etnaviv_gpu*,struct etnaviv_iommu_context*) ;} ;


 int FUNC_0 (struct etnaviv_gpu*,struct etnaviv_iommu_context*) ;

void FUNC_1(struct etnaviv_gpu *VAR_0,
      struct etnaviv_iommu_context *VAR_1)
{
 VAR_1->global->ops->restore(VAR_0, VAR_1);
}
