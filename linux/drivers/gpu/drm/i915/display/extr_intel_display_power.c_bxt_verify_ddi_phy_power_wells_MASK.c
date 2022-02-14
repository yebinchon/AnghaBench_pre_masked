
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct i915_power_well {scalar_t__ count; TYPE_2__* desc; } ;
struct drm_i915_private {int dummy; } ;
struct TYPE_3__ {int phy; } ;
struct TYPE_4__ {TYPE_1__ bxt; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 int VAR_2 ;
 int FUNC_1 (struct drm_i915_private*,int ) ;
 struct i915_power_well* FUNC_2 (struct drm_i915_private*,int ) ;

__attribute__((used)) static void FUNC_3(struct drm_i915_private *VAR_3)
{
 struct i915_power_well *VAR_4;

 VAR_4 = FUNC_2(VAR_3, VAR_0);
 if (VAR_4->count > 0)
  FUNC_1(VAR_3, VAR_4->desc->bxt.phy);

 VAR_4 = FUNC_2(VAR_3, VAR_2);
 if (VAR_4->count > 0)
  FUNC_1(VAR_3, VAR_4->desc->bxt.phy);

 if (FUNC_0(VAR_3)) {
  VAR_4 = FUNC_2(VAR_3,
            VAR_1);
  if (VAR_4->count > 0)
   FUNC_1(VAR_3,
       VAR_4->desc->bxt.phy);
 }
}
