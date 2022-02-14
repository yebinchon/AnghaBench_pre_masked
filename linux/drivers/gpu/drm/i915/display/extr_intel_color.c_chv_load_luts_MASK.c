
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct drm_property_blob* degamma_lut; struct drm_property_blob* gamma_lut; int crtc; } ;
struct intel_crtc_state {TYPE_1__ base; } ;
struct intel_crtc {int dummy; } ;
struct drm_property_blob {int dummy; } ;


 int FUNC_0 (struct intel_crtc_state const*) ;
 int FUNC_1 (struct intel_crtc*,struct drm_property_blob const*) ;
 int FUNC_2 (struct intel_crtc*,struct drm_property_blob const*) ;
 scalar_t__ FUNC_3 (struct intel_crtc_state const*) ;
 int FUNC_4 (struct intel_crtc_state const*) ;
 struct intel_crtc* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(const struct intel_crtc_state *VAR_0)
{
 struct intel_crtc *VAR_1 = FUNC_5(VAR_0->base.crtc);
 const struct drm_property_blob *VAR_2 = VAR_0->base.gamma_lut;
 const struct drm_property_blob *VAR_3 = VAR_0->base.degamma_lut;

 FUNC_0(VAR_0);

 if (FUNC_3(VAR_0)) {
  FUNC_4(VAR_0);
  return;
 }

 if (VAR_3)
  FUNC_1(VAR_1, VAR_3);

 if (VAR_2)
  FUNC_2(VAR_1, VAR_2);
}
