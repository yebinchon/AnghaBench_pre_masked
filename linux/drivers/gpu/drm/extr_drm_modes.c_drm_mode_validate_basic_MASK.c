
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_display_mode {int type; int flags; scalar_t__ clock; scalar_t__ hdisplay; scalar_t__ hsync_start; scalar_t__ hsync_end; scalar_t__ htotal; scalar_t__ vdisplay; scalar_t__ vsync_start; scalar_t__ vsync_end; scalar_t__ vtotal; } ;
typedef enum drm_mode_status { ____Placeholder_drm_mode_status } drm_mode_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static enum drm_mode_status
FUNC_0(const struct drm_display_mode *VAR_9)
{
 if (VAR_9->type & ~VAR_3)
  return VAR_4;

 if (VAR_9->flags & ~VAR_2)
  return VAR_4;

 if ((VAR_9->flags & VAR_0) > VAR_1)
  return VAR_4;

 if (VAR_9->clock == 0)
  return VAR_5;

 if (VAR_9->hdisplay == 0 ||
     VAR_9->hsync_start < VAR_9->hdisplay ||
     VAR_9->hsync_end < VAR_9->hsync_start ||
     VAR_9->htotal < VAR_9->hsync_end)
  return VAR_6;

 if (VAR_9->vdisplay == 0 ||
     VAR_9->vsync_start < VAR_9->vdisplay ||
     VAR_9->vsync_end < VAR_9->vsync_start ||
     VAR_9->vtotal < VAR_9->vsync_end)
  return VAR_8;

 return VAR_7;
}
