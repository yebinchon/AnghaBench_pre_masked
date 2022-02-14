
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int regs; } ;
struct drm_i915_private {TYPE_1__ uncore; int gt; } ;


 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct drm_i915_private*) ;
 int FUNC_5 (struct drm_i915_private*) ;

__attribute__((used)) static void FUNC_6(struct drm_i915_private *VAR_0)
{
 if (FUNC_0(VAR_0))
  FUNC_5(VAR_0);

 FUNC_2(&VAR_0->gt);
 FUNC_1(VAR_0);

 if (FUNC_0(VAR_0))
  FUNC_4(VAR_0);

 FUNC_3(VAR_0->uncore.regs);
}
