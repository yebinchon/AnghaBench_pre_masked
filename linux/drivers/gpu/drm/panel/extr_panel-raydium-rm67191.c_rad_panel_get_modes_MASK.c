
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct drm_panel {struct drm_connector* connector; int dev; int drm; } ;
struct drm_display_mode {int type; int height_mm; int width_mm; } ;
struct TYPE_5__ {int bus_flags; int height_mm; int width_mm; } ;
struct drm_connector {TYPE_2__ display_info; } ;
struct TYPE_4__ {int vrefresh; int vdisplay; int hdisplay; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_2 (TYPE_2__*,int ,int ) ;
 struct drm_display_mode* FUNC_3 (int ,TYPE_1__*) ;
 int FUNC_4 (struct drm_connector*,struct drm_display_mode*) ;
 int FUNC_5 (struct drm_display_mode*) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_6(struct drm_panel *VAR_6)
{
 struct drm_connector *VAR_7 = VAR_6->connector;
 struct drm_display_mode *VAR_8;

 VAR_8 = FUNC_3(VAR_6->drm, &VAR_3);
 if (!VAR_8) {
  FUNC_1(VAR_6->dev, "failed to add mode %ux%ux@%u\n",
         VAR_3.hdisplay, VAR_3.vdisplay,
         VAR_3.vrefresh);
  return -VAR_2;
 }

 FUNC_5(VAR_8);
 VAR_8->type = VAR_0 | VAR_1;
 FUNC_4(VAR_6->connector, VAR_8);

 VAR_7->display_info.width_mm = VAR_8->width_mm;
 VAR_7->display_info.height_mm = VAR_8->height_mm;
 VAR_7->display_info.bus_flags = VAR_4;

 FUNC_2(&VAR_7->display_info,
      VAR_5,
      FUNC_0(VAR_5));
 return 1;
}
