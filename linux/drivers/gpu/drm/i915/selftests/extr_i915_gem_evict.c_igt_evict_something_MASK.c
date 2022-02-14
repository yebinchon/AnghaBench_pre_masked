
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_ggtt {int vm; } ;
struct drm_i915_private {struct i915_ggtt ggtt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (struct drm_i915_private*,int *) ;
 int FUNC_2 (int *,int ,int ,int ,int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_3 (struct drm_i915_private*,int *) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (struct drm_i915_private*) ;

__attribute__((used)) static int FUNC_6(void *VAR_4)
{
 struct drm_i915_private *VAR_5 = VAR_4;
 struct i915_ggtt *VAR_6 = &VAR_5->ggtt;
 FUNC_0(VAR_3);
 int VAR_7;



 VAR_7 = FUNC_3(VAR_5, &VAR_3);
 if (VAR_7)
  goto cleanup;


 VAR_7 = FUNC_2(&VAR_6->vm,
           VAR_1, 0, 0,
           0, VAR_2,
           0);
 if (VAR_7 != -VAR_0) {
  FUNC_4("i915_gem_evict_something failed on a full GGTT with err=%d\n",
         VAR_7);
  goto cleanup;
 }

 FUNC_5(VAR_5);


 VAR_7 = FUNC_2(&VAR_6->vm,
           VAR_1, 0, 0,
           0, VAR_2,
           0);
 if (VAR_7) {
  FUNC_4("i915_gem_evict_something failed on a full GGTT with err=%d\n",
         VAR_7);
  goto cleanup;
 }

cleanup:
 FUNC_1(VAR_5, &VAR_3);
 return VAR_7;
}
