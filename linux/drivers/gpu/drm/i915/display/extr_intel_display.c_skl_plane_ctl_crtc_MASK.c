
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {TYPE_1__* crtc; } ;
struct intel_crtc_state {scalar_t__ csc_enable; scalar_t__ gamma_enable; TYPE_2__ base; } ;
struct drm_i915_private {int dummy; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct drm_i915_private* FUNC_2 (int ) ;

u32 FUNC_3(const struct intel_crtc_state *VAR_2)
{
 struct drm_i915_private *VAR_3 = FUNC_2(VAR_2->base.crtc->dev);
 u32 VAR_4 = 0;

 if (FUNC_0(VAR_3) >= 10 || FUNC_1(VAR_3))
  return VAR_4;

 if (VAR_2->gamma_enable)
  VAR_4 |= VAR_1;

 if (VAR_2->csc_enable)
  VAR_4 |= VAR_0;

 return VAR_4;
}
