
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_display_mode {int flags; } ;
typedef enum drm_mode_status { ____Placeholder_drm_mode_status } drm_mode_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static enum drm_mode_status
FUNC_0(const struct drm_display_mode *VAR_7,
         int VAR_8)
{
 if ((VAR_7->flags & VAR_2) &&
     !(VAR_8 & VAR_2))
  return VAR_4;

 if ((VAR_7->flags & VAR_1) &&
     !(VAR_8 & VAR_1))
  return VAR_3;

 if ((VAR_7->flags & VAR_0) &&
     !(VAR_8 & VAR_0))
  return VAR_5;

 return VAR_6;
}
