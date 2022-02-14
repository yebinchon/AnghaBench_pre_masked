
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ili9881c {TYPE_1__* dsi; } ;
struct drm_panel {struct drm_connector* connector; int drm; } ;
struct drm_display_mode {int type; } ;
struct TYPE_6__ {int width_mm; int height_mm; } ;
struct drm_connector {TYPE_2__ display_info; } ;
struct TYPE_7__ {int vrefresh; int vdisplay; int hdisplay; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__ VAR_3 ;
 int FUNC_0 (int *,char*,int ,int ,int ) ;
 struct drm_display_mode* FUNC_1 (int ,TYPE_3__*) ;
 int FUNC_2 (struct drm_connector*,struct drm_display_mode*) ;
 int FUNC_3 (struct drm_display_mode*) ;
 struct ili9881c* FUNC_4 (struct drm_panel*) ;

__attribute__((used)) static int FUNC_5(struct drm_panel *VAR_4)
{
 struct drm_connector *VAR_5 = VAR_4->connector;
 struct ili9881c *VAR_6 = FUNC_4(VAR_4);
 struct drm_display_mode *VAR_7;

 VAR_7 = FUNC_1(VAR_4->drm, &VAR_3);
 if (!VAR_7) {
  FUNC_0(&VAR_6->dsi->dev, "failed to add mode %ux%ux@%u\n",
   VAR_3.hdisplay,
   VAR_3.vdisplay,
   VAR_3.vrefresh);
  return -VAR_2;
 }

 FUNC_3(VAR_7);

 VAR_7->type = VAR_0 | VAR_1;
 FUNC_2(VAR_5, VAR_7);

 VAR_4->connector->display_info.width_mm = 62;
 VAR_4->connector->display_info.height_mm = 110;

 return 1;
}
