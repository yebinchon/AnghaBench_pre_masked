
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_display_mode {int clock; } ;
struct adv7511 {int dummy; } ;
typedef enum drm_mode_status { ____Placeholder_drm_mode_status } drm_mode_status ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static enum drm_mode_status FUNC_0(struct adv7511 *VAR_2,
         struct drm_display_mode *VAR_3)
{
 if (VAR_3->clock > 165000)
  return VAR_0;

 return VAR_1;
}
