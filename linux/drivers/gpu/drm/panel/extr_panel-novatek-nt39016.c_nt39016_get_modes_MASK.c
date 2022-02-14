
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nt39016_panel_info {int bus_flags; int bus_format; int height_mm; int width_mm; int display_mode; } ;
struct nt39016 {struct nt39016_panel_info* panel_info; } ;
struct drm_panel {int drm; struct drm_connector* connector; } ;
struct drm_display_mode {int type; } ;
struct TYPE_2__ {int bpc; int bus_flags; int height_mm; int width_mm; } ;
struct drm_connector {TYPE_1__ display_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int *,int) ;
 struct drm_display_mode* FUNC_1 (int ,int *) ;
 int FUNC_2 (struct drm_connector*,struct drm_display_mode*) ;
 int FUNC_3 (struct drm_display_mode*) ;
 struct nt39016* FUNC_4 (struct drm_panel*) ;

__attribute__((used)) static int FUNC_5(struct drm_panel *VAR_3)
{
 struct nt39016 *VAR_4 = FUNC_4(VAR_3);
 const struct nt39016_panel_info *VAR_5 = VAR_4->panel_info;
 struct drm_connector *VAR_6 = VAR_3->connector;
 struct drm_display_mode *VAR_7;

 VAR_7 = FUNC_1(VAR_3->drm, &VAR_5->display_mode);
 if (!VAR_7)
  return -VAR_2;

 FUNC_3(VAR_7);

 VAR_7->type = VAR_0 | VAR_1;
 FUNC_2(VAR_6, VAR_7);

 VAR_6->display_info.bpc = 8;
 VAR_6->display_info.width_mm = VAR_5->width_mm;
 VAR_6->display_info.height_mm = VAR_5->height_mm;

 FUNC_0(&VAR_6->display_info,
      &VAR_5->bus_format, 1);
 VAR_6->display_info.bus_flags = VAR_5->bus_flags;

 return 1;
}
