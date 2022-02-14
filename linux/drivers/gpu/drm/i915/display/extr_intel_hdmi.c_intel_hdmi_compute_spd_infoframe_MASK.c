
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_encoder {int dummy; } ;
struct hdmi_spd_infoframe {int sdi; } ;
struct TYPE_3__ {struct hdmi_spd_infoframe spd; } ;
struct TYPE_4__ {int enable; TYPE_1__ spd; } ;
struct intel_crtc_state {TYPE_2__ infoframes; int has_infoframe; } ;
struct drm_connector_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct hdmi_spd_infoframe*) ;
 int FUNC_2 (struct hdmi_spd_infoframe*,char*,char*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static bool
FUNC_4(struct intel_encoder *VAR_2,
     struct intel_crtc_state *VAR_3,
     struct drm_connector_state *VAR_4)
{
 struct hdmi_spd_infoframe *VAR_5 = &VAR_3->infoframes.spd.spd;
 int VAR_6;

 if (!VAR_3->has_infoframe)
  return 1;

 VAR_3->infoframes.enable |=
  FUNC_3(VAR_0);

 VAR_6 = FUNC_2(VAR_5, "Intel", "Integrated gfx");
 if (FUNC_0(VAR_6))
  return 0;

 VAR_5->sdi = VAR_1;

 VAR_6 = FUNC_1(VAR_5);
 if (FUNC_0(VAR_6))
  return 0;

 return 1;
}
