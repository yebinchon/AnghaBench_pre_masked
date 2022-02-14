
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct drm_property_blob* degamma_lut; struct drm_property_blob* gamma_lut; int crtc; } ;
struct intel_crtc_state {scalar_t__ gamma_mode; TYPE_1__ base; } ;
struct intel_crtc {int dummy; } ;
struct drm_property_blob {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (struct intel_crtc_state const*) ;
 int FUNC_2 (struct intel_crtc*,struct drm_property_blob const*,int) ;
 int FUNC_3 (struct intel_crtc*) ;
 struct intel_crtc* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(const struct intel_crtc_state *VAR_3)
{
 struct intel_crtc *VAR_4 = FUNC_4(VAR_3->base.crtc);
 const struct drm_property_blob *VAR_5 = VAR_3->base.gamma_lut;
 const struct drm_property_blob *VAR_6 = VAR_3->base.degamma_lut;

 if (VAR_3->gamma_mode == VAR_0) {
  FUNC_1(VAR_3);
 } else if (VAR_3->gamma_mode == VAR_1) {
  FUNC_2(VAR_4, VAR_6, VAR_2 |
    FUNC_0(0));
  FUNC_3(VAR_4);
  FUNC_2(VAR_4, VAR_5, VAR_2 |
    FUNC_0(512));
 } else {
  const struct drm_property_blob *VAR_7 = VAR_5 ?: VAR_6;

  FUNC_2(VAR_4, VAR_7,
    FUNC_0(0));
  FUNC_3(VAR_4);
 }
}
