
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct intel_crtc {int pipe; TYPE_1__ base; } ;
struct drm_property_blob {struct drm_color_lut* data; } ;
struct drm_i915_private {int dummy; } ;
struct drm_color_lut {int dummy; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct drm_property_blob const*) ;
 int FUNC_3 (struct drm_color_lut const*) ;
 struct drm_i915_private* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct intel_crtc *VAR_0,
       const struct drm_property_blob *VAR_1)
{
 struct drm_i915_private *VAR_2 = FUNC_4(VAR_0->base.dev);
 const struct drm_color_lut *VAR_3 = VAR_1->data;
 int VAR_4, VAR_5 = FUNC_2(VAR_1);
 enum pipe VAR_6 = VAR_0->pipe;

 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++)
  FUNC_0(FUNC_1(VAR_6, VAR_4), FUNC_3(&VAR_3[VAR_4]));
}
