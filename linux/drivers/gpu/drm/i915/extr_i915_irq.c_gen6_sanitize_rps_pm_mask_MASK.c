
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int pm_intrmsk_mbz; } ;
struct TYPE_4__ {TYPE_1__ rps; } ;
struct drm_i915_private {TYPE_2__ gt_pm; } ;



u32 FUNC_0(const struct drm_i915_private *VAR_0, u32 VAR_1)
{
 return VAR_1 & ~VAR_0->gt_pm.rps.pm_intrmsk_mbz;
}
