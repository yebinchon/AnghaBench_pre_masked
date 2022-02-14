
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct drm_property_blob* gamma_lut; int crtc; } ;
struct intel_crtc_state {scalar_t__ gamma_mode; TYPE_1__ base; } ;
struct intel_crtc {int dummy; } ;
struct drm_property_blob {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct intel_crtc_state const*) ;
 int FUNC_1 (struct intel_crtc*,struct drm_property_blob const*) ;
 struct intel_crtc* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(const struct intel_crtc_state *VAR_1)
{
 struct intel_crtc *VAR_2 = FUNC_2(VAR_1->base.crtc);
 const struct drm_property_blob *VAR_3 = VAR_1->base.gamma_lut;

 if (VAR_1->gamma_mode == VAR_0)
  FUNC_0(VAR_1);
 else
  FUNC_1(VAR_2, VAR_3);
}
