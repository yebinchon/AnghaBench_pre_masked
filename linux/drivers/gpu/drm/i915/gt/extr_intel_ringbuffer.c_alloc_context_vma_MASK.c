
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_engine_cs {void* default_state; TYPE_2__* gt; int context_size; struct drm_i915_private* i915; } ;
typedef void i915_vma ;
struct drm_i915_private {int dummy; } ;
typedef void drm_i915_gem_object ;
struct TYPE_4__ {TYPE_1__* ggtt; } ;
struct TYPE_3__ {int vm; } ;


 void* FUNC_0 (void*) ;
 void* FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (void*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 int FUNC_4 (void*) ;
 void* FUNC_5 (struct drm_i915_private*,int ) ;
 int FUNC_6 (void*) ;
 void* FUNC_7 (void*,int ) ;
 int FUNC_8 (void*) ;
 int FUNC_9 (void*,int ) ;
 int FUNC_10 (void*) ;
 void* FUNC_11 (void*,int *,int *) ;
 int FUNC_12 (void*,void*,int ) ;

__attribute__((used)) static struct i915_vma *
FUNC_13(struct intel_engine_cs *VAR_2)
{
 struct drm_i915_private *VAR_3 = VAR_2->i915;
 struct drm_i915_gem_object *VAR_4;
 struct i915_vma *VAR_5;
 int VAR_6;

 VAR_4 = FUNC_5(VAR_3, VAR_2->context_size);
 if (FUNC_2(VAR_4))
  return FUNC_0(VAR_4);
 if (FUNC_3(VAR_3))
  FUNC_9(VAR_4, VAR_0);

 if (VAR_2->default_state) {
  void *VAR_7, *VAR_8;

  VAR_8 = FUNC_7(VAR_4, VAR_1);
  if (FUNC_2(VAR_8)) {
   VAR_6 = FUNC_4(VAR_8);
   goto err_obj;
  }

  VAR_7 = FUNC_7(VAR_2->default_state,
         VAR_1);
  if (FUNC_2(VAR_7)) {
   VAR_6 = FUNC_4(VAR_7);
   goto err_map;
  }

  FUNC_12(VAR_8, VAR_7, VAR_2->context_size);
  FUNC_10(VAR_2->default_state);

  FUNC_6(VAR_4);
  FUNC_10(VAR_4);
 }

 VAR_5 = FUNC_11(VAR_4, &VAR_2->gt->ggtt->vm, ((void*)0));
 if (FUNC_2(VAR_5)) {
  VAR_6 = FUNC_4(VAR_5);
  goto err_obj;
 }

 return VAR_5;

err_map:
 FUNC_10(VAR_4);
err_obj:
 FUNC_8(VAR_4);
 return FUNC_1(VAR_6);
}
