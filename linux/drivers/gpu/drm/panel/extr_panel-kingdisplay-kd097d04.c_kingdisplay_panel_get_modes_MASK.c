
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct drm_panel {TYPE_2__* connector; TYPE_3__* drm; } ;
struct drm_display_mode {int dummy; } ;
struct TYPE_9__ {int vrefresh; int vdisplay; int hdisplay; } ;
struct TYPE_8__ {int dev; } ;
struct TYPE_6__ {int width_mm; int height_mm; int bpc; } ;
struct TYPE_7__ {TYPE_1__ display_info; } ;


 int FUNC_0 (int ,char*,int ,int ,int ) ;
 int VAR_0 ;
 TYPE_4__ VAR_1 ;
 struct drm_display_mode* FUNC_1 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_2 (TYPE_2__*,struct drm_display_mode*) ;
 int FUNC_3 (struct drm_display_mode*) ;

__attribute__((used)) static int FUNC_4(struct drm_panel *VAR_2)
{
 struct drm_display_mode *VAR_3;

 VAR_3 = FUNC_1(VAR_2->drm, &VAR_1);
 if (!VAR_3) {
  FUNC_0(VAR_2->drm->dev, "failed to add mode %ux%ux@%u\n",
         VAR_1.hdisplay, VAR_1.vdisplay,
         VAR_1.vrefresh);
  return -VAR_0;
 }

 FUNC_3(VAR_3);

 FUNC_2(VAR_2->connector, VAR_3);

 VAR_2->connector->display_info.width_mm = 147;
 VAR_2->connector->display_info.height_mm = 196;
 VAR_2->connector->display_info.bpc = 8;

 return 1;
}
