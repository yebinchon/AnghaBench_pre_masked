
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tda998x_priv {scalar_t__ rev; int audio_mutex; int sink_has_audio; int cec_notify; TYPE_1__* hdmi; } ;
struct edid {int dummy; } ;
struct drm_connector {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct edid*) ;
 struct tda998x_priv* FUNC_1 (struct drm_connector*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct drm_connector*,struct edid*) ;
 int FUNC_4 (struct drm_connector*,struct edid*) ;
 int FUNC_5 (struct edid*) ;
 struct edid* FUNC_6 (struct drm_connector*,int ,struct tda998x_priv*) ;
 int FUNC_7 (struct edid*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int VAR_3 ;
 int FUNC_10 (struct tda998x_priv*,int ,int ) ;
 int FUNC_11 (struct tda998x_priv*,int ,int ) ;
 scalar_t__ FUNC_12 (struct tda998x_priv*) ;

__attribute__((used)) static int FUNC_13(struct drm_connector *VAR_4)
{
 struct tda998x_priv *VAR_5 = FUNC_1(VAR_4);
 struct edid *VAR_6;
 int VAR_7;






 if (FUNC_12(VAR_5))
  return 0;

 if (VAR_5->rev == VAR_1)
  FUNC_10(VAR_5, VAR_0, VAR_2);

 VAR_6 = FUNC_6(VAR_4, VAR_3, VAR_5);

 if (VAR_5->rev == VAR_1)
  FUNC_11(VAR_5, VAR_0, VAR_2);

 if (!VAR_6) {
  FUNC_2(&VAR_5->hdmi->dev, "failed to read EDID\n");
  return 0;
 }

 FUNC_4(VAR_4, VAR_6);
 FUNC_0(VAR_5->cec_notify, VAR_6);

 FUNC_8(&VAR_5->audio_mutex);
 VAR_7 = FUNC_3(VAR_4, VAR_6);
 VAR_5->sink_has_audio = FUNC_5(VAR_6);
 FUNC_9(&VAR_5->audio_mutex);

 FUNC_7(VAR_6);

 return VAR_7;
}
