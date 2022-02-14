
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct drm_hdmi_info {int y420_dc_modes; } ;
struct TYPE_2__ {struct drm_hdmi_info hdmi; } ;
struct drm_connector {TYPE_1__ display_info; } ;


 int const VAR_0 ;

__attribute__((used)) static void FUNC_0(struct drm_connector *VAR_1,
            const u8 *VAR_2)
{
 u8 VAR_3;
 struct drm_hdmi_info *VAR_4 = &VAR_1->display_info.hdmi;

 VAR_3 = VAR_2[7] & VAR_0;
 VAR_4->y420_dc_modes = VAR_3;
}
