
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int child_dev_num; struct child_device_config* child_dev; int int_tv_support; } ;
struct drm_i915_private {TYPE_1__ vbt; } ;
struct child_device_config {int device_type; scalar_t__ addin_offset; } ;






bool FUNC_0(struct drm_i915_private *VAR_0)
{
 const struct child_device_config *VAR_1;
 int VAR_2;

 if (!VAR_0->vbt.int_tv_support)
  return 0;

 if (!VAR_0->vbt.child_dev_num)
  return 1;

 for (VAR_2 = 0; VAR_2 < VAR_0->vbt.child_dev_num; VAR_2++) {
  VAR_1 = VAR_0->vbt.child_dev + VAR_2;



  switch (VAR_1->device_type) {
  case 130:
  case 129:
  case 128:
   break;
  default:
   continue;
  }



  if (VAR_1->addin_offset)
   return 1;
 }

 return 0;
}
