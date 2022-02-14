
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct osd101t2587_panel {TYPE_4__* default_mode; } ;
struct drm_panel {TYPE_2__* connector; TYPE_3__* drm; } ;
struct drm_display_mode {int dummy; } ;
struct TYPE_8__ {int vrefresh; int vdisplay; int hdisplay; } ;
struct TYPE_7__ {int dev; } ;
struct TYPE_5__ {int width_mm; int height_mm; } ;
struct TYPE_6__ {TYPE_1__ display_info; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int ,int ) ;
 struct drm_display_mode* FUNC_1 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_2 (TYPE_2__*,struct drm_display_mode*) ;
 int FUNC_3 (struct drm_display_mode*) ;
 struct osd101t2587_panel* FUNC_4 (struct drm_panel*) ;

__attribute__((used)) static int FUNC_5(struct drm_panel *VAR_1)
{
 struct osd101t2587_panel *VAR_2 = FUNC_4(VAR_1);
 struct drm_display_mode *VAR_3;

 VAR_3 = FUNC_1(VAR_1->drm, VAR_2->default_mode);
 if (!VAR_3) {
  FUNC_0(VAR_1->drm->dev, "failed to add mode %ux%ux@%u\n",
   VAR_2->default_mode->hdisplay,
   VAR_2->default_mode->vdisplay,
   VAR_2->default_mode->vrefresh);
  return -VAR_0;
 }

 FUNC_3(VAR_3);

 FUNC_2(VAR_1->connector, VAR_3);

 VAR_1->connector->display_info.width_mm = 217;
 VAR_1->connector->display_info.height_mm = 136;

 return 1;
}
