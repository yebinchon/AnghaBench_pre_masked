
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct sii902x {int mutex; int connector; struct regmap* regmap; } ;
struct regmap {int dummy; } ;
struct hdmi_avi_infoframe {int dummy; } ;
struct drm_display_mode {int clock; int vrefresh; int hdisplay; int vdisplay; } ;
struct drm_bridge {int dummy; } ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct sii902x* FUNC_2 (struct drm_bridge*) ;
 int FUNC_3 (struct hdmi_avi_infoframe*,int *,struct drm_display_mode const*) ;
 int FUNC_4 (struct hdmi_avi_infoframe*,int*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct regmap*,int ,int*,int) ;

__attribute__((used)) static void FUNC_8(struct drm_bridge *VAR_10,
        const struct drm_display_mode *VAR_11,
        const struct drm_display_mode *VAR_12)
{
 struct sii902x *VAR_13 = FUNC_2(VAR_10);
 struct regmap *VAR_14 = VAR_13->regmap;
 u8 VAR_15[FUNC_1(VAR_0)];
 struct hdmi_avi_infoframe VAR_16;
 u16 VAR_17 = VAR_12->clock / 10;
 int VAR_18;

 VAR_15[0] = VAR_17 & 0xff;
 VAR_15[1] = VAR_17 >> 8;
 VAR_15[2] = VAR_12->vrefresh;
 VAR_15[3] = 0x00;
 VAR_15[4] = VAR_12->hdisplay;
 VAR_15[5] = VAR_12->hdisplay >> 8;
 VAR_15[6] = VAR_12->vdisplay;
 VAR_15[7] = VAR_12->vdisplay >> 8;
 VAR_15[8] = VAR_8 | VAR_7 |
   VAR_6;
 VAR_15[9] = VAR_5 |
   VAR_4;

 FUNC_5(&VAR_13->mutex);

 VAR_18 = FUNC_7(VAR_14, VAR_9, VAR_15, 10);
 if (VAR_18)
  goto out;

 VAR_18 = FUNC_3(&VAR_16,
             &VAR_13->connector, VAR_12);
 if (VAR_18 < 0) {
  FUNC_0("couldn't fill AVI infoframe\n");
  goto out;
 }

 VAR_18 = FUNC_4(&VAR_16, VAR_15, sizeof(VAR_15));
 if (VAR_18 < 0) {
  FUNC_0("failed to pack AVI infoframe: %d\n", VAR_18);
  goto out;
 }


 FUNC_7(VAR_14, VAR_3,
     VAR_15 + VAR_2 - 1,
     VAR_1 + 1);

out:
 FUNC_6(&VAR_13->mutex);
}
