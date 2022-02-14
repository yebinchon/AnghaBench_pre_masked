
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_ggtt {int vm; } ;
struct drm_mm_node {int size; int start; } ;
struct drm_i915_private {struct i915_ggtt ggtt; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct drm_i915_private*,int *) ;
 int FUNC_2 (int *,struct drm_mm_node*,int ) ;
 int VAR_1 ;
 int FUNC_3 (struct drm_i915_private*,int *) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (struct drm_i915_private*) ;

__attribute__((used)) static int FUNC_6(void *VAR_2)
{
 struct drm_i915_private *VAR_3 = VAR_2;
 struct i915_ggtt *VAR_4 = &VAR_3->ggtt;
 struct drm_mm_node VAR_5 = {
  .start = 0,
  .size = 4096,
 };
 FUNC_0(VAR_1);
 int VAR_6;



 VAR_6 = FUNC_3(VAR_3, &VAR_1);
 if (VAR_6)
  goto cleanup;


 VAR_6 = FUNC_2(&VAR_4->vm, &VAR_5, 0);
 if (VAR_6 != -VAR_0) {
  FUNC_4("i915_gem_evict_for_node on a full GGTT returned err=%d\n",
         VAR_6);
  goto cleanup;
 }

 FUNC_5(VAR_3);


 VAR_6 = FUNC_2(&VAR_4->vm, &VAR_5, 0);
 if (VAR_6) {
  FUNC_4("i915_gem_evict_for_node returned err=%d\n",
         VAR_6);
  goto cleanup;
 }

cleanup:
 FUNC_1(VAR_3, &VAR_1);
 return VAR_6;
}
