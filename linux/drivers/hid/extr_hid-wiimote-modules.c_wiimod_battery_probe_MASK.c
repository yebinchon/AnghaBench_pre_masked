
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * name; scalar_t__ use_for_apm; int type; int get_property; int num_properties; int properties; } ;
struct wiimote_data {TYPE_1__ battery_desc; TYPE_2__* hdev; int battery; } ;
struct wiimod_ops {int dummy; } ;
struct power_supply_config {struct wiimote_data* drv_data; } ;
struct TYPE_4__ {int dev; int uniq; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,char*) ;
 int * FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int *,TYPE_1__*,struct power_supply_config*) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_8(const struct wiimod_ops *VAR_5,
    struct wiimote_data *VAR_6)
{
 struct power_supply_config VAR_7 = { .drv_data = VAR_6, };
 int VAR_8;

 VAR_6->battery_desc.properties = VAR_4;
 VAR_6->battery_desc.num_properties = FUNC_0(VAR_4);
 VAR_6->battery_desc.get_property = VAR_3;
 VAR_6->battery_desc.type = VAR_2;
 VAR_6->battery_desc.use_for_apm = 0;
 VAR_6->battery_desc.name = FUNC_4(VAR_1, "wiimote_battery_%s",
          VAR_6->hdev->uniq);
 if (!VAR_6->battery_desc.name)
  return -VAR_0;

 VAR_6->battery = FUNC_7(&VAR_6->hdev->dev,
            &VAR_6->battery_desc,
            &VAR_7);
 if (FUNC_1(VAR_6->battery)) {
  FUNC_3(VAR_6->hdev, "cannot register battery device\n");
  VAR_8 = FUNC_2(VAR_6->battery);
  goto err_free;
 }

 FUNC_6(VAR_6->battery, &VAR_6->hdev->dev);
 return 0;

err_free:
 FUNC_5(VAR_6->battery_desc.name);
 VAR_6->battery_desc.name = ((void*)0);
 return VAR_8;
}
