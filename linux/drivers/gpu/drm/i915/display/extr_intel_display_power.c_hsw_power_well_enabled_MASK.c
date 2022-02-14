
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
typedef enum i915_power_well_id { ____Placeholder_i915_power_well_id } i915_power_well_id ;
struct TYPE_3__ {int idx; struct i915_power_well_regs* regs; } ;
struct TYPE_4__ {int id; TYPE_1__ hsw; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*,int) ;
 int FUNC_4 (struct drm_i915_private*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static bool FUNC_5(struct drm_i915_private *VAR_2,
       struct i915_power_well *VAR_3)
{
 const struct i915_power_well_regs *VAR_4 = VAR_3->desc->hsw.regs;
 enum i915_power_well_id VAR_5 = VAR_3->desc->id;
 int VAR_6 = VAR_3->desc->hsw.idx;
 u32 VAR_7 = FUNC_0(VAR_6) |
     FUNC_1(VAR_6);
 u32 VAR_8;

 VAR_8 = FUNC_2(VAR_4->driver);







 if (FUNC_3(VAR_2, 9) && !FUNC_4(VAR_2) &&
     (VAR_5 == VAR_0 || VAR_5 == VAR_1))
  VAR_8 |= FUNC_2(VAR_4->bios);

 return (VAR_8 & VAR_7) == VAR_7;
}
