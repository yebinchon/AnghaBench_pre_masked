
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ dual_link; } ;
struct thc63_dev {TYPE_1__ timings; } ;
struct drm_display_mode {unsigned int clock; } ;
struct drm_bridge {int dummy; } ;
typedef enum drm_mode_status { ____Placeholder_drm_mode_status } drm_mode_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct thc63_dev* FUNC_0 (struct drm_bridge*) ;

__attribute__((used)) static enum drm_mode_status FUNC_1(struct drm_bridge *VAR_3,
     const struct drm_display_mode *VAR_4)
{
 struct thc63_dev *VAR_5 = FUNC_0(VAR_3);
 unsigned int VAR_6;
 unsigned int VAR_7;







 if (VAR_5->timings.dual_link) {
  VAR_6 = 40000;
  VAR_7 = 150000;
 } else {
  VAR_6 = 8000;
  VAR_7 = 135000;
 }

 if (VAR_4->clock < VAR_6)
  return VAR_1;

 if (VAR_4->clock > VAR_7)
  return VAR_0;

 return VAR_2;
}
