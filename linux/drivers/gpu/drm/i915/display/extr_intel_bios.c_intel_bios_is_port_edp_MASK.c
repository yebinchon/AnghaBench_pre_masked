
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int child_dev_num; struct child_device_config* child_dev; TYPE_1__* ddi_port_info; } ;
struct drm_i915_private {TYPE_2__ vbt; } ;
struct child_device_config {short const dvo_port; int device_type; } ;
typedef enum port { ____Placeholder_port } port ;
struct TYPE_3__ {int supports_edp; } ;


 int VAR_0 ;
 int VAR_1 ;





 scalar_t__ FUNC_0 (struct drm_i915_private*) ;






bool FUNC_1(struct drm_i915_private *VAR_2, enum port VAR_3)
{
 const struct child_device_config *VAR_4;
 static const short VAR_5[] = {
  [132] = 137,
  [131] = 136,
  [130] = 135,
  [129] = 134,
  [128] = 133,
 };
 int VAR_6;

 if (FUNC_0(VAR_2))
  return VAR_2->vbt.ddi_port_info[VAR_3].supports_edp;

 if (!VAR_2->vbt.child_dev_num)
  return 0;

 for (VAR_6 = 0; VAR_6 < VAR_2->vbt.child_dev_num; VAR_6++) {
  VAR_4 = VAR_2->vbt.child_dev + VAR_6;

  if (VAR_4->dvo_port == VAR_5[VAR_3] &&
      (VAR_4->device_type & VAR_1) ==
      (VAR_0 & VAR_1))
   return 1;
 }

 return 0;
}
