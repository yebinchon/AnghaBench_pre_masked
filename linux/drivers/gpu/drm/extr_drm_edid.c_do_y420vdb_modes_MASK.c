
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct drm_hdmi_info {int y420_vdb_modes; } ;
struct drm_display_mode {int dummy; } ;
struct drm_display_info {int color_formats; struct drm_hdmi_info hdmi; } ;
struct drm_device {int dummy; } ;
struct drm_connector {struct drm_display_info display_info; struct drm_device* dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int) ;
 struct drm_display_mode* FUNC_1 (struct drm_device*,int *) ;
 int FUNC_2 (struct drm_connector*,struct drm_display_mode*) ;
 int FUNC_3 (int) ;
 int * VAR_1 ;
 int FUNC_4 (int const) ;

__attribute__((used)) static int FUNC_5(struct drm_connector *VAR_2,
       const u8 *VAR_3, u8 VAR_4)
{
 int VAR_5 = 0, VAR_6;
 struct drm_device *VAR_7 = VAR_2->dev;
 struct drm_display_info *VAR_8 = &VAR_2->display_info;
 struct drm_hdmi_info *VAR_9 = &VAR_8->hdmi;

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  u8 VAR_10 = FUNC_4(VAR_3[VAR_6]);
  struct drm_display_mode *VAR_11;

  if (!FUNC_3(VAR_10))
   continue;

  VAR_11 = FUNC_1(VAR_7, &VAR_1[VAR_10]);
  if (!VAR_11)
   break;
  FUNC_0(VAR_9->y420_vdb_modes, VAR_10, 1);
  FUNC_2(VAR_2, VAR_11);
  VAR_5++;
 }

 if (VAR_5 > 0)
  VAR_8->color_formats |= VAR_0;
 return VAR_5;
}
