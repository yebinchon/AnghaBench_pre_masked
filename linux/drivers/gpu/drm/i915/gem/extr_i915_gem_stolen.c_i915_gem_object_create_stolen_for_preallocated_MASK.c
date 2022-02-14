
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct i915_vma {int vm_link; int flags; int pages; int node; } ;
struct TYPE_9__ {int mutex; int bound_list; } ;
struct i915_ggtt {TYPE_4__ vm; } ;
struct drm_mm_node {void* size; void* start; } ;
struct TYPE_7__ {int stolen_lock; int stolen; } ;
struct TYPE_6__ {int struct_mutex; } ;
struct drm_i915_private {TYPE_2__ mm; TYPE_1__ drm; struct i915_ggtt ggtt; } ;
struct TYPE_8__ {int pages; } ;
struct drm_i915_gem_object {int bind_count; TYPE_3__ mm; int cache_level; } ;
typedef void* resource_size_t ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (void*,int ) ;
 scalar_t__ FUNC_3 (struct i915_vma*) ;
 int FUNC_4 (struct i915_vma*) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct i915_vma*) ;
 struct drm_i915_gem_object* FUNC_7 (struct drm_i915_private*,struct drm_mm_node*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,struct drm_mm_node*) ;
 int FUNC_12 (TYPE_4__*,int *,void*,void*,int ,int ) ;
 int FUNC_13 (struct drm_i915_gem_object*) ;
 int FUNC_14 (struct drm_i915_gem_object*) ;
 int FUNC_15 (struct drm_i915_gem_object*) ;
 int FUNC_16 (struct drm_i915_gem_object*) ;
 int FUNC_17 (struct drm_i915_private*,struct drm_mm_node*) ;
 struct i915_vma* FUNC_18 (struct drm_i915_gem_object*,TYPE_4__*,int *) ;
 int FUNC_19 (struct drm_mm_node*) ;
 struct drm_mm_node* FUNC_20 (int,int ) ;
 int FUNC_21 (int *,int *) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *) ;

struct drm_i915_gem_object *
FUNC_25(struct drm_i915_private *VAR_5,
            resource_size_t VAR_6,
            resource_size_t VAR_7,
            resource_size_t VAR_8)
{
 struct i915_ggtt *VAR_9 = &VAR_5->ggtt;
 struct drm_i915_gem_object *VAR_10;
 struct drm_mm_node *VAR_11;
 struct i915_vma *VAR_12;
 int VAR_13;

 if (!FUNC_9(&VAR_5->mm.stolen))
  return ((void*)0);

 FUNC_22(&VAR_5->drm.struct_mutex);

 FUNC_0("creating preallocated stolen object: stolen_offset=%pa, gtt_offset=%pa, size=%pa\n",
    &VAR_6, &VAR_7, &VAR_8);


 if (FUNC_5(VAR_8 == 0) ||
     FUNC_5(!FUNC_2(VAR_8, VAR_3)) ||
     FUNC_5(!FUNC_2(VAR_6, VAR_1)))
  return ((void*)0);

 VAR_11 = FUNC_20(sizeof(*VAR_11), VAR_0);
 if (!VAR_11)
  return ((void*)0);

 VAR_11->start = VAR_6;
 VAR_11->size = VAR_8;
 FUNC_23(&VAR_5->mm.stolen_lock);
 VAR_13 = FUNC_11(&VAR_5->mm.stolen, VAR_11);
 FUNC_24(&VAR_5->mm.stolen_lock);
 if (VAR_13) {
  FUNC_0("failed to allocate stolen space\n");
  FUNC_19(VAR_11);
  return ((void*)0);
 }

 VAR_10 = FUNC_7(VAR_5, VAR_11);
 if (VAR_10 == ((void*)0)) {
  FUNC_0("failed to allocate stolen object\n");
  FUNC_17(VAR_5, VAR_11);
  FUNC_19(VAR_11);
  return ((void*)0);
 }


 if (VAR_7 == VAR_2)
  return VAR_10;

 VAR_13 = FUNC_14(VAR_10);
 if (VAR_13)
  goto err;

 VAR_12 = FUNC_18(VAR_10, &VAR_9->vm, ((void*)0));
 if (FUNC_3(VAR_12)) {
  VAR_13 = FUNC_4(VAR_12);
  goto err_pages;
 }






 VAR_13 = FUNC_12(&VAR_9->vm, &VAR_12->node,
       VAR_8, VAR_7, VAR_10->cache_level,
       0);
 if (VAR_13) {
  FUNC_0("failed to allocate stolen GTT space\n");
  goto err_pages;
 }

 FUNC_1(!FUNC_10(&VAR_12->node));

 VAR_12->pages = VAR_10->mm.pages;
 VAR_12->flags |= VAR_4;
 FUNC_6(VAR_12);

 FUNC_23(&VAR_9->vm.mutex);
 FUNC_21(&VAR_12->vm_link, &VAR_9->vm.bound_list);
 FUNC_24(&VAR_9->vm.mutex);

 FUNC_1(FUNC_13(VAR_10));
 FUNC_8(&VAR_10->bind_count);

 return VAR_10;

err_pages:
 FUNC_16(VAR_10);
err:
 FUNC_15(VAR_10);
 return ((void*)0);
}
