
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int total; int (* clear_range ) (TYPE_1__*,int ,int ) ;int gt; struct drm_i915_private* i915; } ;
struct i915_ggtt {int (* invalidate ) (struct i915_ggtt*) ;TYPE_1__ vm; } ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;
 int FUNC_3 (struct i915_ggtt*) ;

__attribute__((used)) static void FUNC_4(struct i915_ggtt *VAR_0)
{
 struct drm_i915_private *VAR_1 = VAR_0->vm.i915;




 if (FUNC_0(VAR_1) < 6)
  return;

 FUNC_1(VAR_0->vm.gt);

 VAR_0->vm.clear_range(&VAR_0->vm, 0, VAR_0->vm.total);

 VAR_0->invalidate(VAR_0);
}
