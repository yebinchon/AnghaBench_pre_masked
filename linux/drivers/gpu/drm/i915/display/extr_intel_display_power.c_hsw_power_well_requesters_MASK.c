
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ reg; } ;
struct i915_power_well_regs {TYPE_1__ debug; TYPE_1__ kvmr; TYPE_1__ driver; TYPE_1__ bios; } ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__) ;

__attribute__((used)) static u32 FUNC_2(struct drm_i915_private *VAR_0,
         const struct i915_power_well_regs *VAR_1,
         int VAR_2)
{
 u32 VAR_3 = FUNC_0(VAR_2);
 u32 VAR_4;

 VAR_4 = FUNC_1(VAR_1->bios) & VAR_3 ? 1 : 0;
 VAR_4 |= FUNC_1(VAR_1->driver) & VAR_3 ? 2 : 0;
 if (VAR_1->kvmr.reg)
  VAR_4 |= FUNC_1(VAR_1->kvmr) & VAR_3 ? 4 : 0;
 VAR_4 |= FUNC_1(VAR_1->debug) & VAR_3 ? 8 : 0;

 return VAR_4;
}
