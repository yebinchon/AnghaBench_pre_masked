
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct intel_sdvo_preferred_input_timing_args {int scaled; scalar_t__ interlace; scalar_t__ height; scalar_t__ width; scalar_t__ clock; } ;
struct TYPE_3__ {struct drm_display_mode* fixed_mode; } ;
struct TYPE_4__ {TYPE_1__ panel; } ;
struct intel_sdvo_connector {TYPE_2__ base; } ;
struct intel_sdvo {int dummy; } ;
struct drm_display_mode {scalar_t__ hdisplay; scalar_t__ vdisplay; } ;
typedef int args ;


 scalar_t__ FUNC_0 (struct intel_sdvo_connector*) ;
 int VAR_0 ;
 int FUNC_1 (struct intel_sdvo*,int ,struct intel_sdvo_preferred_input_timing_args*,int) ;
 int FUNC_2 (struct intel_sdvo_preferred_input_timing_args*,int ,int) ;

__attribute__((used)) static bool
FUNC_3(struct intel_sdvo *VAR_1,
      struct intel_sdvo_connector *VAR_2,
      u16 VAR_3,
      u16 VAR_4,
      u16 VAR_5)
{
 struct intel_sdvo_preferred_input_timing_args VAR_6;

 FUNC_2(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.clock = VAR_3;
 VAR_6.width = VAR_4;
 VAR_6.height = VAR_5;
 VAR_6.interlace = 0;

 if (FUNC_0(VAR_2)) {
  const struct drm_display_mode *VAR_7 =
   VAR_2->base.panel.fixed_mode;

  if (VAR_7->hdisplay != VAR_4 ||
      VAR_7->vdisplay != VAR_5)
   VAR_6.scaled = 1;
 }

 return FUNC_1(VAR_1,
        VAR_0,
        &VAR_6, sizeof(VAR_6));
}
