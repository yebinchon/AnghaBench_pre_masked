
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int last_slot_field; void* tipswitch; void* id; void* height; void* width; void* y; void* x; } ;
struct wacom_features {void* touch_max; } ;
struct wacom_wac {int is_invalid_bt_frame; int touch_input; TYPE_1__ hid_data; struct wacom_features features; } ;
struct wacom {struct wacom_wac wacom_wac; } ;
struct hid_usage {scalar_t__ usage_index; int hid; } ;
struct hid_field {scalar_t__ report_count; } ;
struct hid_device {int dummy; } ;
typedef void* __s32 ;
 struct wacom* FUNC_0 (struct hid_device*) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (struct wacom_wac*,int ) ;

__attribute__((used)) static void FUNC_3(struct hid_device *VAR_0,
  struct hid_field *VAR_1, struct hid_usage *VAR_2, __s32 VAR_3)
{
 struct wacom *VAR_4 = FUNC_0(VAR_0);
 struct wacom_wac *VAR_5 = &VAR_4->wacom_wac;
 unsigned VAR_6 = FUNC_1(VAR_2->hid);
 struct wacom_features *VAR_7 = &VAR_4->wacom_wac.features;

 if (VAR_5->is_invalid_bt_frame)
  return;

 switch (VAR_6) {
 case 130:
  VAR_5->hid_data.x = VAR_3;
  break;
 case 129:
  VAR_5->hid_data.y = VAR_3;
  break;
 case 131:
  VAR_5->hid_data.width = VAR_3;
  break;
 case 133:
  VAR_5->hid_data.height = VAR_3;
  break;
 case 135:
  VAR_5->hid_data.id = VAR_3;
  break;
 case 132:
  VAR_5->hid_data.tipswitch = VAR_3;
  break;
 case 128:
  VAR_5->is_invalid_bt_frame = !VAR_3;
  return;
 case 134:
  VAR_7->touch_max = VAR_3;
  return;
 }

 if (VAR_2->usage_index + 1 == VAR_1->report_count) {
  if (VAR_6 == VAR_5->hid_data.last_slot_field)
   FUNC_2(VAR_5, VAR_5->touch_input);
 }
}
