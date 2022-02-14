
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct drm_display_mode {int dummy; } ;
struct TYPE_2__ {int y420_vdb_modes; } ;
struct drm_display_info {TYPE_1__ hdmi; } ;


 int FUNC_0 (struct drm_display_mode const*) ;
 int FUNC_1 (int ,int ) ;

bool FUNC_2(const struct drm_display_info *VAR_0,
     const struct drm_display_mode *VAR_1)
{
 u8 VAR_2 = FUNC_0(VAR_1);

 return FUNC_1(VAR_2, VAR_0->hdmi.y420_vdb_modes);
}
