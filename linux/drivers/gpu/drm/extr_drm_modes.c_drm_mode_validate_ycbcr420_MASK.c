
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct drm_hdmi_info {int y420_vdb_modes; } ;
struct drm_display_mode {int dummy; } ;
struct TYPE_2__ {struct drm_hdmi_info hdmi; } ;
struct drm_connector {int ycbcr_420_allowed; TYPE_1__ display_info; } ;
typedef enum drm_mode_status { ____Placeholder_drm_mode_status } drm_mode_status ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_display_mode const*) ;
 scalar_t__ FUNC_1 (int ,int ) ;

enum drm_mode_status
FUNC_2(const struct drm_display_mode *VAR_2,
      struct drm_connector *VAR_3)
{
 u8 VAR_4 = FUNC_0(VAR_2);
 enum drm_mode_status VAR_5 = VAR_1;
 struct drm_hdmi_info *VAR_6 = &VAR_3->display_info.hdmi;

 if (FUNC_1(VAR_4, VAR_6->y420_vdb_modes)) {
  if (!VAR_3->ycbcr_420_allowed)
   VAR_5 = VAR_0;
 }

 return VAR_5;
}
