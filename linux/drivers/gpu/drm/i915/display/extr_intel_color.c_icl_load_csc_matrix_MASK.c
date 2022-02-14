
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_4__ {scalar_t__ ctm; int crtc; } ;
struct intel_crtc_state {scalar_t__ output_format; int csc_mode; scalar_t__ limited_color_range; TYPE_2__ base; } ;
struct TYPE_3__ {int dev; } ;
struct intel_crtc {int pipe; TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct intel_crtc*,int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct intel_crtc_state const*,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct intel_crtc*,int ,int *,int ) ;
 struct drm_i915_private* FUNC_5 (int ) ;
 struct intel_crtc* FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(const struct intel_crtc_state *VAR_6)
{
 struct intel_crtc *VAR_7 = FUNC_6(VAR_6->base.crtc);
 struct drm_i915_private *VAR_8 = FUNC_5(VAR_7->base.dev);

 if (VAR_6->base.ctm) {
  u16 VAR_9[9];

  FUNC_3(VAR_6, VAR_9);
  FUNC_4(VAR_7, VAR_3,
        VAR_9, VAR_3);
 }

 if (VAR_6->output_format != VAR_0) {
  FUNC_2(VAR_7, VAR_3,
          VAR_2,
          VAR_5);
 } else if (VAR_6->limited_color_range) {
  FUNC_2(VAR_7, VAR_3,
          VAR_1,
          VAR_4);
 }

 FUNC_0(FUNC_1(VAR_7->pipe), VAR_6->csc_mode);
}
