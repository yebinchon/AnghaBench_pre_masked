
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct i915_vma {int dummy; } ;
struct TYPE_3__ {int * color_adjust; } ;
struct TYPE_4__ {TYPE_1__ mm; } ;
struct i915_ggtt {TYPE_2__ vm; } ;
struct drm_mm_node {int start; int size; int color; } ;
struct drm_i915_private {struct i915_ggtt ggtt; } ;
typedef struct i915_vma drm_i915_gem_object ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct i915_vma*) ;
 int FUNC_1 (int ) ;
 unsigned long VAR_4 ;
 int FUNC_2 (struct i915_vma*) ;
 int FUNC_3 (struct drm_i915_private*,int *) ;
 int FUNC_4 (TYPE_2__*,struct drm_mm_node*,int ) ;
 struct i915_vma* FUNC_5 (struct drm_i915_private*,int) ;
 struct i915_vma* FUNC_6 (struct i915_vma*,int *,int ,int ,int) ;
 int FUNC_7 (struct i915_vma*,int ) ;
 int FUNC_8 (struct i915_vma*) ;
 int * VAR_5 ;
 int VAR_6 ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (struct i915_vma*,int *) ;
 int FUNC_11 (struct drm_i915_private*) ;

__attribute__((used)) static int FUNC_12(void *VAR_7)
{
 struct drm_i915_private *VAR_8 = VAR_7;
 struct i915_ggtt *VAR_9 = &VAR_8->ggtt;
 const unsigned long VAR_10 = VAR_4;
 struct drm_mm_node VAR_11 = {
  .start = VAR_3 * 2,
  .size = VAR_3,
  .color = VAR_2,
 };
 struct drm_i915_gem_object *VAR_12;
 struct i915_vma *VAR_13;
 FUNC_1(VAR_6);
 int VAR_14;






 VAR_9->vm.mm.color_adjust = VAR_5;

 VAR_12 = FUNC_5(VAR_8, VAR_3);
 if (FUNC_0(VAR_12)) {
  VAR_14 = FUNC_2(VAR_12);
  goto cleanup;
 }
 FUNC_7(VAR_12, VAR_2);
 FUNC_10(VAR_12, &VAR_6);

 VAR_13 = FUNC_6(VAR_12, ((void*)0), 0, 0,
           VAR_3 | VAR_10);
 if (FUNC_0(VAR_13)) {
  FUNC_9("[0]i915_gem_object_ggtt_pin failed\n");
  VAR_14 = FUNC_2(VAR_13);
  goto cleanup;
 }

 VAR_12 = FUNC_5(VAR_8, VAR_3);
 if (FUNC_0(VAR_12)) {
  VAR_14 = FUNC_2(VAR_12);
  goto cleanup;
 }
 FUNC_7(VAR_12, VAR_2);
 FUNC_10(VAR_12, &VAR_6);


 VAR_13 = FUNC_6(VAR_12, ((void*)0), 0, 0,
           (VAR_3 * 2) | VAR_10);
 if (FUNC_0(VAR_13)) {
  FUNC_9("[1]i915_gem_object_ggtt_pin failed\n");
  VAR_14 = FUNC_2(VAR_13);
  goto cleanup;
 }

 FUNC_8(VAR_13);


 VAR_14 = FUNC_4(&VAR_9->vm, &VAR_11, 0);
 if (VAR_14) {
  FUNC_9("[0]i915_gem_evict_for_node returned err=%d\n", VAR_14);
  goto cleanup;
 }




 VAR_11.color = VAR_1;

 VAR_14 = FUNC_4(&VAR_9->vm, &VAR_11, 0);
 if (!VAR_14) {
  FUNC_9("[1]i915_gem_evict_for_node returned err=%d\n", VAR_14);
  VAR_14 = -VAR_0;
  goto cleanup;
 }

 VAR_14 = 0;

cleanup:
 FUNC_11(VAR_8);
 FUNC_3(VAR_8, &VAR_6);
 VAR_9->vm.mm.color_adjust = ((void*)0);
 return VAR_14;
}
