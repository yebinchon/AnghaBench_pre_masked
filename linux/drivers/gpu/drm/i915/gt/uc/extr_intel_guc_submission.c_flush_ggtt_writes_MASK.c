
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i915_vma {TYPE_1__* vm; } ;
struct drm_i915_private {int uncore; } ;
struct TYPE_2__ {struct drm_i915_private* i915; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct i915_vma*) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(struct i915_vma *VAR_1)
{
 struct drm_i915_private *VAR_2 = VAR_1->vm->i915;

 if (FUNC_0(VAR_1))
  FUNC_1(&VAR_2->uncore, VAR_0);
}
