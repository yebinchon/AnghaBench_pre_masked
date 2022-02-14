
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; scalar_t__ use_for_apm; int type; int get_property; int num_properties; int properties; } ;
struct sony_sc {int battery_capacity; int battery; TYPE_1__ battery_desc; int device_id; int mac_address; struct hid_device* hdev; } ;
struct power_supply_config {struct sony_sc* drv_data; } ;
struct hid_device {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,char const*,int ,int ) ;
 int FUNC_4 (int *,TYPE_1__*,struct power_supply_config*) ;
 int FUNC_5 (struct hid_device*,char*) ;
 int FUNC_6 (int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_7(struct sony_sc *VAR_5, int VAR_6)
{
 const char *VAR_7 = VAR_6 ?
  "sony_controller_battery_%pMR_%i" :
  "sony_controller_battery_%pMR";
 struct power_supply_config VAR_8 = { .drv_data = VAR_5, };
 struct hid_device *VAR_9 = VAR_5->hdev;
 int VAR_10;





 VAR_5->battery_capacity = 100;

 VAR_5->battery_desc.properties = VAR_4;
 VAR_5->battery_desc.num_properties = FUNC_0(VAR_4);
 VAR_5->battery_desc.get_property = VAR_3;
 VAR_5->battery_desc.type = VAR_2;
 VAR_5->battery_desc.use_for_apm = 0;
 VAR_5->battery_desc.name = FUNC_3(&VAR_9->dev, VAR_1,
       VAR_7, VAR_5->mac_address, VAR_5->device_id);
 if (!VAR_5->battery_desc.name)
  return -VAR_0;

 VAR_5->battery = FUNC_4(&VAR_9->dev, &VAR_5->battery_desc,
         &VAR_8);
 if (FUNC_1(VAR_5->battery)) {
  VAR_10 = FUNC_2(VAR_5->battery);
  FUNC_5(VAR_9, "Unable to register battery device\n");
  return VAR_10;
 }

 FUNC_6(VAR_5->battery, &VAR_9->dev);
 return 0;
}
