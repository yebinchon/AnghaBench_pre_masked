
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct i915_power_well {int hw_enabled; TYPE_2__* desc; } ;
struct drm_i915_private {int dummy; } ;
struct TYPE_4__ {TYPE_1__* ops; int name; } ;
struct TYPE_3__ {int (* enable ) (struct drm_i915_private*,struct i915_power_well*) ;} ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct drm_i915_private*,struct i915_power_well*) ;

__attribute__((used)) static void FUNC_2(struct drm_i915_private *VAR_0,
        struct i915_power_well *VAR_1)
{
 FUNC_0("enabling %s\n", VAR_1->desc->name);
 VAR_1->desc->ops->enable(VAR_0, VAR_1);
 VAR_1->hw_enabled = 1;
}
