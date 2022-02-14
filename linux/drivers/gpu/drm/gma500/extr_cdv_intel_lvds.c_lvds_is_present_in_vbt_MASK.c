
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_2__ {scalar_t__ vbt; } ;
struct drm_psb_private {int child_dev_num; TYPE_1__ opregion; struct child_device_config* child_dev; } ;
struct drm_device {struct drm_psb_private* dev_private; } ;
struct child_device_config {scalar_t__ device_type; scalar_t__ addin_offset; scalar_t__ i2c_pin; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static bool FUNC_0(struct drm_device *VAR_2,
       u8 *VAR_3)
{
 struct drm_psb_private *VAR_4 = VAR_2->dev_private;
 int VAR_5;

 if (!VAR_4->child_dev_num)
  return 1;

 for (VAR_5 = 0; VAR_5 < VAR_4->child_dev_num; VAR_5++) {
  struct child_device_config *VAR_6 = VAR_4->child_dev + VAR_5;





  if (VAR_6->device_type != VAR_0 &&
      VAR_6->device_type != VAR_1)
   continue;

  if (VAR_6->i2c_pin)
      *VAR_3 = VAR_6->i2c_pin;






  if (VAR_6->addin_offset)
   return 1;






  if (VAR_4->opregion.vbt)
   return 1;
 }

 return 0;
}
