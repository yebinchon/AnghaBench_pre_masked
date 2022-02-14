
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct shmob_drm_device {TYPE_4__* pdata; } ;
struct drm_display_mode {int type; int flags; int vtotal; int vsync_end; int vsync_start; int vdisplay; int htotal; int hsync_end; int hsync_start; int hdisplay; int clock; } ;
struct TYPE_7__ {int height_mm; int width_mm; } ;
struct drm_connector {TYPE_2__ display_info; TYPE_5__* dev; } ;
struct TYPE_10__ {struct shmob_drm_device* dev_private; } ;
struct TYPE_6__ {int flags; int vtotal; int vsync_end; int vsync_start; int vdisplay; int htotal; int hsync_end; int hsync_start; int hdisplay; int clock; } ;
struct TYPE_8__ {int height_mm; int width_mm; TYPE_1__ mode; } ;
struct TYPE_9__ {TYPE_3__ panel; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct drm_display_mode* FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (struct drm_connector*,struct drm_display_mode*) ;
 int FUNC_2 (struct drm_display_mode*) ;

__attribute__((used)) static int FUNC_3(struct drm_connector *VAR_2)
{
 struct shmob_drm_device *VAR_3 = VAR_2->dev->dev_private;
 struct drm_display_mode *VAR_4;

 VAR_4 = FUNC_0(VAR_2->dev);
 if (VAR_4 == ((void*)0))
  return 0;

 VAR_4->type = VAR_1 | VAR_0;
 VAR_4->clock = VAR_3->pdata->panel.mode.clock;
 VAR_4->hdisplay = VAR_3->pdata->panel.mode.hdisplay;
 VAR_4->hsync_start = VAR_3->pdata->panel.mode.hsync_start;
 VAR_4->hsync_end = VAR_3->pdata->panel.mode.hsync_end;
 VAR_4->htotal = VAR_3->pdata->panel.mode.htotal;
 VAR_4->vdisplay = VAR_3->pdata->panel.mode.vdisplay;
 VAR_4->vsync_start = VAR_3->pdata->panel.mode.vsync_start;
 VAR_4->vsync_end = VAR_3->pdata->panel.mode.vsync_end;
 VAR_4->vtotal = VAR_3->pdata->panel.mode.vtotal;
 VAR_4->flags = VAR_3->pdata->panel.mode.flags;

 FUNC_2(VAR_4);
 FUNC_1(VAR_2, VAR_4);

 VAR_2->display_info.width_mm = VAR_3->pdata->panel.width_mm;
 VAR_2->display_info.height_mm = VAR_3->pdata->panel.height_mm;

 return 1;
}
