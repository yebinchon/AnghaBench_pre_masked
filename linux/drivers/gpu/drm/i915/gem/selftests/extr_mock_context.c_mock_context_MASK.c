
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_ppgtt {int vm; } ;
struct i915_gem_engines {int dummy; } ;
struct i915_gem_context {int engines; int name; int mutex; int hw_id_link; int handles_vma; int engines_mutex; struct drm_i915_private* i915; int link; int ref; } ;
struct drm_i915_private {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (struct i915_gem_engines*) ;
 int FUNC_3 (int ,struct i915_gem_engines*) ;
 int FUNC_4 (struct i915_gem_context*,int *) ;
 struct i915_gem_engines* FUNC_5 (struct i915_gem_context*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct i915_gem_context*) ;
 int FUNC_8 (struct i915_gem_context*) ;
 int FUNC_9 (struct i915_gem_context*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct i915_gem_context*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (char const*,int ) ;
 struct i915_gem_context* FUNC_14 (int,int ) ;
 struct i915_ppgtt* FUNC_15 (struct drm_i915_private*,char const*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int ) ;

struct i915_gem_context *
FUNC_18(struct drm_i915_private *VAR_1,
      const char *VAR_2)
{
 struct i915_gem_context *VAR_3;
 struct i915_gem_engines *VAR_4;
 int VAR_5;

 VAR_3 = FUNC_14(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 FUNC_12(&VAR_3->ref);
 FUNC_0(&VAR_3->link);
 VAR_3->i915 = VAR_1;

 FUNC_16(&VAR_3->engines_mutex);
 VAR_4 = FUNC_5(VAR_3);
 if (FUNC_2(VAR_4))
  goto err_free;
 FUNC_3(VAR_3->engines, VAR_4);

 FUNC_1(&VAR_3->handles_vma, VAR_0);
 FUNC_0(&VAR_3->hw_id_link);
 FUNC_16(&VAR_3->mutex);

 VAR_5 = FUNC_7(VAR_3);
 if (VAR_5 < 0)
  goto err_engines;

 if (VAR_2) {
  struct i915_ppgtt *VAR_6;

  VAR_3->name = FUNC_13(VAR_2, VAR_0);
  if (!VAR_3->name)
   goto err_put;

  VAR_6 = FUNC_15(VAR_1, VAR_2);
  if (!VAR_6)
   goto err_put;

  FUNC_4(VAR_3, &VAR_6->vm);
  FUNC_10(&VAR_6->vm);
 }

 return VAR_3;

err_engines:
 FUNC_6(FUNC_17(VAR_3->engines));
err_free:
 FUNC_11(VAR_3);
 return ((void*)0);

err_put:
 FUNC_9(VAR_3);
 FUNC_8(VAR_3);
 return ((void*)0);
}
