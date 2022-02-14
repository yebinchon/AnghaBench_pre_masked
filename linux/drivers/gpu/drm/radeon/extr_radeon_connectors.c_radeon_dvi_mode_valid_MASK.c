
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int max_pixel_clock; } ;
struct radeon_device {scalar_t__ family; TYPE_1__ clock; } ;
struct radeon_connector {scalar_t__ connector_object_id; scalar_t__ use_digital; } ;
struct drm_display_mode {int clock; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct drm_connector {struct drm_device* dev; } ;
typedef enum drm_mode_status { ____Placeholder_drm_mode_status } drm_mode_status ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct drm_connector*) ;
 struct radeon_connector* FUNC_3 (struct drm_connector*) ;

__attribute__((used)) static enum drm_mode_status FUNC_4(struct drm_connector *VAR_6,
      struct drm_display_mode *VAR_7)
{
 struct drm_device *VAR_8 = VAR_6->dev;
 struct radeon_device *VAR_9 = VAR_8->dev_private;
 struct radeon_connector *VAR_10 = FUNC_3(VAR_6);




 if (VAR_10->use_digital &&
     (VAR_9->family == VAR_0) &&
     (VAR_7->clock > 135000))
  return VAR_4;

 if (VAR_10->use_digital && (VAR_7->clock > 165000)) {
  if ((VAR_10->connector_object_id == VAR_2) ||
      (VAR_10->connector_object_id == VAR_1) ||
      (VAR_10->connector_object_id == VAR_3))
   return VAR_5;
  else if (FUNC_0(VAR_9) && FUNC_1(FUNC_2(VAR_6))) {

   if (VAR_7->clock > 340000)
    return VAR_4;
   else
    return VAR_5;
  } else {
   return VAR_4;
  }
 }


 if ((VAR_7->clock / 10) > VAR_9->clock.max_pixel_clock)
  return VAR_4;

 return VAR_5;
}
