
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zx_hdmi {int sink_has_audio; int sink_is_hdmi; TYPE_1__* ddc; } ;
struct edid {int dummy; } ;
struct drm_connector {int dummy; } ;
struct TYPE_2__ {int adap; } ;


 int FUNC_0 (struct drm_connector*,struct edid*) ;
 int FUNC_1 (struct drm_connector*,struct edid*) ;
 int FUNC_2 (struct edid*) ;
 int FUNC_3 (struct edid*) ;
 struct edid* FUNC_4 (struct drm_connector*,int *) ;
 int FUNC_5 (struct edid*) ;
 struct zx_hdmi* FUNC_6 (struct drm_connector*) ;

__attribute__((used)) static int FUNC_7(struct drm_connector *VAR_0)
{
 struct zx_hdmi *VAR_1 = FUNC_6(VAR_0);
 struct edid *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_4(VAR_0, &VAR_1->ddc->adap);
 if (!VAR_2)
  return 0;

 VAR_1->sink_is_hdmi = FUNC_2(VAR_2);
 VAR_1->sink_has_audio = FUNC_3(VAR_2);
 FUNC_1(VAR_0, VAR_2);
 VAR_3 = FUNC_0(VAR_0, VAR_2);
 FUNC_5(VAR_2);

 return VAR_3;
}
