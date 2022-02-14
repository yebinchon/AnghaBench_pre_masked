
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct etnaviv_iommu_context {int mm; int mappings; int lock; int refcount; struct etnaviv_iommu_global* global; } ;
struct etnaviv_iommuv2_context {size_t id; struct etnaviv_iommu_context base; int mtlb_dma; int mtlb_cpu; } ;
struct TYPE_2__ {int pta_alloc; int * pta_cpu; } ;
struct etnaviv_iommu_global {TYPE_1__ v2; int dev; int lock; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (size_t,int ) ;
 int FUNC_2 (int ,scalar_t__,int *,int ) ;
 int FUNC_3 (int *,scalar_t__,scalar_t__) ;
 size_t FUNC_4 (int ,size_t) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (size_t,int ) ;
 int FUNC_11 (struct etnaviv_iommuv2_context*) ;
 struct etnaviv_iommuv2_context* FUNC_12 (int) ;

struct etnaviv_iommu_context *
FUNC_13(struct etnaviv_iommu_global *VAR_6)
{
 struct etnaviv_iommuv2_context *VAR_7;
 struct etnaviv_iommu_context *VAR_8;

 VAR_7 = FUNC_12(sizeof(*VAR_7));
 if (!VAR_7)
  return ((void*)0);

 FUNC_8(&VAR_6->lock);
 VAR_7->id = FUNC_4(VAR_6->v2.pta_alloc,
          VAR_0);
 if (VAR_7->id < VAR_0) {
  FUNC_10(VAR_7->id, VAR_6->v2.pta_alloc);
 } else {
  FUNC_9(&VAR_6->lock);
  goto out_free;
 }
 FUNC_9(&VAR_6->lock);

 VAR_7->mtlb_cpu = FUNC_2(VAR_6->dev, VAR_5,
         &VAR_7->mtlb_dma, VAR_1);
 if (!VAR_7->mtlb_cpu)
  goto out_free_id;

 FUNC_6(VAR_7->mtlb_cpu, VAR_3,
   VAR_2);

 VAR_6->v2.pta_cpu[VAR_7->id] = VAR_7->mtlb_dma;

 VAR_8 = &VAR_7->base;
 VAR_8->global = VAR_6;
 FUNC_5(&VAR_8->refcount);
 FUNC_7(&VAR_8->lock);
 FUNC_0(&VAR_8->mappings);
 FUNC_3(&VAR_8->mm, VAR_5, (u64)VAR_4 * 4 - VAR_5);

 return VAR_8;

out_free_id:
 FUNC_1(VAR_7->id, VAR_6->v2.pta_alloc);
out_free:
 FUNC_11(VAR_7);
 return ((void*)0);
}
