
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int crtc; } ;
struct intel_crtc_state {TYPE_1__ base; } ;
struct TYPE_4__ {int dev; } ;
struct intel_crtc {int pipe; TYPE_2__ base; } ;
struct drm_i915_private {int dummy; } ;
struct drm_color_lut {int blue; int green; int red; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,int) ;
 struct drm_i915_private* FUNC_2 (int ) ;
 struct intel_crtc* FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(const struct intel_crtc_state *VAR_0,
        const struct drm_color_lut *VAR_1)
{
 struct intel_crtc *VAR_2 = FUNC_3(VAR_0->base.crtc);
 struct drm_i915_private *VAR_3 = FUNC_2(VAR_2->base.dev);
 enum pipe VAR_4 = VAR_2->pipe;


 FUNC_0(FUNC_1(VAR_4, 0), VAR_1->red);
 FUNC_0(FUNC_1(VAR_4, 1), VAR_1->green);
 FUNC_0(FUNC_1(VAR_4, 2), VAR_1->blue);
}
