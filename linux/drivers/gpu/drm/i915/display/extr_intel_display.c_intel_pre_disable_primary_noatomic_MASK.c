
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_crtc {int pipe; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {int dummy; } ;
struct drm_crtc {int state; struct drm_device* dev; } ;


 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct drm_i915_private*,int,int) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*,int) ;
 int FUNC_5 (struct drm_i915_private*,int) ;
 struct drm_i915_private* FUNC_6 (struct drm_device*) ;
 struct intel_crtc* FUNC_7 (struct drm_crtc*) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void
FUNC_9(struct drm_crtc *VAR_0)
{
 struct drm_device *VAR_1 = VAR_0->dev;
 struct drm_i915_private *VAR_2 = FUNC_6(VAR_1);
 struct intel_crtc *VAR_3 = FUNC_7(VAR_0);
 int VAR_4 = VAR_3->pipe;





 if (FUNC_1(VAR_2, 2))
  FUNC_3(VAR_2, VAR_4, 0);

 FUNC_2(FUNC_8(VAR_0->state));
 if (FUNC_0(VAR_2) &&
     FUNC_4(VAR_2, 0))
  FUNC_5(VAR_2, VAR_4);
}
