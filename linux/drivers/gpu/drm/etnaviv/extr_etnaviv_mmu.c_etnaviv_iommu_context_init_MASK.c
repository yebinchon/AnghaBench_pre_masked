
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct etnaviv_iommu_global {scalar_t__ version; TYPE_1__* ops; int dev; int memory_base; } ;
struct TYPE_5__ {int iova; } ;
struct etnaviv_iommu_context {TYPE_2__ cmdbuf_mapping; } ;
struct etnaviv_cmdbuf_suballoc {int dummy; } ;
struct TYPE_4__ {int (* free ) (struct etnaviv_iommu_context*) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct etnaviv_cmdbuf_suballoc*,struct etnaviv_iommu_context*,TYPE_2__*,int ) ;
 int FUNC_2 (struct etnaviv_iommu_context*,TYPE_2__*) ;
 struct etnaviv_iommu_context* FUNC_3 (struct etnaviv_iommu_global*) ;
 struct etnaviv_iommu_context* FUNC_4 (struct etnaviv_iommu_global*) ;
 int FUNC_5 (struct etnaviv_iommu_context*) ;

struct etnaviv_iommu_context *
FUNC_6(struct etnaviv_iommu_global *VAR_1,
      struct etnaviv_cmdbuf_suballoc *VAR_2)
{
 struct etnaviv_iommu_context *VAR_3;
 int VAR_4;

 if (VAR_1->version == VAR_0)
  VAR_3 = FUNC_3(VAR_1);
 else
  VAR_3 = FUNC_4(VAR_1);

 if (!VAR_3)
  return ((void*)0);

 VAR_4 = FUNC_1(VAR_2, VAR_3, &VAR_3->cmdbuf_mapping,
       VAR_1->memory_base);
 if (VAR_4)
  goto out_free;

 if (VAR_1->version == VAR_0 &&
     VAR_3->cmdbuf_mapping.iova > 0x80000000) {
  FUNC_0(VAR_1->dev,
          "command buffer outside valid memory window\n");
  goto out_unmap;
 }

 return VAR_3;

out_unmap:
 FUNC_2(VAR_3, &VAR_3->cmdbuf_mapping);
out_free:
 VAR_1->ops->free(VAR_3);
 return ((void*)0);
}
