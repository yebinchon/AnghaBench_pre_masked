
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_display_mode {int clock; } ;
struct drm_connector {int dummy; } ;
typedef enum drm_mode_status { ____Placeholder_drm_mode_status } drm_mode_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static enum drm_mode_status
FUNC_0(struct drm_connector *VAR_3,
         const struct drm_display_mode *VAR_4)
{
 if (VAR_4->clock < 13500)
  return VAR_1;

 if (VAR_4->clock > 216000)
  return VAR_0;

 return VAR_2;
}
