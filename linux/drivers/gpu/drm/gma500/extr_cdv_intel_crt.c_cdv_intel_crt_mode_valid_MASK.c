
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_display_mode {int flags; int clock; } ;
struct drm_connector {int dummy; } ;
typedef enum drm_mode_status { ____Placeholder_drm_mode_status } drm_mode_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static enum drm_mode_status FUNC_0(struct drm_connector *VAR_5,
    struct drm_display_mode *VAR_6)
{
 if (VAR_6->flags & VAR_0)
  return VAR_3;


 if (VAR_6->clock < 20000)
  return VAR_2;


 if (VAR_6->clock > 355000)
  return VAR_1;

 return VAR_4;
}
