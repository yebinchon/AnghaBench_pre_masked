
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_display_mode {int flags; int hdisplay; int vdisplay; } ;
typedef enum drm_mode_status { ____Placeholder_drm_mode_status } drm_mode_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

enum drm_mode_status
FUNC_0(const struct drm_display_mode *VAR_8)
{
 if (VAR_8->flags & ~(VAR_2 | VAR_0 |
       VAR_3 | VAR_1))
  return VAR_4;

 if (VAR_8->hdisplay < 640 || VAR_8->hdisplay > 1920)
  return VAR_5;

 if (VAR_8->vdisplay < 480 || VAR_8->vdisplay > 1200)
  return VAR_6;

 return VAR_7;
}
