
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_display_mode {int clock; int flags; } ;
struct drm_connector {int dummy; } ;
typedef enum drm_mode_status { ____Placeholder_drm_mode_status } drm_mode_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static enum drm_mode_status FUNC_0(struct drm_connector *VAR_6,
     struct drm_display_mode *VAR_7)
{
 if (VAR_7->clock > 165000)
  return VAR_2;
 if (VAR_7->clock < 20000)
  return VAR_2;


 if (VAR_7->flags & VAR_0)
  return VAR_3;


 if (VAR_7->flags & VAR_1)
  return VAR_4;

 return VAR_5;
}
