
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct drm_panel {struct drm_connector* connector; TYPE_2__* drm; } ;
struct drm_display_mode {int type; } ;
struct TYPE_5__ {int width_mm; int height_mm; } ;
struct drm_connector {TYPE_1__ display_info; } ;
struct TYPE_7__ {int vrefresh; int vdisplay; int hdisplay; } ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__ VAR_3 ;
 int FUNC_0 (int ,char*,int ,int ,int ) ;
 struct drm_display_mode* FUNC_1 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_2 (struct drm_connector*,struct drm_display_mode*) ;
 int FUNC_3 (struct drm_display_mode*) ;

__attribute__((used)) static int FUNC_4(struct drm_panel *VAR_4)
{
 struct drm_connector *VAR_5 = VAR_4->connector;
 struct drm_display_mode *VAR_6;

 VAR_6 = FUNC_1(VAR_4->drm, &VAR_3);
 if (!VAR_6) {
  FUNC_0(VAR_4->drm->dev, "failed to add mode %ux%ux@%u\n",
   VAR_3.hdisplay, VAR_3.vdisplay,
   VAR_3.vrefresh);
  return -VAR_2;
 }

 FUNC_3(VAR_6);

 VAR_6->type = VAR_0 | VAR_1;
 FUNC_2(VAR_5, VAR_6);

 VAR_4->connector->display_info.width_mm = 61;
 VAR_4->connector->display_info.height_mm = 103;

 return 1;
}
