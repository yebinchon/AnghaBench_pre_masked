
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_vma {int dummy; } ;
struct drm_i915_private {int dummy; } ;
typedef struct i915_vma drm_i915_gem_object ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct i915_vma*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct i915_vma*) ;
 int FUNC_3 (struct drm_i915_private*,int *) ;
 struct i915_vma* FUNC_4 (struct drm_i915_private*,int ) ;
 struct i915_vma* FUNC_5 (struct i915_vma*,int *,int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_6 (struct drm_i915_private*,int *) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (struct i915_vma*,int *) ;

__attribute__((used)) static int FUNC_9(void *VAR_4)
{
 struct drm_i915_private *VAR_5 = VAR_4;
 struct drm_i915_gem_object *VAR_6;
 struct i915_vma *VAR_7;
 FUNC_1(VAR_3);
 int VAR_8;





 VAR_8 = FUNC_6(VAR_5, &VAR_3);
 if (VAR_8)
  goto cleanup;

 VAR_6 = FUNC_4(VAR_5, VAR_2);
 if (FUNC_0(VAR_6)) {
  VAR_8 = FUNC_2(VAR_6);
  goto cleanup;
 }

 FUNC_8(VAR_6, &VAR_3);

 VAR_7 = FUNC_5(VAR_6, ((void*)0), 0, 0, 0);
 if (!FUNC_0(VAR_7) || FUNC_2(VAR_7) != -VAR_1) {
  FUNC_7("Failed to evict+insert, i915_gem_object_ggtt_pin returned err=%d\n", (int)FUNC_2(VAR_7));
  VAR_8 = -VAR_0;
  goto cleanup;
 }

cleanup:
 FUNC_3(VAR_5, &VAR_3);
 return VAR_8;
}
