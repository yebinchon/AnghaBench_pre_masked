
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {struct drm_property_blob* gamma_lut; int crtc; } ;
struct intel_crtc_state {TYPE_1__ base; } ;
struct TYPE_4__ {int dev; } ;
struct intel_crtc {int pipe; TYPE_2__ base; } ;
struct drm_property_blob {struct drm_color_lut* data; } ;
struct drm_i915_private {int dummy; } ;
struct drm_color_lut {int dummy; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct drm_color_lut const*) ;
 int FUNC_4 (struct drm_color_lut const*) ;
 struct drm_i915_private* FUNC_5 (int ) ;
 struct intel_crtc* FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(const struct intel_crtc_state *VAR_1)
{
 struct intel_crtc *VAR_2 = FUNC_6(VAR_1->base.crtc);
 struct drm_i915_private *VAR_3 = FUNC_5(VAR_2->base.dev);
 const struct drm_property_blob *VAR_4 = VAR_1->base.gamma_lut;
 const struct drm_color_lut *VAR_5 = VAR_4->data;
 enum pipe VAR_6 = VAR_2->pipe;
 u32 VAR_7;
 FUNC_0(FUNC_2(VAR_6), VAR_0);

 for (VAR_7 = 0; VAR_7 < 9; VAR_7++) {
  const struct drm_color_lut *VAR_8 = &VAR_5[VAR_7];

  FUNC_0(FUNC_1(VAR_6),
      FUNC_3(VAR_8));
  FUNC_0(FUNC_1(VAR_6),
      FUNC_4(VAR_8));
 }
}
