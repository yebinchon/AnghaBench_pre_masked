
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ degamma_lut; int crtc; struct drm_property_blob* gamma_lut; } ;
struct intel_crtc_state {int gamma_mode; TYPE_1__ base; } ;
struct intel_crtc {int dummy; } ;
struct drm_property_blob {int dummy; } ;




 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct intel_crtc*,struct drm_property_blob const*,int ) ;
 int FUNC_2 (struct intel_crtc_state const*) ;
 int FUNC_3 (struct intel_crtc_state const*) ;
 int FUNC_4 (struct intel_crtc_state const*) ;
 int FUNC_5 (struct intel_crtc_state const*) ;
 int FUNC_6 (struct intel_crtc*) ;
 struct intel_crtc* FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(const struct intel_crtc_state *VAR_1)
{
 const struct drm_property_blob *VAR_2 = VAR_1->base.gamma_lut;
 struct intel_crtc *VAR_3 = FUNC_7(VAR_1->base.crtc);

 if (VAR_1->base.degamma_lut)
  FUNC_2(VAR_1);

 switch (VAR_1->gamma_mode & VAR_0) {
 case 128:
  FUNC_3(VAR_1);
  break;

 case 129:
  FUNC_5(VAR_1);
  FUNC_4(VAR_1);
  break;

 default:
  FUNC_1(VAR_3, VAR_2, FUNC_0(0));
  FUNC_6(VAR_3);
 }
}
