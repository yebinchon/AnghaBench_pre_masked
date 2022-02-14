
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {struct drm_property_blob* degamma_lut; struct drm_property_blob* gamma_lut; TYPE_1__* crtc; } ;
struct intel_crtc_state {scalar_t__ c8_planes; TYPE_2__ base; } ;
struct drm_property_blob {int dummy; } ;
struct drm_i915_private {int dummy; } ;
struct TYPE_7__ {int degamma_lut_size; int gamma_lut_size; int gamma_lut_tests; int degamma_lut_tests; } ;
struct TYPE_8__ {TYPE_3__ color; } ;
struct TYPE_5__ {int dev; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 TYPE_4__* FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_property_blob const*,int) ;
 scalar_t__ FUNC_3 (struct intel_crtc_state const*) ;
 scalar_t__ FUNC_4 (struct drm_property_blob const*,int ) ;
 struct drm_i915_private* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(const struct intel_crtc_state *VAR_1)
{
 struct drm_i915_private *VAR_2 = FUNC_5(VAR_1->base.crtc->dev);
 const struct drm_property_blob *VAR_3 = VAR_1->base.gamma_lut;
 const struct drm_property_blob *VAR_4 = VAR_1->base.degamma_lut;
 int VAR_5, VAR_6;
 u32 VAR_7, VAR_8;


 if (FUNC_3(VAR_1))
  return 0;


 if (VAR_1->c8_planes) {
  FUNC_0("C8 pixelformat requires the legacy LUT\n");
  return -VAR_0;
 }

 VAR_6 = FUNC_1(VAR_2)->color.degamma_lut_size;
 VAR_5 = FUNC_1(VAR_2)->color.gamma_lut_size;
 VAR_8 = FUNC_1(VAR_2)->color.degamma_lut_tests;
 VAR_7 = FUNC_1(VAR_2)->color.gamma_lut_tests;

 if (FUNC_2(VAR_4, VAR_6) ||
     FUNC_2(VAR_3, VAR_5))
  return -VAR_0;

 if (FUNC_4(VAR_4, VAR_8) ||
     FUNC_4(VAR_3, VAR_7))
  return -VAR_0;

 return 0;
}
