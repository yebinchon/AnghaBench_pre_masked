
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct i915_vma {struct i915_address_space* vm; } ;
struct i915_execbuffer {struct i915_vma** vma; struct drm_i915_private* i915; } ;
struct i915_address_space {scalar_t__ has_read_only; } ;
struct TYPE_2__ {struct i915_address_space vm; } ;
struct drm_i915_private {TYPE_1__ ggtt; } ;
struct drm_i915_gem_object {int dummy; } ;


 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 struct i915_vma* FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct i915_vma* FUNC_3 (struct drm_i915_gem_object*,struct i915_address_space*,int *,int ,int ,int ) ;
 int FUNC_4 (struct drm_i915_gem_object*) ;

__attribute__((used)) static struct i915_vma *
FUNC_5(struct i915_execbuffer *VAR_3, struct drm_i915_gem_object *VAR_4)
{
 struct drm_i915_private *VAR_5 = VAR_3->i915;
 struct i915_vma * const VAR_6 = *VAR_3->vma;
 struct i915_address_space *VAR_7;
 u64 VAR_8;





 if (FUNC_0(VAR_5)) {
  VAR_8 = VAR_1;
  VAR_7 = &VAR_5->ggtt.vm;
 } else if (VAR_6->vm->has_read_only) {
  VAR_8 = VAR_2;
  VAR_7 = VAR_6->vm;
  FUNC_4(VAR_4);
 } else {
  FUNC_1("Cannot prevent post-scan tampering without RO capable vm\n");
  return FUNC_2(-VAR_0);
 }

 return FUNC_3(VAR_4, VAR_7, ((void*)0), 0, 0, VAR_8);
}
