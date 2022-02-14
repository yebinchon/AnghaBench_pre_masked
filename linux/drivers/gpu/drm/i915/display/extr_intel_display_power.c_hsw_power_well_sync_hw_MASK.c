
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct i915_power_well_regs {int bios; int driver; } ;
struct i915_power_well {TYPE_2__* desc; } ;
struct drm_i915_private {int dummy; } ;
struct TYPE_3__ {int idx; struct i915_power_well_regs* regs; } ;
struct TYPE_4__ {TYPE_1__ hsw; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void FUNC_3(struct drm_i915_private *VAR_0,
       struct i915_power_well *VAR_1)
{
 const struct i915_power_well_regs *VAR_2 = VAR_1->desc->hsw.regs;
 int VAR_3 = VAR_1->desc->hsw.idx;
 u32 VAR_4 = FUNC_0(VAR_3);
 u32 VAR_5 = FUNC_1(VAR_2->bios);


 if (VAR_5 & VAR_4) {
  u32 VAR_6 = FUNC_1(VAR_2->driver);

  if (!(VAR_6 & VAR_4))
   FUNC_2(VAR_2->driver, VAR_6 | VAR_4);
  FUNC_2(VAR_2->bios, VAR_5 & ~VAR_4);
 }
}
