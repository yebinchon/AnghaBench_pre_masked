
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int crtc; } ;
struct intel_crtc_state {TYPE_1__ base; } ;
struct TYPE_4__ {int dev; } ;
struct intel_crtc {int pipe; TYPE_2__ base; } ;
struct drm_property_blob {struct drm_color_lut* data; } ;
struct drm_i915_private {int dummy; } ;
struct drm_color_lut {int blue; int green; int red; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (int ,int) ;
 int VAR_0 ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (struct drm_i915_private*) ;
 int FUNC_5 (struct drm_i915_private*,int) ;
 int FUNC_6 (int ,int) ;
 scalar_t__ FUNC_7 (struct intel_crtc_state const*,int ) ;
 struct drm_i915_private* FUNC_8 (int ) ;
 struct intel_crtc* FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(const struct intel_crtc_state *VAR_1,
        const struct drm_property_blob *VAR_2)
{
 struct intel_crtc *VAR_3 = FUNC_9(VAR_1->base.crtc);
 struct drm_i915_private *VAR_4 = FUNC_8(VAR_3->base.dev);
 enum pipe VAR_5 = VAR_3->pipe;
 int VAR_6;

 if (FUNC_0(VAR_4)) {
  if (FUNC_7(VAR_1, VAR_0))
   FUNC_4(VAR_4);
  else
   FUNC_5(VAR_4, VAR_5);
 }

 if (VAR_2) {
  const struct drm_color_lut *VAR_7 = VAR_2->data;

  for (VAR_6 = 0; VAR_6 < 256; VAR_6++) {
   u32 VAR_8 =
    (FUNC_6(VAR_7[VAR_6].red, 8) << 16) |
    (FUNC_6(VAR_7[VAR_6].green, 8) << 8) |
    FUNC_6(VAR_7[VAR_6].blue, 8);

   if (FUNC_0(VAR_4))
    FUNC_1(FUNC_3(VAR_5, VAR_6), VAR_8);
   else
    FUNC_1(FUNC_2(VAR_5, VAR_6), VAR_8);
  }
 }
}
