
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sdvo_device_mapping {int initialized; int dvo_port; scalar_t__ slave_addr; int i2c_pin; int ddc_pin; int dvo_wiring; } ;
struct drm_psb_private {struct sdvo_device_mapping* sdvo_mappings; } ;
struct child_device_config {scalar_t__ slave_addr; int dvo_port; scalar_t__ slave2_addr; int i2c_pin; int ddc_pin; int dvo_wiring; int device_type; } ;
struct bdb_header {int dummy; } ;
struct bdb_general_definitions {int child_dev_size; struct child_device_config* devices; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct bdb_general_definitions* FUNC_1 (struct bdb_header*,int ) ;
 int FUNC_2 (struct bdb_general_definitions*) ;

__attribute__((used)) static void
FUNC_3(struct drm_psb_private *VAR_5,
     struct bdb_header *VAR_6)
{
 struct sdvo_device_mapping *VAR_7;
 struct bdb_general_definitions *VAR_8;
 struct child_device_config *VAR_9;
 int VAR_10, VAR_11, VAR_12;
 u16 VAR_13;

 VAR_8 = FUNC_1(VAR_6, VAR_0);
 if (!VAR_8) {
  FUNC_0("No general definition block is found, unable to construct sdvo mapping.\n");
  return;
 }





 if (VAR_8->child_dev_size != sizeof(*VAR_9)) {

  FUNC_0("different child size is found. Invalid.\n");
  return;
 }

 VAR_13 = FUNC_2(VAR_8);

 VAR_11 = (VAR_13 - sizeof(*VAR_8)) /
    sizeof(*VAR_9);
 VAR_12 = 0;
 for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++) {
  VAR_9 = &(VAR_8->devices[VAR_10]);
  if (!VAR_9->device_type) {

   continue;
  }
  if (VAR_9->slave_addr != VAR_3 &&
   VAR_9->slave_addr != VAR_4) {




   continue;
  }
  if (VAR_9->dvo_port != VAR_1 &&
   VAR_9->dvo_port != VAR_2) {

   FUNC_0("Incorrect SDVO port. Skip it\n");
   continue;
  }
  FUNC_0("the SDVO device with slave addr %2x is found on"
    " %s port\n",
    VAR_9->slave_addr,
    (VAR_9->dvo_port == VAR_1) ?
     "SDVOB" : "SDVOC");
  VAR_7 = &(VAR_5->sdvo_mappings[VAR_9->dvo_port - 1]);
  if (!VAR_7->initialized) {
   VAR_7->dvo_port = VAR_9->dvo_port;
   VAR_7->slave_addr = VAR_9->slave_addr;
   VAR_7->dvo_wiring = VAR_9->dvo_wiring;
   VAR_7->ddc_pin = VAR_9->ddc_pin;
   VAR_7->i2c_pin = VAR_9->i2c_pin;
   VAR_7->initialized = 1;
   FUNC_0("SDVO device: dvo=%x, addr=%x, wiring=%d, ddc_pin=%d, i2c_pin=%d\n",
          VAR_7->dvo_port,
          VAR_7->slave_addr,
          VAR_7->dvo_wiring,
          VAR_7->ddc_pin,
          VAR_7->i2c_pin);
  } else {
   FUNC_0("Maybe one SDVO port is shared by "
      "two SDVO device.\n");
  }
  if (VAR_9->slave2_addr) {


   FUNC_0("there exists the slave2_addr. Maybe this"
    " is a SDVO device with multiple inputs.\n");
  }
  VAR_12++;
 }

 if (!VAR_12) {

  FUNC_0("No SDVO device info is found in VBT\n");
 }
 return;
}
