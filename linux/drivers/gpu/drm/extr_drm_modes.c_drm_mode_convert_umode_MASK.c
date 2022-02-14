
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_mode_modeinfo {scalar_t__ clock; scalar_t__ vrefresh; int flags; int type; int name; int vscan; int vtotal; int vsync_end; int vsync_start; int vdisplay; int hskew; int htotal; int hsync_end; int hsync_start; int hdisplay; } ;
struct drm_display_mode {scalar_t__ clock; scalar_t__ vrefresh; int flags; int type; scalar_t__ status; int picture_aspect_ratio; scalar_t__* name; int vscan; int vtotal; int vsync_end; int vsync_start; int vdisplay; int hskew; int htotal; int hsync_end; int hsync_start; int hdisplay; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (struct drm_display_mode*,int ) ;
 scalar_t__ FUNC_1 (struct drm_device*,struct drm_display_mode*) ;
 int FUNC_2 (scalar_t__*,int ,int) ;

int FUNC_3(struct drm_device *VAR_13,
      struct drm_display_mode *VAR_14,
      const struct drm_mode_modeinfo *VAR_15)
{
 if (VAR_15->clock > VAR_11 || VAR_15->vrefresh > VAR_11)
  return -VAR_5;

 VAR_14->clock = VAR_15->clock;
 VAR_14->hdisplay = VAR_15->hdisplay;
 VAR_14->hsync_start = VAR_15->hsync_start;
 VAR_14->hsync_end = VAR_15->hsync_end;
 VAR_14->htotal = VAR_15->htotal;
 VAR_14->hskew = VAR_15->hskew;
 VAR_14->vdisplay = VAR_15->vdisplay;
 VAR_14->vsync_start = VAR_15->vsync_start;
 VAR_14->vsync_end = VAR_15->vsync_end;
 VAR_14->vtotal = VAR_15->vtotal;
 VAR_14->vscan = VAR_15->vscan;
 VAR_14->vrefresh = VAR_15->vrefresh;
 VAR_14->flags = VAR_15->flags;






 VAR_14->type = VAR_15->type & VAR_3;
 FUNC_2(VAR_14->name, VAR_15->name, VAR_1);
 VAR_14->name[VAR_1-1] = 0;





 VAR_14->flags &= ~VAR_2;

 switch (VAR_15->flags & VAR_2) {
 case 130:
  VAR_14->picture_aspect_ratio = VAR_8;
  break;
 case 132:
  VAR_14->picture_aspect_ratio = VAR_6;
  break;
 case 129:
  VAR_14->picture_aspect_ratio = VAR_9;
  break;
 case 131:
  VAR_14->picture_aspect_ratio = VAR_7;
  break;
 case 128:
  VAR_14->picture_aspect_ratio = VAR_10;
  break;
 default:
  return -VAR_4;
 }

 VAR_14->status = FUNC_1(VAR_13, VAR_14);
 if (VAR_14->status != VAR_12)
  return -VAR_4;

 FUNC_0(VAR_14, VAR_0);

 return 0;
}
