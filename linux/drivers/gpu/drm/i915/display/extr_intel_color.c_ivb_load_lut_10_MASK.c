
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int dev; } ;
struct intel_crtc {int pipe; TYPE_1__ base; } ;
struct drm_property_blob {struct drm_color_lut* data; } ;
struct drm_i915_private {int dummy; } ;
struct drm_color_lut {int dummy; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct drm_property_blob const*) ;
 int FUNC_4 (struct drm_color_lut const*) ;
 int FUNC_5 (int ) ;
 struct drm_i915_private* FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct intel_crtc *VAR_0,
       const struct drm_property_blob *VAR_1,
       u32 VAR_2)
{
 struct drm_i915_private *VAR_3 = FUNC_6(VAR_0->base.dev);
 int VAR_4 = FUNC_5(VAR_2);
 const struct drm_color_lut *VAR_5 = VAR_1->data;
 int VAR_6, VAR_7 = FUNC_3(VAR_1);
 enum pipe VAR_8 = VAR_0->pipe;

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {

  const struct drm_color_lut *VAR_9 =
   &VAR_5[VAR_6 * (VAR_7 - 1) / (VAR_4 - 1)];

  FUNC_0(FUNC_2(VAR_8), VAR_2++);
  FUNC_0(FUNC_1(VAR_8), FUNC_4(VAR_9));
 }





 FUNC_0(FUNC_2(VAR_8), 0);
}
