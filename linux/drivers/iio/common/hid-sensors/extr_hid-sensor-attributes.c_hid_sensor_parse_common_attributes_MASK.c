
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int value ;
typedef int u32 ;
struct hid_sensor_hub_device {int hdev; } ;
struct hid_sensor_hub_attribute_info {int logical_minimum; scalar_t__ index; scalar_t__ report_id; } ;
struct TYPE_2__ {int report_id; int index; } ;
struct hid_sensor_common {int raw_hystersis; int timestamp_ns_scale; struct hid_sensor_hub_attribute_info power_state; struct hid_sensor_hub_attribute_info sensitivity; struct hid_sensor_hub_attribute_info report_state; TYPE_1__ poll; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,int ,int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,struct hid_sensor_hub_attribute_info*,int*,int*) ;
 int FUNC_2 (struct hid_sensor_hub_device*,int ,struct hid_sensor_common*) ;
 int FUNC_3 (struct hid_sensor_hub_device*,int ,struct hid_sensor_common*) ;
 int FUNC_4 (struct hid_sensor_hub_device*,scalar_t__,scalar_t__,int,scalar_t__*) ;
 int FUNC_5 (struct hid_sensor_hub_device*,int ,int ,int ,struct hid_sensor_hub_attribute_info*) ;

int FUNC_6(struct hid_sensor_hub_device *VAR_7,
     u32 VAR_8,
     struct hid_sensor_common *VAR_9)
{

 struct hid_sensor_hub_attribute_info VAR_10;
 s32 VAR_11;
 int VAR_12;

 FUNC_3(VAR_7, VAR_8, VAR_9);

 FUNC_5(VAR_7,
     VAR_1, VAR_8,
     VAR_3,
     &VAR_9->report_state);

 FUNC_5(VAR_7,
     VAR_1, VAR_8,
     VAR_5,
     &VAR_9->power_state);

 VAR_9->power_state.logical_minimum = 1;
 VAR_9->report_state.logical_minimum = 1;

 FUNC_5(VAR_7,
   VAR_1, VAR_8,
   VAR_4,
    &VAR_9->sensitivity);

 VAR_9->raw_hystersis = -1;

 FUNC_5(VAR_7,
         VAR_2, VAR_8,
         VAR_6,
         &VAR_10);
 if (VAR_10.index >= 0 && VAR_10.report_id) {
  int VAR_13, VAR_14;

  FUNC_1(VAR_6,
     &VAR_10, &VAR_13, &VAR_14);
  VAR_9->timestamp_ns_scale = VAR_13;
 } else
  VAR_9->timestamp_ns_scale = 1000000000;

 FUNC_2(VAR_7, VAR_8, VAR_9);

 FUNC_0(VAR_7->hdev, "common attributes: %x:%x, %x:%x, %x:%x %x:%x %x:%x\n",
  VAR_9->poll.index, VAR_9->poll.report_id,
  VAR_9->report_state.index, VAR_9->report_state.report_id,
  VAR_9->power_state.index, VAR_9->power_state.report_id,
  VAR_9->sensitivity.index, VAR_9->sensitivity.report_id,
  VAR_10.index, VAR_10.report_id);

 VAR_12 = FUNC_4(VAR_7,
    VAR_9->power_state.report_id,
    VAR_9->power_state.index, sizeof(VAR_11), &VAR_11);
 if (VAR_12 < 0)
  return VAR_12;
 if (VAR_11 < 0)
  return -VAR_0;

 return 0;
}
