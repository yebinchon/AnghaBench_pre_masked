
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct i915_power_well_regs {int driver; } ;
struct i915_power_well {TYPE_2__* desc; } ;
struct drm_i915_private {int dummy; } ;
struct TYPE_3__ {int idx; int is_tc_tbt; struct i915_power_well_regs* regs; } ;
struct TYPE_4__ {TYPE_1__ hsw; int name; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*,int ,int ,int) ;

__attribute__((used)) static void FUNC_4(struct drm_i915_private *VAR_0,
        struct i915_power_well *VAR_1)
{
 const struct i915_power_well_regs *VAR_2 = VAR_1->desc->hsw.regs;
 int VAR_3 = VAR_1->desc->hsw.idx;


 if (FUNC_3(VAR_0, VAR_2->driver,
      FUNC_1(VAR_3), 1)) {
  FUNC_0("%s power well enable timeout\n",
         VAR_1->desc->name);


  FUNC_2(!VAR_1->desc->hsw.is_tc_tbt);
 }
}
