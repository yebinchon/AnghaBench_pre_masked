
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdvo_device_mapping {int ddc_pin; scalar_t__ initialized; } ;
struct intel_sdvo {scalar_t__ port; int ddc_bus; } ;
struct TYPE_2__ {struct sdvo_device_mapping* sdvo_mappings; } ;
struct drm_i915_private {TYPE_1__ vbt; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct intel_sdvo*) ;

__attribute__((used)) static void
FUNC_1(struct drm_i915_private *VAR_1,
     struct intel_sdvo *VAR_2)
{
 struct sdvo_device_mapping *VAR_3;

 if (VAR_2->port == VAR_0)
  VAR_3 = &VAR_1->vbt.sdvo_mappings[0];
 else
  VAR_3 = &VAR_1->vbt.sdvo_mappings[1];

 if (VAR_3->initialized)
  VAR_2->ddc_bus = 1 << ((VAR_3->ddc_pin & 0xf0) >> 4);
 else
  FUNC_0(VAR_2);
}
