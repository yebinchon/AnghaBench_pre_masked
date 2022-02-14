
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct drm_mm_node {scalar_t__ start; } ;
struct etnaviv_vram_mapping {int use; int mmu_node; scalar_t__ iova; struct drm_mm_node vram_node; } ;
struct etnaviv_iommu_context {int lock; int mappings; int flush_seq; TYPE_1__* global; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_2__ {scalar_t__ version; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_mm_node*) ;
 int FUNC_1 (struct etnaviv_iommu_context*,scalar_t__,scalar_t__,size_t,int ) ;
 int FUNC_2 (struct etnaviv_iommu_context*,struct drm_mm_node*,size_t) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct etnaviv_iommu_context *VAR_2,
      struct etnaviv_vram_mapping *VAR_3,
      u32 VAR_4, dma_addr_t VAR_5,
      size_t VAR_6)
{
 FUNC_4(&VAR_2->lock);

 if (VAR_3->use > 0) {
  VAR_3->use++;
  FUNC_5(&VAR_2->lock);
  return 0;
 }







 if (VAR_2->global->version == VAR_0) {
  VAR_3->iova = VAR_5 - VAR_4;
 } else {
  struct drm_mm_node *VAR_7 = &VAR_3->vram_node;
  int VAR_8;

  VAR_8 = FUNC_2(VAR_2, VAR_7, VAR_6);
  if (VAR_8 < 0) {
   FUNC_5(&VAR_2->lock);
   return VAR_8;
  }

  VAR_3->iova = VAR_7->start;
  VAR_8 = FUNC_1(VAR_2, VAR_7->start, VAR_5, VAR_6,
       VAR_1);
  if (VAR_8 < 0) {
   FUNC_0(VAR_7);
   FUNC_5(&VAR_2->lock);
   return VAR_8;
  }

  VAR_2->flush_seq++;
 }

 FUNC_3(&VAR_3->mmu_node, &VAR_2->mappings);
 VAR_3->use = 1;

 FUNC_5(&VAR_2->lock);

 return 0;
}
