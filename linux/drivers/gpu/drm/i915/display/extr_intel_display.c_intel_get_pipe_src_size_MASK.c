
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int vdisplay; int hdisplay; } ;
struct TYPE_5__ {TYPE_1__ mode; } ;
struct intel_crtc_state {int pipe_src_h; int pipe_src_w; TYPE_2__ base; } ;
struct TYPE_6__ {struct drm_device* dev; } ;
struct intel_crtc {int pipe; TYPE_3__ base; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct drm_i915_private* FUNC_2 (struct drm_device*) ;

__attribute__((used)) static void FUNC_3(struct intel_crtc *VAR_0,
        struct intel_crtc_state *VAR_1)
{
 struct drm_device *VAR_2 = VAR_0->base.dev;
 struct drm_i915_private *VAR_3 = FUNC_2(VAR_2);
 u32 VAR_4;

 VAR_4 = FUNC_0(FUNC_1(VAR_0->pipe));
 VAR_1->pipe_src_h = (VAR_4 & 0xffff) + 1;
 VAR_1->pipe_src_w = ((VAR_4 >> 16) & 0xffff) + 1;

 VAR_1->base.mode.vdisplay = VAR_1->pipe_src_h;
 VAR_1->base.mode.hdisplay = VAR_1->pipe_src_w;
}
