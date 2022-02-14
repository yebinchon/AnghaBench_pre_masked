
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sink_is_hdmi; } ;
struct rk3066_hdmi {TYPE_1__ hdmi_data; int ddc; } ;
struct edid {int dummy; } ;
struct drm_connector {int dummy; } ;


 int FUNC_0 (struct drm_connector*,struct edid*) ;
 int FUNC_1 (struct drm_connector*,struct edid*) ;
 int FUNC_2 (struct edid*) ;
 struct edid* FUNC_3 (struct drm_connector*,int ) ;
 int FUNC_4 (struct edid*) ;
 struct rk3066_hdmi* FUNC_5 (struct drm_connector*) ;

__attribute__((used)) static int FUNC_6(struct drm_connector *VAR_0)
{
 struct rk3066_hdmi *VAR_1 = FUNC_5(VAR_0);
 struct edid *VAR_2;
 int VAR_3 = 0;

 if (!VAR_1->ddc)
  return 0;

 VAR_2 = FUNC_3(VAR_0, VAR_1->ddc);
 if (VAR_2) {
  VAR_1->hdmi_data.sink_is_hdmi = FUNC_2(VAR_2);
  FUNC_1(VAR_0, VAR_2);
  VAR_3 = FUNC_0(VAR_0, VAR_2);
  FUNC_4(VAR_2);
 }

 return VAR_3;
}
