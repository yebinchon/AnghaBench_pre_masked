
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ili9322 {int input; TYPE_1__* conf; } ;
struct drm_panel {int drm; struct drm_connector* connector; } ;
struct drm_display_mode {int type; int height_mm; int width_mm; int flags; } ;
struct drm_display_info {int bus_flags; int height_mm; int width_mm; } ;
struct drm_connector {struct drm_display_info display_info; } ;
struct TYPE_2__ {int height_mm; int width_mm; scalar_t__ vsync_active_high; scalar_t__ hsync_active_high; scalar_t__ de_active_high; scalar_t__ dclk_active_high; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct drm_display_mode* FUNC_1 (int ,int *) ;
 int FUNC_2 (struct drm_connector*,struct drm_display_mode*) ;
 int FUNC_3 (struct drm_display_mode*) ;
 int VAR_11 ;
 int VAR_12 ;
 struct ili9322* FUNC_4 (struct drm_panel*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;

__attribute__((used)) static int FUNC_5(struct drm_panel *VAR_18)
{
 struct drm_connector *VAR_19 = VAR_18->connector;
 struct ili9322 *VAR_20 = FUNC_4(VAR_18);
 struct drm_display_mode *VAR_21;
 struct drm_display_info *VAR_22;

 VAR_22 = &VAR_19->display_info;
 VAR_22->width_mm = VAR_20->conf->width_mm;
 VAR_22->height_mm = VAR_20->conf->height_mm;
 if (VAR_20->conf->dclk_active_high)
  VAR_22->bus_flags |= VAR_3;
 else
  VAR_22->bus_flags |= VAR_2;

 if (VAR_20->conf->de_active_high)
  VAR_22->bus_flags |= VAR_0;
 else
  VAR_22->bus_flags |= VAR_1;

 switch (VAR_20->input) {
 case 131:
  VAR_21 = FUNC_1(VAR_18->drm, &VAR_14);
  break;
 case 130:
  VAR_21 = FUNC_1(VAR_18->drm, &VAR_15);
  break;
 case 132:
 case 133:
  VAR_21 = FUNC_1(VAR_18->drm, &VAR_13);
  break;
 case 129:
  VAR_21 = FUNC_1(VAR_18->drm, &VAR_16);
  break;
 case 128:
  VAR_21 = FUNC_1(VAR_18->drm, &VAR_17);
  break;
 case 134:
  VAR_21 = FUNC_1(VAR_18->drm, &VAR_12);
  break;
 case 135:
  VAR_21 = FUNC_1(VAR_18->drm, &VAR_11);
  break;
 default:
  VAR_21 = ((void*)0);
  break;
 }
 if (!VAR_21) {
  FUNC_0("bad mode or failed to add mode\n");
  return -VAR_10;
 }
 FUNC_3(VAR_21);




 VAR_21->type = VAR_8 | VAR_9;


 if (VAR_20->conf->hsync_active_high)
  VAR_21->flags |= VAR_6;
 else
  VAR_21->flags |= VAR_4;
 if (VAR_20->conf->vsync_active_high)
  VAR_21->flags |= VAR_7;
 else
  VAR_21->flags |= VAR_5;

 VAR_21->width_mm = VAR_20->conf->width_mm;
 VAR_21->height_mm = VAR_20->conf->height_mm;
 FUNC_2(VAR_19, VAR_21);

 return 1;
}
