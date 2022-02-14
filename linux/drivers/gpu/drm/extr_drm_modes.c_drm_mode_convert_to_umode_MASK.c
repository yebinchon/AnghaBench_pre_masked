
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_mode_modeinfo {scalar_t__ hdisplay; scalar_t__ hsync_start; scalar_t__ hsync_end; scalar_t__ htotal; scalar_t__ hskew; scalar_t__ vdisplay; scalar_t__ vsync_start; scalar_t__ vsync_end; scalar_t__ vtotal; scalar_t__ vscan; scalar_t__* name; int flags; int type; int vrefresh; int clock; } ;
struct drm_display_mode {scalar_t__ hdisplay; scalar_t__ hsync_start; scalar_t__ hsync_end; scalar_t__ htotal; scalar_t__ hskew; scalar_t__ vdisplay; scalar_t__ vsync_start; scalar_t__ vsync_end; scalar_t__ vtotal; scalar_t__ vscan; int picture_aspect_ratio; int name; int type; int flags; int vrefresh; int clock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;





 scalar_t__ VAR_6 ;
 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (scalar_t__*,int ,int) ;

void FUNC_2(struct drm_mode_modeinfo *VAR_7,
          const struct drm_display_mode *VAR_8)
{
 FUNC_0(VAR_8->hdisplay > VAR_6 || VAR_8->hsync_start > VAR_6 ||
      VAR_8->hsync_end > VAR_6 || VAR_8->htotal > VAR_6 ||
      VAR_8->hskew > VAR_6 || VAR_8->vdisplay > VAR_6 ||
      VAR_8->vsync_start > VAR_6 || VAR_8->vsync_end > VAR_6 ||
      VAR_8->vtotal > VAR_6 || VAR_8->vscan > VAR_6,
      "timing values too large for mode info\n");

 VAR_7->clock = VAR_8->clock;
 VAR_7->hdisplay = VAR_8->hdisplay;
 VAR_7->hsync_start = VAR_8->hsync_start;
 VAR_7->hsync_end = VAR_8->hsync_end;
 VAR_7->htotal = VAR_8->htotal;
 VAR_7->hskew = VAR_8->hskew;
 VAR_7->vdisplay = VAR_8->vdisplay;
 VAR_7->vsync_start = VAR_8->vsync_start;
 VAR_7->vsync_end = VAR_8->vsync_end;
 VAR_7->vtotal = VAR_8->vtotal;
 VAR_7->vscan = VAR_8->vscan;
 VAR_7->vrefresh = VAR_8->vrefresh;
 VAR_7->flags = VAR_8->flags;
 VAR_7->type = VAR_8->type;

 switch (VAR_8->picture_aspect_ratio) {
 case 130:
  VAR_7->flags |= VAR_3;
  break;
 case 132:
  VAR_7->flags |= VAR_1;
  break;
 case 129:
  VAR_7->flags |= VAR_4;
  break;
 case 131:
  VAR_7->flags |= VAR_2;
  break;
 default:
  FUNC_0(1, "Invalid aspect ratio (0%x) on mode\n",
       VAR_8->picture_aspect_ratio);

 case 128:
  VAR_7->flags |= VAR_5;
  break;
 }

 FUNC_1(VAR_7->name, VAR_8->name, VAR_0);
 VAR_7->name[VAR_0-1] = 0;
}
