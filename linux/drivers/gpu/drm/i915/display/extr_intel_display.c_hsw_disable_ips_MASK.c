
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int crtc; } ;
struct intel_crtc_state {int ips_enabled; TYPE_1__ base; } ;
struct TYPE_4__ {struct drm_device* dev; } ;
struct intel_crtc {int pipe; TYPE_2__ base; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct drm_i915_private*,int ,int ,int) ;
 int FUNC_6 (struct drm_i915_private*,int ) ;
 int FUNC_7 (struct drm_i915_private*,int ,int ) ;
 struct drm_i915_private* FUNC_8 (struct drm_device*) ;
 struct intel_crtc* FUNC_9 (int ) ;

void FUNC_10(const struct intel_crtc_state *VAR_3)
{
 struct intel_crtc *VAR_4 = FUNC_9(VAR_3->base.crtc);
 struct drm_device *VAR_5 = VAR_4->base.dev;
 struct drm_i915_private *VAR_6 = FUNC_8(VAR_5);

 if (!VAR_3->ips_enabled)
  return;

 if (FUNC_2(VAR_6)) {
  FUNC_4(FUNC_7(VAR_6, VAR_0, 0));





  if (FUNC_5(VAR_6, VAR_1, VAR_2, 100))
   FUNC_0("Timed out waiting for IPS disable\n");
 } else {
  FUNC_1(VAR_1, 0);
  FUNC_3(VAR_1);
 }


 FUNC_6(VAR_6, VAR_4->pipe);
}
