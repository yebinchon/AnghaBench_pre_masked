
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct drm_panel {int drm; struct drm_connector* connector; } ;
struct drm_display_mode {int dummy; } ;
struct TYPE_4__ {int bus_flags; int height_mm; int width_mm; } ;
struct drm_connector {TYPE_1__ display_info; } ;
struct TYPE_5__ {int height_mm; int width_mm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct drm_display_mode* FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (struct drm_connector*,struct drm_display_mode*) ;
 int FUNC_2 (struct drm_display_mode*) ;
 TYPE_2__ VAR_4 ;

__attribute__((used)) static int FUNC_3(struct drm_panel *VAR_5)
{
 struct drm_connector *VAR_6 = VAR_5->connector;
 struct drm_display_mode *VAR_7;

 VAR_7 = FUNC_0(VAR_5->drm, &VAR_4);
 if (!VAR_7)
  return -VAR_3;

 FUNC_2(VAR_7);
 FUNC_1(VAR_6, VAR_7);

 VAR_6->display_info.width_mm = VAR_4.width_mm;
 VAR_6->display_info.height_mm = VAR_4.height_mm;






 VAR_6->display_info.bus_flags = VAR_0
       | VAR_2
       | VAR_1;

 return 1;
}
