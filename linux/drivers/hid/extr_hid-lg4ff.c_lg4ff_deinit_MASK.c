
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lg_drv_data {struct lg4ff_device_entry* device_props; } ;
struct TYPE_2__ {struct lg4ff_device_entry** led; scalar_t__ alternate_modes; } ;
struct lg4ff_device_entry {TYPE_1__ wdata; } ;
struct led_classdev {TYPE_1__ wdata; } ;
struct hid_device {int dev; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct hid_device*,char*) ;
 struct lg_drv_data* FUNC_3 (struct hid_device*) ;
 int FUNC_4 (struct lg4ff_device_entry*) ;
 int FUNC_5 (struct lg4ff_device_entry*) ;

int FUNC_6(struct hid_device *VAR_4)
{
 struct lg4ff_device_entry *VAR_5;
 struct lg_drv_data *VAR_6;

 VAR_6 = FUNC_3(VAR_4);
 if (!VAR_6) {
  FUNC_2(VAR_4, "Error while deinitializing device, no private driver data.\n");
  return -1;
 }
 VAR_5 = VAR_6->device_props;
 if (!VAR_5)
  goto out;


 if (VAR_5->wdata.alternate_modes) {
  FUNC_1(&VAR_4->dev, &VAR_3);
  FUNC_1(&VAR_4->dev, &VAR_0);
 }

 FUNC_1(&VAR_4->dev, &VAR_1);
 FUNC_1(&VAR_4->dev, &VAR_2);
 VAR_6->device_props = ((void*)0);

 FUNC_4(VAR_5);
out:
 FUNC_0("Device successfully unregistered\n");
 return 0;
}
