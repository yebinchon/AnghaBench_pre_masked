
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {scalar_t__ vbt; } ;
struct TYPE_4__ {int child_dev_num; struct child_device_config* child_dev; } ;
struct drm_i915_private {TYPE_1__ opregion; TYPE_2__ vbt; } ;
struct child_device_config {scalar_t__ device_type; scalar_t__ addin_offset; int i2c_pin; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct drm_i915_private*,int ) ;

bool FUNC_1(struct drm_i915_private *VAR_2, u8 *VAR_3)
{
 const struct child_device_config *VAR_4;
 int VAR_5;

 if (!VAR_2->vbt.child_dev_num)
  return 1;

 for (VAR_5 = 0; VAR_5 < VAR_2->vbt.child_dev_num; VAR_5++) {
  VAR_4 = VAR_2->vbt.child_dev + VAR_5;





  if (VAR_4->device_type != VAR_0 &&
      VAR_4->device_type != VAR_1)
   continue;

  if (FUNC_0(VAR_2, VAR_4->i2c_pin))
   *VAR_3 = VAR_4->i2c_pin;






  if (VAR_4->addin_offset)
   return 1;






  if (VAR_2->opregion.vbt)
   return 1;
 }

 return 0;
}
