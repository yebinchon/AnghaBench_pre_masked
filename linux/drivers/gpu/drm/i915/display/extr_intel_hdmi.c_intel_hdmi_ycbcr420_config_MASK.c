
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int crtc; } ;
struct intel_crtc_state {int port_clock; int output_format; TYPE_1__ base; } ;
struct intel_crtc {int dummy; } ;
struct drm_connector {int ycbcr_420_allowed; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct intel_crtc*,struct intel_crtc_state*,int ) ;
 scalar_t__ FUNC_3 (struct intel_crtc_state*) ;
 struct intel_crtc* FUNC_4 (int ) ;

__attribute__((used)) static bool
FUNC_5(struct drm_connector *VAR_2,
      struct intel_crtc_state *VAR_3,
      int *VAR_4, int *VAR_5,
      int *VAR_6)
{
 struct intel_crtc *VAR_7 = FUNC_4(VAR_3->base.crtc);

 if (!VAR_2->ycbcr_420_allowed) {
  FUNC_1("Platform doesn't support YCBCR420 output\n");
  return 0;
 }


 VAR_3->port_clock /= 2;
 *VAR_4 /= 2;
 *VAR_5 /= 2;
 *VAR_6 /= 2;
 VAR_3->output_format = VAR_1;


 if (FUNC_3(VAR_3)) {
  FUNC_0("Scaler allocation for output failed\n");
  return 0;
 }

 FUNC_2(VAR_7, VAR_3,
    VAR_0);

 return 1;
}
