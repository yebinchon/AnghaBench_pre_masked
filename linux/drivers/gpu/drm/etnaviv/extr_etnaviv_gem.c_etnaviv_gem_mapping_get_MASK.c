
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct page {int dummy; } ;
struct etnaviv_vram_mapping {int use; int obj_node; struct etnaviv_iommu_context* context; struct etnaviv_gem_object* object; int scan_node; } ;
struct etnaviv_iommu_context {TYPE_1__* global; int lock; } ;
struct etnaviv_gem_object {int lock; int vram_list; } ;
struct drm_gem_object {int dummy; } ;
struct TYPE_2__ {int memory_base; } ;


 int VAR_0 ;
 struct etnaviv_vram_mapping* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct page**) ;
 int FUNC_3 (struct page**) ;
 int FUNC_4 (struct drm_gem_object*) ;
 struct page** FUNC_5 (struct etnaviv_gem_object*) ;
 struct etnaviv_vram_mapping* FUNC_6 (struct etnaviv_gem_object*,struct etnaviv_iommu_context*) ;
 int FUNC_7 (struct etnaviv_iommu_context*) ;
 int FUNC_8 (struct etnaviv_iommu_context*) ;
 int FUNC_9 (struct etnaviv_iommu_context*,struct etnaviv_gem_object*,int ,struct etnaviv_vram_mapping*,int ) ;
 int FUNC_10 (struct etnaviv_vram_mapping*) ;
 struct etnaviv_vram_mapping* FUNC_11 (int,int ) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 struct etnaviv_gem_object* FUNC_16 (struct drm_gem_object*) ;

struct etnaviv_vram_mapping *FUNC_17(
 struct drm_gem_object *VAR_2, struct etnaviv_iommu_context *VAR_3,
 u64 VAR_4)
{
 struct etnaviv_gem_object *VAR_5 = FUNC_16(VAR_2);
 struct etnaviv_vram_mapping *VAR_6;
 struct page **VAR_7;
 int VAR_8 = 0;

 FUNC_14(&VAR_5->lock);
 VAR_6 = FUNC_6(VAR_5, VAR_3);
 if (VAR_6) {






  if (VAR_6->use == 0) {
   FUNC_14(&VAR_3->lock);
   if (VAR_6->context == VAR_3)
    VAR_6->use += 1;
   else
    VAR_6 = ((void*)0);
   FUNC_15(&VAR_3->lock);
   if (VAR_6)
    goto out;
  } else {
   VAR_6->use += 1;
   goto out;
  }
 }

 VAR_7 = FUNC_5(VAR_5);
 if (FUNC_2(VAR_7)) {
  VAR_8 = FUNC_3(VAR_7);
  goto out;
 }





 VAR_6 = FUNC_6(VAR_5, ((void*)0));
 if (!VAR_6) {
  VAR_6 = FUNC_11(sizeof(*VAR_6), VAR_1);
  if (!VAR_6) {
   VAR_8 = -VAR_0;
   goto out;
  }

  FUNC_1(&VAR_6->scan_node);
  VAR_6->object = VAR_5;
 } else {
  FUNC_13(&VAR_6->obj_node);
 }

 FUNC_7(VAR_3);
 VAR_6->context = VAR_3;
 VAR_6->use = 1;

 VAR_8 = FUNC_9(VAR_3, VAR_5,
        VAR_3->global->memory_base,
        VAR_6, VAR_4);
 if (VAR_8 < 0) {
  FUNC_8(VAR_3);
  FUNC_10(VAR_6);
 } else {
  FUNC_12(&VAR_6->obj_node, &VAR_5->vram_list);
 }

out:
 FUNC_15(&VAR_5->lock);

 if (VAR_8)
  return FUNC_0(VAR_8);


 FUNC_4(VAR_2);
 return VAR_6;
}
