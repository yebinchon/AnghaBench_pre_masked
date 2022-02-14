
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_display_mode {int hdisplay; int vdisplay; } ;
typedef enum drm_mode_status { ____Placeholder_drm_mode_status } drm_mode_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

enum drm_mode_status
FUNC_0(const struct drm_display_mode *VAR_3,
         int VAR_4, int VAR_5)
{
 if (VAR_4 > 0 && VAR_3->hdisplay > VAR_4)
  return VAR_1;

 if (VAR_5 > 0 && VAR_3->vdisplay > VAR_5)
  return VAR_2;

 return VAR_0;
}
