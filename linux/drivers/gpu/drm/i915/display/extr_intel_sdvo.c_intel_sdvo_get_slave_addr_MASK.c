
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sdvo_device_mapping {int slave_addr; } ;
struct intel_sdvo {scalar_t__ port; } ;
struct TYPE_2__ {struct sdvo_device_mapping* sdvo_mappings; } ;
struct drm_i915_private {TYPE_1__ vbt; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static u8
FUNC_0(struct drm_i915_private *VAR_1,
     struct intel_sdvo *VAR_2)
{
 struct sdvo_device_mapping *VAR_3, *VAR_4;

 if (VAR_2->port == VAR_0) {
  VAR_3 = &VAR_1->vbt.sdvo_mappings[0];
  VAR_4 = &VAR_1->vbt.sdvo_mappings[1];
 } else {
  VAR_3 = &VAR_1->vbt.sdvo_mappings[1];
  VAR_4 = &VAR_1->vbt.sdvo_mappings[0];
 }


 if (VAR_3->slave_addr)
  return VAR_3->slave_addr;





 if (VAR_4->slave_addr) {
  if (VAR_4->slave_addr == 0x70)
   return 0x72;
  else
   return 0x70;
 }





 if (VAR_2->port == VAR_0)
  return 0x70;
 else
  return 0x72;
}
