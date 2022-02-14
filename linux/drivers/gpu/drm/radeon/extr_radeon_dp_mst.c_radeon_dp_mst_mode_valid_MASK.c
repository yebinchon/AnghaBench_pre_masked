
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

__attribute__((used)) static enum drm_mode_status
FUNC_0(struct drm_connector *VAR_4,
   struct drm_display_mode *VAR_5)
{

 if (VAR_5->clock < 10000)
  return VAR_1;

 if (VAR_5->flags & VAR_0)
  return VAR_2;

 return VAR_3;
}
