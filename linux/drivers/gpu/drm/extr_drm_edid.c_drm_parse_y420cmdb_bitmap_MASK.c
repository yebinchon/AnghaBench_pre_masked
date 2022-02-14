
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct drm_hdmi_info {int y420_cmdb_map; } ;
struct drm_display_info {int color_formats; struct drm_hdmi_info hdmi; } ;
struct drm_connector {struct drm_display_info display_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int const*) ;

__attribute__((used)) static void FUNC_2(struct drm_connector *VAR_2,
          const u8 *VAR_3)
{
 struct drm_display_info *VAR_4 = &VAR_2->display_info;
 struct drm_hdmi_info *VAR_5 = &VAR_4->hdmi;
 u8 VAR_6 = FUNC_1(VAR_3) - 1;
 u8 VAR_7;
 u64 VAR_8 = 0;

 if (VAR_6 == 0) {

  VAR_5->y420_cmdb_map = VAR_1;
  VAR_4->color_formats |= VAR_0;
  return;
 }
 if (FUNC_0(VAR_6 > 8))
  VAR_6 = 8;

 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
  VAR_8 |= (u64)VAR_3[2 + VAR_7] << (8 * VAR_7);

 if (VAR_8)
  VAR_4->color_formats |= VAR_0;

 VAR_5->y420_cmdb_map = VAR_8;
}
