
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct i915_vma {int fence_size; TYPE_3__* vm; scalar_t__ fence; } ;
struct i915_ggtt_view {scalar_t__ type; } ;
struct i915_address_space {int dummy; } ;
struct TYPE_6__ {int mappable_end; } ;
struct drm_i915_private {TYPE_2__ ggtt; } ;
struct TYPE_5__ {int size; TYPE_4__* dev; } ;
struct drm_i915_gem_object {TYPE_1__ base; } ;
struct TYPE_8__ {int struct_mutex; } ;
struct TYPE_7__ {int mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct i915_vma* FUNC_0 (int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (struct i915_vma*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (scalar_t__,char*,int ,int,int,int ) ;
 int FUNC_3 (struct drm_i915_gem_object*) ;
 scalar_t__ FUNC_4 (struct drm_i915_gem_object*) ;
 int FUNC_5 (struct i915_vma*) ;
 struct i915_vma* FUNC_6 (struct drm_i915_gem_object*,struct i915_address_space*,struct i915_ggtt_view const*) ;
 scalar_t__ FUNC_7 (struct i915_vma*) ;
 int FUNC_8 (struct i915_vma*) ;
 scalar_t__ FUNC_9 (struct i915_vma*) ;
 scalar_t__ FUNC_10 (struct i915_vma*,int,int,int) ;
 int FUNC_11 (struct i915_vma*,int,int,int) ;
 int FUNC_12 (struct i915_vma*) ;
 int FUNC_13 (struct i915_vma*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 struct drm_i915_private* FUNC_17 (TYPE_4__*) ;

struct i915_vma *
FUNC_18(struct drm_i915_gem_object *VAR_6,
      struct i915_address_space *VAR_7,
      const struct i915_ggtt_view *VAR_8,
      u64 VAR_9,
      u64 VAR_10,
      u64 VAR_11)
{
 struct drm_i915_private *VAR_12 = FUNC_17(VAR_6->base.dev);
 struct i915_vma *VAR_13;
 int VAR_14;

 FUNC_14(&VAR_6->base.dev->struct_mutex);

 if (FUNC_4(VAR_6))
  return FUNC_0(-VAR_1);

 if (VAR_11 & VAR_4 &&
     (!VAR_8 || VAR_8->type == VAR_3)) {







  if (VAR_6->base.size > VAR_12->ggtt.mappable_end)
   return FUNC_0(-VAR_0);
  if (VAR_11 & VAR_5 &&
      VAR_6->base.size > VAR_12->ggtt.mappable_end / 2)
   return FUNC_0(-VAR_2);
 }

 VAR_13 = FUNC_6(VAR_6, VAR_7, VAR_8);
 if (FUNC_1(VAR_13))
  return VAR_13;

 if (FUNC_10(VAR_13, VAR_9, VAR_10, VAR_11)) {
  if (VAR_11 & VAR_5) {
   if (FUNC_9(VAR_13) || FUNC_7(VAR_13))
    return FUNC_0(-VAR_2);

   if (VAR_11 & VAR_4 &&
       VAR_13->fence_size > VAR_12->ggtt.mappable_end / 2)
    return FUNC_0(-VAR_2);
  }

  FUNC_2(FUNC_9(VAR_13),
       "bo is already pinned in ggtt with incorrect alignment:"
       " offset=%08x, req.alignment=%llx,"
       " req.map_and_fenceable=%d, vma->map_and_fenceable=%d\n",
       FUNC_5(VAR_13), VAR_10,
       !!(VAR_11 & VAR_4),
       FUNC_8(VAR_13));
  VAR_14 = FUNC_13(VAR_13);
  if (VAR_14)
   return FUNC_0(VAR_14);
 }

 if (VAR_13->fence && !FUNC_3(VAR_6)) {
  FUNC_15(&VAR_13->vm->mutex);
  VAR_14 = FUNC_12(VAR_13);
  FUNC_16(&VAR_13->vm->mutex);
  if (VAR_14)
   return FUNC_0(VAR_14);
 }

 VAR_14 = FUNC_11(VAR_13, VAR_9, VAR_10, VAR_11);
 if (VAR_14)
  return FUNC_0(VAR_14);

 return VAR_13;
}
