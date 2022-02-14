
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_crtc_state {int dummy; } ;
struct intel_crtc {int pipe; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {int dummy; } ;
struct drm_crtc {struct drm_device* dev; } ;


 scalar_t__ FUNC_0 (struct drm_i915_private*,int) ;
 int FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (struct drm_i915_private*,int,int) ;
 struct drm_i915_private* FUNC_4 (struct drm_device*) ;
 struct intel_crtc* FUNC_5 (struct drm_crtc*) ;

__attribute__((used)) static void
FUNC_6(struct drm_crtc *VAR_0,
     const struct intel_crtc_state *VAR_1)
{
 struct drm_device *VAR_2 = VAR_0->dev;
 struct drm_i915_private *VAR_3 = FUNC_4(VAR_2);
 struct intel_crtc *VAR_4 = FUNC_5(VAR_0);
 int VAR_5 = VAR_4->pipe;
 if (FUNC_0(VAR_3, 2))
  FUNC_3(VAR_3, VAR_5, 1);


 FUNC_1(VAR_3);
 FUNC_2(VAR_3);
}
