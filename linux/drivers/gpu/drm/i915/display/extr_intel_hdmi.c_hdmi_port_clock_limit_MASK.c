
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int max_tmds_clock; } ;
struct intel_hdmi {int has_hdmi_sink; TYPE_2__ dp_dual_mode; struct intel_connector* attached_connector; } ;
struct intel_encoder {int dummy; } ;
struct drm_display_info {int max_tmds_clock; } ;
struct TYPE_4__ {struct drm_display_info display_info; } ;
struct intel_connector {TYPE_1__ base; } ;
struct TYPE_6__ {struct intel_encoder base; } ;


 TYPE_3__* FUNC_0 (struct intel_hdmi*) ;
 int FUNC_1 (struct intel_encoder*) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(struct intel_hdmi *VAR_0,
     bool VAR_1,
     bool VAR_2)
{
 struct intel_encoder *VAR_3 = &FUNC_0(VAR_0)->base;
 int VAR_4 = FUNC_1(VAR_3);

 if (VAR_1) {
  struct intel_connector *VAR_5 = VAR_0->attached_connector;
  const struct drm_display_info *VAR_6 = &VAR_5->base.display_info;

  if (VAR_0->dp_dual_mode.max_tmds_clock)
   VAR_4 = FUNC_2(VAR_4,
          VAR_0->dp_dual_mode.max_tmds_clock);

  if (VAR_6->max_tmds_clock)
   VAR_4 = FUNC_2(VAR_4,
          VAR_6->max_tmds_clock);
  else if (!VAR_0->has_hdmi_sink || VAR_2)
   VAR_4 = FUNC_2(VAR_4, 165000);
 }

 return VAR_4;
}
