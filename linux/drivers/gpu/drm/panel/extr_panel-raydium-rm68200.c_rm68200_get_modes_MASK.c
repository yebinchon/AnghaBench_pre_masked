
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct drm_panel {TYPE_2__* connector; int drm; } ;
struct drm_display_mode {int type; int height_mm; int width_mm; } ;
struct TYPE_7__ {int vrefresh; int vdisplay; int hdisplay; } ;
struct TYPE_5__ {int height_mm; int width_mm; } ;
struct TYPE_6__ {TYPE_1__ display_info; } ;


 int FUNC_0 (char*,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__ VAR_3 ;
 struct drm_display_mode* FUNC_1 (int ,TYPE_3__*) ;
 int FUNC_2 (TYPE_2__*,struct drm_display_mode*) ;
 int FUNC_3 (struct drm_display_mode*) ;

__attribute__((used)) static int FUNC_4(struct drm_panel *VAR_4)
{
 struct drm_display_mode *VAR_5;

 VAR_5 = FUNC_1(VAR_4->drm, &VAR_3);
 if (!VAR_5) {
  FUNC_0("failed to add mode %ux%ux@%u\n",
     VAR_3.hdisplay, VAR_3.vdisplay,
     VAR_3.vrefresh);
  return -VAR_2;
 }

 FUNC_3(VAR_5);

 VAR_5->type = VAR_0 | VAR_1;
 FUNC_2(VAR_4->connector, VAR_5);

 VAR_4->connector->display_info.width_mm = VAR_5->width_mm;
 VAR_4->connector->display_info.height_mm = VAR_5->height_mm;

 return 1;
}
