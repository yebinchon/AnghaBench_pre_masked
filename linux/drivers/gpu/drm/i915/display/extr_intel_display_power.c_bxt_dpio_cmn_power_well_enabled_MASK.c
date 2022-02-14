
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct i915_power_well {TYPE_2__* desc; } ;
struct drm_i915_private {int dummy; } ;
struct TYPE_3__ {int phy; } ;
struct TYPE_4__ {TYPE_1__ bxt; } ;


 int FUNC_0 (struct drm_i915_private*,int ) ;

__attribute__((used)) static bool FUNC_1(struct drm_i915_private *VAR_0,
         struct i915_power_well *VAR_1)
{
 return FUNC_0(VAR_0, VAR_1->desc->bxt.phy);
}
