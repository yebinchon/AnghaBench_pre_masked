
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_display_mode {int clock; } ;
struct drm_device {struct amdgpu_device* dev_private; } ;
struct drm_connector {struct drm_device* dev; } ;
struct TYPE_2__ {int max_pixel_clock; } ;
struct amdgpu_device {TYPE_1__ clock; } ;
struct amdgpu_connector {scalar_t__ connector_object_id; scalar_t__ use_digital; } ;
typedef enum drm_mode_status { ____Placeholder_drm_mode_status } drm_mode_status ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct drm_connector*) ;
 scalar_t__ FUNC_1 (int ) ;
 struct amdgpu_connector* FUNC_2 (struct drm_connector*) ;

__attribute__((used)) static enum drm_mode_status FUNC_3(struct drm_connector *VAR_5,
         struct drm_display_mode *VAR_6)
{
 struct drm_device *VAR_7 = VAR_5->dev;
 struct amdgpu_device *VAR_8 = VAR_7->dev_private;
 struct amdgpu_connector *VAR_9 = FUNC_2(VAR_5);



 if (VAR_9->use_digital && (VAR_6->clock > 165000)) {
  if ((VAR_9->connector_object_id == VAR_1) ||
      (VAR_9->connector_object_id == VAR_0) ||
      (VAR_9->connector_object_id == VAR_2)) {
   return VAR_4;
  } else if (FUNC_1(FUNC_0(VAR_5))) {

   if (VAR_6->clock > 340000)
    return VAR_3;
   else
    return VAR_4;
  } else {
   return VAR_3;
  }
 }


 if ((VAR_6->clock / 10) > VAR_8->clock.max_pixel_clock)
  return VAR_3;

 return VAR_4;
}
