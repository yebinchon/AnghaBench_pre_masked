
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct sg_table {int nents; int sgl; } ;
struct drm_mm_node {int start; } ;
struct etnaviv_vram_mapping {int iova; int mmu_node; struct drm_mm_node vram_node; } ;
struct etnaviv_iommu_context {int lock; int flush_seq; int mappings; TYPE_1__* global; } ;
struct TYPE_4__ {int size; } ;
struct etnaviv_gem_object {int flags; TYPE_2__ base; int lock; struct sg_table* sgt; } ;
struct TYPE_3__ {scalar_t__ version; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct drm_mm_node*) ;
 int FUNC_1 (struct etnaviv_iommu_context*,struct drm_mm_node*,int ) ;
 int FUNC_2 (struct etnaviv_iommu_context*,struct drm_mm_node*,int ,int ) ;
 int FUNC_3 (struct etnaviv_iommu_context*,int,struct sg_table*,int ,int) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

int FUNC_10(struct etnaviv_iommu_context *VAR_4,
 struct etnaviv_gem_object *VAR_5, u32 VAR_6,
 struct etnaviv_vram_mapping *VAR_7, u64 VAR_8)
{
 struct sg_table *VAR_9 = VAR_5->sgt;
 struct drm_mm_node *VAR_10;
 int VAR_11;

 FUNC_5(&VAR_5->lock);

 FUNC_6(&VAR_4->lock);


 if (VAR_4->global->version == VAR_0 &&
     VAR_9->nents == 1 && !(VAR_5->flags & VAR_3)) {
  u32 VAR_12;

  VAR_12 = FUNC_8(VAR_9->sgl) - VAR_6;
  if (VAR_12 < 0x80000000 - FUNC_9(VAR_9->sgl)) {
   VAR_7->iova = VAR_12;
   FUNC_4(&VAR_7->mmu_node, &VAR_4->mappings);
   VAR_11 = 0;
   goto unlock;
  }
 }

 VAR_10 = &VAR_7->vram_node;

 if (VAR_8)
  VAR_11 = FUNC_2(VAR_4, VAR_10,
       VAR_5->base.size, VAR_8);
 else
  VAR_11 = FUNC_1(VAR_4, VAR_10,
           VAR_5->base.size);
 if (VAR_11 < 0)
  goto unlock;

 VAR_7->iova = VAR_10->start;
 VAR_11 = FUNC_3(VAR_4, VAR_10->start, VAR_9, VAR_5->base.size,
    VAR_1 | VAR_2);

 if (VAR_11 < 0) {
  FUNC_0(VAR_10);
  goto unlock;
 }

 FUNC_4(&VAR_7->mmu_node, &VAR_4->mappings);
 VAR_4->flush_seq++;
unlock:
 FUNC_7(&VAR_4->lock);

 return VAR_11;
}
