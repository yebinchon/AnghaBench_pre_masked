
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_overlay {TYPE_1__* crtc; int i915; int old_vma; } ;
struct i915_vma {int dummy; } ;
struct TYPE_2__ {int pipe; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 struct i915_vma* FUNC_2 (int *) ;
 int FUNC_3 (struct i915_vma*) ;
 int FUNC_4 (struct i915_vma*) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6(struct intel_overlay *VAR_0)
{
 struct i915_vma *VAR_1;

 VAR_1 = FUNC_2(&VAR_0->old_vma);
 if (FUNC_1(!VAR_1))
  return;

 FUNC_5(VAR_0->i915,
     FUNC_0(VAR_0->crtc->pipe));

 FUNC_3(VAR_1);
 FUNC_4(VAR_1);
}
