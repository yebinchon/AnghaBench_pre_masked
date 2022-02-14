
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct i915_power_well {TYPE_1__* desc; } ;
struct drm_i915_private {int dummy; } ;
struct TYPE_4__ {int (* disable ) (struct drm_i915_private*,struct i915_power_well*) ;int (* enable ) (struct drm_i915_private*,struct i915_power_well*) ;scalar_t__ (* is_enabled ) (struct drm_i915_private*,struct i915_power_well*) ;} ;
struct TYPE_3__ {TYPE_2__* ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 struct i915_power_well* FUNC_2 (struct drm_i915_private*,int ) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*,struct i915_power_well*) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*,struct i915_power_well*) ;
 int FUNC_5 (struct drm_i915_private*,struct i915_power_well*) ;
 int FUNC_6 (struct drm_i915_private*,struct i915_power_well*) ;

__attribute__((used)) static void FUNC_7(struct drm_i915_private *VAR_4)
{
 struct i915_power_well *VAR_5 =
  FUNC_2(VAR_4, VAR_3);
 struct i915_power_well *VAR_6 =
  FUNC_2(VAR_4, VAR_2);


 if (VAR_5->desc->ops->is_enabled(VAR_4, VAR_5) &&
     VAR_6->desc->ops->is_enabled(VAR_4, VAR_6) &&
     FUNC_1(VAR_1) & VAR_0)
  return;

 FUNC_0("toggling display PHY side reset\n");


 VAR_6->desc->ops->enable(VAR_4, VAR_6);
 VAR_5->desc->ops->disable(VAR_4, VAR_5);
}
