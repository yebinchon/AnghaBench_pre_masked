
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sdvo_device_mapping {int initialized; int dvo_port; scalar_t__ slave_addr; int i2c_pin; int ddc_pin; int dvo_wiring; } ;
struct TYPE_2__ {int child_dev_num; struct sdvo_device_mapping* sdvo_mappings; struct child_device_config* child_dev; } ;
struct drm_i915_private {TYPE_1__ vbt; } ;
struct child_device_config {scalar_t__ slave_addr; int dvo_port; scalar_t__ slave2_addr; int i2c_pin; int ddc_pin; int dvo_wiring; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct drm_i915_private*,int,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void
FUNC_2(struct drm_i915_private *VAR_4, u8 VAR_5)
{
 struct sdvo_device_mapping *VAR_6;
 const struct child_device_config *VAR_7;
 int VAR_8, VAR_9 = 0;





 if (!FUNC_1(VAR_4, 3, 7)) {
  FUNC_0("Skipping SDVO device mapping\n");
  return;
 }

 for (VAR_8 = 0, VAR_9 = 0; VAR_8 < VAR_4->vbt.child_dev_num; VAR_8++) {
  VAR_7 = VAR_4->vbt.child_dev + VAR_8;

  if (VAR_7->slave_addr != VAR_2 &&
      VAR_7->slave_addr != VAR_3) {




   continue;
  }
  if (VAR_7->dvo_port != VAR_0 &&
      VAR_7->dvo_port != VAR_1) {

   FUNC_0("Incorrect SDVO port. Skip it\n");
   continue;
  }
  FUNC_0("the SDVO device with slave addr %2x is found on"
         " %s port\n",
         VAR_7->slave_addr,
         (VAR_7->dvo_port == VAR_0) ?
         "SDVOB" : "SDVOC");
  VAR_6 = &VAR_4->vbt.sdvo_mappings[VAR_7->dvo_port - 1];
  if (!VAR_6->initialized) {
   VAR_6->dvo_port = VAR_7->dvo_port;
   VAR_6->slave_addr = VAR_7->slave_addr;
   VAR_6->dvo_wiring = VAR_7->dvo_wiring;
   VAR_6->ddc_pin = VAR_7->ddc_pin;
   VAR_6->i2c_pin = VAR_7->i2c_pin;
   VAR_6->initialized = 1;
   FUNC_0("SDVO device: dvo=%x, addr=%x, wiring=%d, ddc_pin=%d, i2c_pin=%d\n",
          VAR_6->dvo_port,
          VAR_6->slave_addr,
          VAR_6->dvo_wiring,
          VAR_6->ddc_pin,
          VAR_6->i2c_pin);
  } else {
   FUNC_0("Maybe one SDVO port is shared by "
      "two SDVO device.\n");
  }
  if (VAR_7->slave2_addr) {


   FUNC_0("there exists the slave2_addr. Maybe this"
    " is a SDVO device with multiple inputs.\n");
  }
  VAR_9++;
 }

 if (!VAR_9) {

  FUNC_0("No SDVO device info is found in VBT\n");
 }
}
