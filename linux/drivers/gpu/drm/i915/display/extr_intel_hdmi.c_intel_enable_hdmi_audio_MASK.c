
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_encoder {int dummy; } ;
struct TYPE_2__ {int crtc; } ;
struct intel_crtc_state {int has_hdmi_sink; TYPE_1__ base; } ;
struct intel_crtc {int pipe; } ;
struct drm_connector_state {int dummy; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct intel_encoder*,struct intel_crtc_state const*,struct drm_connector_state const*) ;
 int FUNC_3 (int ) ;
 struct intel_crtc* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct intel_encoder *VAR_0,
        const struct intel_crtc_state *VAR_1,
        const struct drm_connector_state *VAR_2)
{
 struct intel_crtc *VAR_3 = FUNC_4(VAR_1->base.crtc);

 FUNC_1(!VAR_1->has_hdmi_sink);
 FUNC_0("Enabling HDMI audio on pipe %c\n",
    FUNC_3(VAR_3->pipe));
 FUNC_2(VAR_0, VAR_1, VAR_2);
}
