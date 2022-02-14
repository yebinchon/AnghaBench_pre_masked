
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {struct drm_property_blob* gamma_lut; int crtc; } ;
struct intel_crtc_state {TYPE_2__ base; } ;
struct TYPE_3__ {int dev; } ;
struct intel_crtc {int pipe; TYPE_1__ base; } ;
struct drm_property_blob {struct drm_color_lut* data; } ;
struct drm_i915_private {int dummy; } ;
struct drm_color_lut {int dummy; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct intel_crtc_state const*,struct drm_color_lut const*) ;
 int FUNC_4 (struct drm_color_lut const*) ;
 int FUNC_5 (struct drm_color_lut const*) ;
 int FUNC_6 (struct intel_crtc*) ;
 struct drm_i915_private* FUNC_7 (int ) ;
 struct intel_crtc* FUNC_8 (int ) ;

__attribute__((used)) static void
FUNC_9(const struct intel_crtc_state *VAR_1)
{
 struct intel_crtc *VAR_2 = FUNC_8(VAR_1->base.crtc);
 struct drm_i915_private *VAR_3 = FUNC_7(VAR_2->base.dev);
 const struct drm_property_blob *VAR_4 = VAR_1->base.gamma_lut;
 const struct drm_color_lut *VAR_5 = VAR_4->data;
 const struct drm_color_lut *VAR_6;
 enum pipe VAR_7 = VAR_2->pipe;
 u32 VAR_8;
 FUNC_0(FUNC_2(VAR_7), VAR_0);
 for (VAR_8 = 1; VAR_8 < 257; VAR_8++) {
  VAR_6 = &VAR_5[VAR_8 * 8];
  FUNC_0(FUNC_1(VAR_7), FUNC_4(VAR_6));
  FUNC_0(FUNC_1(VAR_7), FUNC_5(VAR_6));
 }
 for (VAR_8 = 0; VAR_8 < 256; VAR_8++) {
  VAR_6 = &VAR_5[VAR_8 * 8 * 128];
  FUNC_0(FUNC_1(VAR_7), FUNC_4(VAR_6));
  FUNC_0(FUNC_1(VAR_7), FUNC_5(VAR_6));
 }


 VAR_6 = &VAR_5[256 * 8 * 128];
 FUNC_3(VAR_1, VAR_6);
 FUNC_6(VAR_2);
}
