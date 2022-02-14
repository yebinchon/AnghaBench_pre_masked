
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct i915_power_well {TYPE_2__* desc; } ;
struct drm_i915_private {int dummy; } ;
typedef enum aux_ch { ____Placeholder_aux_ch } aux_ch ;
struct TYPE_3__ {scalar_t__ is_tc_tbt; } ;
struct TYPE_4__ {TYPE_1__ hsw; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct drm_i915_private*,struct i915_power_well*) ;
 int FUNC_4 (struct drm_i915_private*,struct i915_power_well*) ;
 int FUNC_5 (struct drm_i915_private*,struct i915_power_well*) ;

__attribute__((used)) static void
FUNC_6(struct drm_i915_private *VAR_1,
     struct i915_power_well *VAR_2)
{
 enum aux_ch VAR_3 = FUNC_4(VAR_1, VAR_2);
 u32 VAR_4;

 FUNC_5(VAR_1, VAR_2);

 VAR_4 = FUNC_1(FUNC_0(VAR_3));
 VAR_4 &= ~VAR_0;
 if (VAR_2->desc->hsw.is_tc_tbt)
  VAR_4 |= VAR_0;
 FUNC_2(FUNC_0(VAR_3), VAR_4);

 FUNC_3(VAR_1, VAR_2);
}
