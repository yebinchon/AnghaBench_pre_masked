
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ max_tmds_clock; int type; } ;
struct intel_hdmi {int has_hdmi_sink; int has_audio; TYPE_1__ dp_dual_mode; } ;
struct drm_connector {int dummy; } ;
struct TYPE_4__ {int * detect_edid; } ;


 int VAR_0 ;
 struct intel_hdmi* FUNC_0 (struct drm_connector*) ;
 int FUNC_1 (int *) ;
 TYPE_2__* FUNC_2 (struct drm_connector*) ;

__attribute__((used)) static void
FUNC_3(struct drm_connector *VAR_1)
{
 struct intel_hdmi *VAR_2 = FUNC_0(VAR_1);

 VAR_2->has_hdmi_sink = 0;
 VAR_2->has_audio = 0;

 VAR_2->dp_dual_mode.type = VAR_0;
 VAR_2->dp_dual_mode.max_tmds_clock = 0;

 FUNC_1(FUNC_2(VAR_1)->detect_edid);
 FUNC_2(VAR_1)->detect_edid = ((void*)0);
}
