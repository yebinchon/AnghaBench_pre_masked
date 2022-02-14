
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct drm_hdmi_info {unsigned long long y420_cmdb_map; } ;
struct drm_display_mode {int dummy; } ;
struct TYPE_2__ {struct drm_hdmi_info hdmi; } ;
struct drm_connector {TYPE_1__ display_info; } ;


 int FUNC_0 (struct drm_connector*,int const) ;
 struct drm_display_mode* FUNC_1 (struct drm_connector*,int const*,int,int) ;
 int FUNC_2 (struct drm_connector*,struct drm_display_mode*) ;

__attribute__((used)) static int
FUNC_3(struct drm_connector *VAR_0, const u8 *VAR_1, u8 VAR_2)
{
 int VAR_3, VAR_4 = 0;
 struct drm_hdmi_info *VAR_5 = &VAR_0->display_info.hdmi;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  struct drm_display_mode *VAR_6;
  VAR_6 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
  if (VAR_6) {
   if (VAR_3 < 64 && VAR_5->y420_cmdb_map & (1ULL << VAR_3))
    FUNC_0(VAR_0, VAR_1[VAR_3]);

   FUNC_2(VAR_0, VAR_6);
   VAR_4++;
  }
 }

 return VAR_4;
}
