
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ switch_power_state; } ;
struct drm_i915_private {TYPE_1__ drm; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(struct drm_i915_private *VAR_1)
{
 int VAR_2;

 if (VAR_1->drm.switch_power_state == VAR_0)
  return 0;

 VAR_2 = FUNC_1(&VAR_1->drm);
 if (VAR_2)
  return VAR_2;

 return FUNC_0(&VAR_1->drm);
}
