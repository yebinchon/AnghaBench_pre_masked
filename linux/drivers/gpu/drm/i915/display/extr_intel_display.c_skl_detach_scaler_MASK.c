
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct drm_device* dev; } ;
struct intel_crtc {int pipe; TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;
 struct drm_i915_private* FUNC_4 (struct drm_device*) ;

__attribute__((used)) static void FUNC_5(struct intel_crtc *VAR_0, int VAR_1)
{
 struct drm_device *VAR_2 = VAR_0->base.dev;
 struct drm_i915_private *VAR_3 = FUNC_4(VAR_2);

 FUNC_0(FUNC_1(VAR_0->pipe, VAR_1), 0);
 FUNC_0(FUNC_2(VAR_0->pipe, VAR_1), 0);
 FUNC_0(FUNC_3(VAR_0->pipe, VAR_1), 0);
}
