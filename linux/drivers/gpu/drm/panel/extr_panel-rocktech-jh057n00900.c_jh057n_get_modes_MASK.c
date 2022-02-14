
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct jh057n {int dev; } ;
struct drm_panel {TYPE_2__* connector; int drm; } ;
struct drm_display_mode {int type; int height_mm; int width_mm; } ;
struct TYPE_7__ {int vrefresh; int vdisplay; int hdisplay; } ;
struct TYPE_5__ {int height_mm; int width_mm; } ;
struct TYPE_6__ {TYPE_1__ display_info; } ;


 int FUNC_0 (int ,char*,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__ VAR_3 ;
 struct drm_display_mode* FUNC_1 (int ,TYPE_3__*) ;
 int FUNC_2 (TYPE_2__*,struct drm_display_mode*) ;
 int FUNC_3 (struct drm_display_mode*) ;
 struct jh057n* FUNC_4 (struct drm_panel*) ;

__attribute__((used)) static int FUNC_5(struct drm_panel *VAR_4)
{
 struct jh057n *VAR_5 = FUNC_4(VAR_4);
 struct drm_display_mode *VAR_6;

 VAR_6 = FUNC_1(VAR_4->drm, &VAR_3);
 if (!VAR_6) {
  FUNC_0(VAR_5->dev, "Failed to add mode %ux%u@%u\n",
         VAR_3.hdisplay, VAR_3.vdisplay,
         VAR_3.vrefresh);
  return -VAR_2;
 }

 FUNC_3(VAR_6);

 VAR_6->type = VAR_0 | VAR_1;
 VAR_4->connector->display_info.width_mm = VAR_6->width_mm;
 VAR_4->connector->display_info.height_mm = VAR_6->height_mm;
 FUNC_2(VAR_4->connector, VAR_6);

 return 1;
}
