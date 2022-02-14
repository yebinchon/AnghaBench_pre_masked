
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct power_supply_config {struct asus_drvdata* drv_data; } ;
struct hid_device {int dev; int uniq; } ;
struct TYPE_2__ {int name; scalar_t__ use_for_apm; int type; int get_property; int num_properties; int properties; } ;
struct asus_drvdata {int battery_in_query; int * battery; TYPE_1__ battery_desc; int battery_next_query; int battery_stat; scalar_t__ battery_capacity; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,char*,int ) ;
 int * FUNC_5 (int *,TYPE_1__*,struct power_supply_config*) ;
 int FUNC_6 (struct hid_device*,char*) ;
 struct asus_drvdata* FUNC_7 (struct hid_device*) ;
 int VAR_6 ;
 int FUNC_8 (int *,int *) ;
 scalar_t__ FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct hid_device *VAR_7)
{
 struct asus_drvdata *VAR_8 = FUNC_7(VAR_7);
 struct power_supply_config VAR_9 = { .drv_data = VAR_8 };
 int VAR_10 = 0;

 VAR_8->battery_capacity = 0;
 VAR_8->battery_stat = VAR_2;
 VAR_8->battery_in_query = 0;

 VAR_8->battery_desc.properties = VAR_5;
 VAR_8->battery_desc.num_properties = FUNC_0(VAR_5);
 VAR_8->battery_desc.get_property = VAR_4;
 VAR_8->battery_desc.type = VAR_3;
 VAR_8->battery_desc.use_for_apm = 0;
 VAR_8->battery_desc.name = FUNC_4(&VAR_7->dev, VAR_1,
     "asus-keyboard-%s-battery",
     FUNC_9(VAR_7->uniq) ?
     VAR_7->uniq : FUNC_3(&VAR_7->dev));
 if (!VAR_8->battery_desc.name)
  return -VAR_0;

 VAR_8->battery_next_query = VAR_6;

 VAR_8->battery = FUNC_5(&VAR_7->dev,
    &(VAR_8->battery_desc), &VAR_9);
 if (FUNC_1(VAR_8->battery)) {
  VAR_10 = FUNC_2(VAR_8->battery);
  VAR_8->battery = ((void*)0);
  FUNC_6(VAR_7, "Unable to register battery device\n");
  return VAR_10;
 }

 FUNC_8(VAR_8->battery, &VAR_7->dev);

 return VAR_10;
}
