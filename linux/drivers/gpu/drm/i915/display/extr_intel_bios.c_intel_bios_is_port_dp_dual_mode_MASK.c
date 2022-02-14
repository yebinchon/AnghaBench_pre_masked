
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int child_dev_num; struct child_device_config* child_dev; } ;
struct drm_i915_private {TYPE_1__ vbt; } ;
struct child_device_config {int dummy; } ;
typedef enum port { ____Placeholder_port } port ;


 scalar_t__ FUNC_0 (struct child_device_config const*,int) ;

bool FUNC_1(struct drm_i915_private *VAR_0,
         enum port VAR_1)
{
 const struct child_device_config *VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->vbt.child_dev_num; VAR_3++) {
  VAR_2 = VAR_0->vbt.child_dev + VAR_3;

  if (FUNC_0(VAR_2, VAR_1))
   return 1;
 }

 return 0;
}
