
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct lcd_olinuxino_mode {int refresh; scalar_t__ vbp; scalar_t__ vpw; scalar_t__ vfp; scalar_t__ vactive; scalar_t__ hbp; scalar_t__ hpw; scalar_t__ hfp; scalar_t__ hactive; int pixelclock; } ;
struct lcd_olinuxino_info {int bus_flag; scalar_t__ bus_format; int bpc; int height_mm; int width_mm; } ;
struct TYPE_5__ {int num_modes; int * reserved; struct lcd_olinuxino_info info; } ;
struct TYPE_4__ {struct drm_device* drm; struct drm_connector* connector; } ;
struct lcd_olinuxino {TYPE_2__ eeprom; TYPE_1__ panel; } ;
struct drm_panel {int dummy; } ;
struct drm_display_mode {int type; int vrefresh; scalar_t__ vtotal; scalar_t__ vsync_end; scalar_t__ vsync_start; scalar_t__ vdisplay; scalar_t__ htotal; scalar_t__ hsync_end; scalar_t__ hsync_start; scalar_t__ hdisplay; int clock; } ;
struct drm_device {int dev; } ;
struct TYPE_6__ {int bus_flags; int bpc; int height_mm; int width_mm; } ;
struct drm_connector {TYPE_3__ display_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,scalar_t__,scalar_t__,int ) ;
 int FUNC_1 (TYPE_3__*,scalar_t__*,int) ;
 struct drm_display_mode* FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct drm_connector*,struct drm_display_mode*) ;
 int FUNC_4 (struct drm_display_mode*) ;
 struct lcd_olinuxino* FUNC_5 (struct drm_panel*) ;

__attribute__((used)) static int FUNC_6(struct drm_panel *VAR_2)
{
 struct lcd_olinuxino *VAR_3 = FUNC_5(VAR_2);
 struct drm_connector *VAR_4 = VAR_3->panel.connector;
 struct lcd_olinuxino_info *VAR_5 = &VAR_3->eeprom.info;
 struct drm_device *VAR_6 = VAR_3->panel.drm;
 struct lcd_olinuxino_mode *VAR_7;
 struct drm_display_mode *VAR_8;
 u32 VAR_9, VAR_10 = 0;

 for (VAR_9 = 0; VAR_9 < VAR_3->eeprom.num_modes; VAR_9++) {
  VAR_7 = (struct lcd_olinuxino_mode *)
      &VAR_3->eeprom.reserved[VAR_9 * sizeof(*VAR_7)];

  VAR_8 = FUNC_2(VAR_6);
  if (!VAR_8) {
   FUNC_0(VAR_6->dev, "failed to add mode %ux%u@%u\n",
    VAR_7->hactive,
    VAR_7->vactive,
    VAR_7->refresh);
    continue;
  }

  VAR_8->clock = VAR_7->pixelclock;
  VAR_8->hdisplay = VAR_7->hactive;
  VAR_8->hsync_start = VAR_7->hactive + VAR_7->hfp;
  VAR_8->hsync_end = VAR_7->hactive + VAR_7->hfp +
      VAR_7->hpw;
  VAR_8->htotal = VAR_7->hactive + VAR_7->hfp +
          VAR_7->hpw + VAR_7->hbp;
  VAR_8->vdisplay = VAR_7->vactive;
  VAR_8->vsync_start = VAR_7->vactive + VAR_7->vfp;
  VAR_8->vsync_end = VAR_7->vactive + VAR_7->vfp +
      VAR_7->vpw;
  VAR_8->vtotal = VAR_7->vactive + VAR_7->vfp +
          VAR_7->vpw + VAR_7->vbp;
  VAR_8->vrefresh = VAR_7->refresh;


  if (VAR_9 == 0)
   VAR_8->type |= VAR_1;
  VAR_8->type |= VAR_0;

  FUNC_4(VAR_8);
  FUNC_3(VAR_4, VAR_8);

  VAR_10++;
 }

 VAR_4->display_info.width_mm = VAR_5->width_mm;
 VAR_4->display_info.height_mm = VAR_5->height_mm;
 VAR_4->display_info.bpc = VAR_5->bpc;

 if (VAR_5->bus_format)
  FUNC_1(&VAR_4->display_info,
       &VAR_5->bus_format, 1);
 VAR_4->display_info.bus_flags = VAR_5->bus_flag;

 return VAR_10;
}
