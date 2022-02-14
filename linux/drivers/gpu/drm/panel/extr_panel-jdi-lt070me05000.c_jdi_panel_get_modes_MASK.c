
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct jdi_panel {TYPE_2__* dsi; } ;
struct drm_panel {TYPE_3__* connector; int drm; } ;
struct drm_display_mode {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_9__ {int vrefresh; int vdisplay; int hdisplay; } ;
struct TYPE_6__ {int width_mm; int height_mm; } ;
struct TYPE_8__ {TYPE_1__ display_info; } ;
struct TYPE_7__ {struct device dev; } ;


 int VAR_0 ;
 TYPE_4__ VAR_1 ;
 int FUNC_0 (struct device*,char*,int ,int ,int ) ;
 struct drm_display_mode* FUNC_1 (int ,TYPE_4__*) ;
 int FUNC_2 (TYPE_3__*,struct drm_display_mode*) ;
 int FUNC_3 (struct drm_display_mode*) ;
 struct jdi_panel* FUNC_4 (struct drm_panel*) ;

__attribute__((used)) static int FUNC_5(struct drm_panel *VAR_2)
{
 struct drm_display_mode *VAR_3;
 struct jdi_panel *VAR_4 = FUNC_4(VAR_2);
 struct device *VAR_5 = &VAR_4->dsi->dev;

 VAR_3 = FUNC_1(VAR_2->drm, &VAR_1);
 if (!VAR_3) {
  FUNC_0(VAR_5, "failed to add mode %ux%ux@%u\n",
   VAR_1.hdisplay, VAR_1.vdisplay,
   VAR_1.vrefresh);
  return -VAR_0;
 }

 FUNC_3(VAR_3);

 FUNC_2(VAR_2->connector, VAR_3);

 VAR_2->connector->display_info.width_mm = 95;
 VAR_2->connector->display_info.height_mm = 151;

 return 1;
}
