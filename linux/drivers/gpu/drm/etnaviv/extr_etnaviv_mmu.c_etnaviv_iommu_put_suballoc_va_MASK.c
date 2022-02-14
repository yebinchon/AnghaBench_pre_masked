
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_mm_node {int size; int start; } ;
struct etnaviv_vram_mapping {scalar_t__ use; struct drm_mm_node vram_node; } ;
struct etnaviv_iommu_context {int lock; TYPE_1__* global; } ;
struct TYPE_2__ {scalar_t__ version; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct drm_mm_node*) ;
 int FUNC_1 (struct etnaviv_iommu_context*,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct etnaviv_iommu_context *VAR_1,
    struct etnaviv_vram_mapping *VAR_2)
{
 struct drm_mm_node *VAR_3 = &VAR_2->vram_node;

 FUNC_2(&VAR_1->lock);
 VAR_2->use--;

 if (VAR_2->use > 0 || VAR_1->global->version == VAR_0) {
  FUNC_3(&VAR_1->lock);
  return;
 }

 FUNC_1(VAR_1, VAR_3->start, VAR_3->size);
 FUNC_0(VAR_3);
 FUNC_3(&VAR_1->lock);
}
