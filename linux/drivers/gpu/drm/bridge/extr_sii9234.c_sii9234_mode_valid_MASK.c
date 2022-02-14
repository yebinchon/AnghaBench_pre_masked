
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_display_mode {scalar_t__ clock; } ;
struct drm_bridge {int dummy; } ;
typedef enum drm_mode_status { ____Placeholder_drm_mode_status } drm_mode_status ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static enum drm_mode_status FUNC_0(struct drm_bridge *VAR_3,
      const struct drm_display_mode *VAR_4)
{
 if (VAR_4->clock > VAR_0)
  return VAR_1;

 return VAR_2;
}
