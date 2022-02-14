
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct drm_hdmi_info {int y420_cmdb_modes; } ;
struct TYPE_2__ {struct drm_hdmi_info hdmi; } ;
struct drm_connector {TYPE_1__ display_info; } ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct drm_connector *VAR_0, u8 VAR_1)
{
 u8 VAR_2 = FUNC_2(VAR_1);
 struct drm_hdmi_info *VAR_3 = &VAR_0->display_info.hdmi;

 if (!FUNC_1(VAR_2))
  return;

 FUNC_0(VAR_3->y420_cmdb_modes, VAR_2, 1);
}
