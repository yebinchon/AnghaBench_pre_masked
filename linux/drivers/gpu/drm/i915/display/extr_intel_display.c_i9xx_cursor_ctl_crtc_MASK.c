
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int crtc; } ;
struct intel_crtc_state {scalar_t__ csc_enable; scalar_t__ gamma_enable; TYPE_1__ base; } ;
struct TYPE_4__ {int dev; } ;
struct intel_crtc {int pipe; TYPE_2__ base; } ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (struct drm_i915_private*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 struct drm_i915_private* FUNC_3 (int ) ;
 struct intel_crtc* FUNC_4 (int ) ;

__attribute__((used)) static u32 FUNC_5(const struct intel_crtc_state *VAR_2)
{
 struct intel_crtc *VAR_3 = FUNC_4(VAR_2->base.crtc);
 struct drm_i915_private *VAR_4 = FUNC_3(VAR_3->base.dev);
 u32 VAR_5 = 0;

 if (FUNC_0(VAR_4) >= 11)
  return VAR_5;

 if (VAR_2->gamma_enable)
  VAR_5 = VAR_0;

 if (VAR_2->csc_enable)
  VAR_5 |= VAR_1;

 if (FUNC_0(VAR_4) < 5 && !FUNC_1(VAR_4))
  VAR_5 |= FUNC_2(VAR_3->pipe);

 return VAR_5;
}
