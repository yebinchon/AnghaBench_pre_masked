
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_ggtt {int vm; } ;
struct drm_i915_private {struct i915_ggtt ggtt; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct drm_i915_private*,int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (struct drm_i915_private*,int *) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (struct drm_i915_private*) ;

__attribute__((used)) static int FUNC_6(void *VAR_1)
{
 struct drm_i915_private *VAR_2 = VAR_1;
 struct i915_ggtt *VAR_3 = &VAR_2->ggtt;
 FUNC_0(VAR_0);
 int VAR_4;



 VAR_4 = FUNC_3(VAR_2, &VAR_0);
 if (VAR_4)
  goto cleanup;


 VAR_4 = FUNC_2(&VAR_3->vm);
 if (VAR_4) {
  FUNC_4("i915_gem_evict_vm on a full GGTT returned err=%d]\n",
         VAR_4);
  goto cleanup;
 }

 FUNC_5(VAR_2);

 VAR_4 = FUNC_2(&VAR_3->vm);
 if (VAR_4) {
  FUNC_4("i915_gem_evict_vm on a full GGTT returned err=%d]\n",
         VAR_4);
  goto cleanup;
 }

cleanup:
 FUNC_1(VAR_2, &VAR_0);
 return VAR_4;
}
