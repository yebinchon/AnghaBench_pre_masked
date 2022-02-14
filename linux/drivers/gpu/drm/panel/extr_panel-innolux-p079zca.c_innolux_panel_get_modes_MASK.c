
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct innolux_panel {TYPE_3__* desc; } ;
struct drm_panel {TYPE_4__* connector; TYPE_5__* drm; } ;
struct drm_display_mode {int vrefresh; int vdisplay; int hdisplay; } ;
struct TYPE_10__ {int dev; } ;
struct TYPE_7__ {int bpc; int height_mm; int width_mm; } ;
struct TYPE_9__ {TYPE_2__ display_info; } ;
struct TYPE_6__ {int height; int width; } ;
struct TYPE_8__ {int bpc; TYPE_1__ size; struct drm_display_mode* mode; } ;


 int FUNC_0 (int ,char*,int ,int ,int ) ;
 int VAR_0 ;
 struct drm_display_mode* FUNC_1 (TYPE_5__*,struct drm_display_mode const*) ;
 int FUNC_2 (TYPE_4__*,struct drm_display_mode*) ;
 int FUNC_3 (struct drm_display_mode*) ;
 struct innolux_panel* FUNC_4 (struct drm_panel*) ;

__attribute__((used)) static int FUNC_5(struct drm_panel *VAR_1)
{
 struct innolux_panel *VAR_2 = FUNC_4(VAR_1);
 const struct drm_display_mode *VAR_3 = VAR_2->desc->mode;
 struct drm_display_mode *VAR_4;

 VAR_4 = FUNC_1(VAR_1->drm, VAR_3);
 if (!VAR_4) {
  FUNC_0(VAR_1->drm->dev, "failed to add mode %ux%ux@%u\n",
         VAR_3->hdisplay, VAR_3->vdisplay, VAR_3->vrefresh);
  return -VAR_0;
 }

 FUNC_3(VAR_4);

 FUNC_2(VAR_1->connector, VAR_4);

 VAR_1->connector->display_info.width_mm =
   VAR_2->desc->size.width;
 VAR_1->connector->display_info.height_mm =
   VAR_2->desc->size.height;
 VAR_1->connector->display_info.bpc = VAR_2->desc->bpc;

 return 1;
}
