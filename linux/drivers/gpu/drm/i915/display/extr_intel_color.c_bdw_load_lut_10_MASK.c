
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


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct drm_property_blob const*) ;
 int FUNC_4 (struct drm_color_lut const*) ;
 int FUNC_5 (int) ;
 struct drm_i915_private* FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct intel_crtc *VAR_1,
       const struct drm_property_blob *VAR_2,
       u32 VAR_3)
{
 struct drm_i915_private *VAR_4 = FUNC_6(VAR_1->base.dev);
 int VAR_5 = FUNC_5(VAR_3);
 const struct drm_color_lut *VAR_6 = VAR_2->data;
 int VAR_7, VAR_8 = FUNC_3(VAR_2);
 enum pipe VAR_9 = VAR_1->pipe;

 FUNC_0(FUNC_2(VAR_9), VAR_3 |
     VAR_0);

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {

  const struct drm_color_lut *VAR_10 =
   &VAR_6[VAR_7 * (VAR_8 - 1) / (VAR_5 - 1)];

  FUNC_0(FUNC_1(VAR_9), FUNC_4(VAR_10));
 }





 FUNC_0(FUNC_2(VAR_9), 0);
}
