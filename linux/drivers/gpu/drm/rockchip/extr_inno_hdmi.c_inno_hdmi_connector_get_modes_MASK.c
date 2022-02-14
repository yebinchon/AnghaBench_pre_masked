
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sink_has_audio; int sink_is_hdmi; } ;
struct inno_hdmi {TYPE_1__ hdmi_data; int ddc; } ;
struct edid {int dummy; } ;
struct drm_connector {int dummy; } ;


 int FUNC_0 (struct drm_connector*,struct edid*) ;
 int FUNC_1 (struct drm_connector*,struct edid*) ;
 int FUNC_2 (struct edid*) ;
 int FUNC_3 (struct edid*) ;
 struct edid* FUNC_4 (struct drm_connector*,int ) ;
 int FUNC_5 (struct edid*) ;
 struct inno_hdmi* FUNC_6 (struct drm_connector*) ;

__attribute__((used)) static int FUNC_7(struct drm_connector *VAR_0)
{
 struct inno_hdmi *VAR_1 = FUNC_6(VAR_0);
 struct edid *VAR_2;
 int VAR_3 = 0;

 if (!VAR_1->ddc)
  return 0;

 VAR_2 = FUNC_4(VAR_0, VAR_1->ddc);
 if (VAR_2) {
  VAR_1->hdmi_data.sink_is_hdmi = FUNC_2(VAR_2);
  VAR_1->hdmi_data.sink_has_audio = FUNC_3(VAR_2);
  FUNC_1(VAR_0, VAR_2);
  VAR_3 = FUNC_0(VAR_0, VAR_2);
  FUNC_5(VAR_2);
 }

 return VAR_3;
}
