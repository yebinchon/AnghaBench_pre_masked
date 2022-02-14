
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int crtc; } ;
struct intel_crtc_state {int pipe_src_w; int pipe_src_h; TYPE_1__ base; } ;
struct TYPE_4__ {int dev; } ;
struct intel_crtc {int pipe; TYPE_2__ base; } ;
struct drm_i915_private {int dummy; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;
 struct drm_i915_private* FUNC_2 (int ) ;
 struct intel_crtc* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(const struct intel_crtc_state *VAR_0)
{
 struct intel_crtc *VAR_1 = FUNC_3(VAR_0->base.crtc);
 struct drm_i915_private *VAR_2 = FUNC_2(VAR_1->base.dev);
 enum pipe VAR_3 = VAR_1->pipe;




 FUNC_0(FUNC_1(VAR_3),
     ((VAR_0->pipe_src_w - 1) << 16) |
     (VAR_0->pipe_src_h - 1));
}
