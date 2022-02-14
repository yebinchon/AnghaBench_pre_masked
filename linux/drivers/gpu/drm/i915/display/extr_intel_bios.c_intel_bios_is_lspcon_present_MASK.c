
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* ddi_port_info; } ;
struct drm_i915_private {TYPE_2__ vbt; } ;
struct child_device_config {scalar_t__ lspcon; } ;
typedef enum port { ____Placeholder_port } port ;
struct TYPE_3__ {struct child_device_config* child; } ;


 scalar_t__ FUNC_0 (struct drm_i915_private const*) ;

bool
FUNC_1(const struct drm_i915_private *VAR_0,
        enum port VAR_1)
{
 const struct child_device_config *VAR_2 =
  VAR_0->vbt.ddi_port_info[VAR_1].child;

 return FUNC_0(VAR_0) && VAR_2 && VAR_2->lspcon;
}
