
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int inrange_state; int pad_input_event_flag; } ;
struct wacom_features {int numbered_buttons; } ;
struct wacom_wac {int is_direct_mode; TYPE_3__ hid_data; TYPE_1__* shared; struct wacom_features features; struct input_dev* pad_input; } ;
struct TYPE_5__ {int count; } ;
struct wacom {TYPE_2__ led; struct wacom_wac wacom_wac; } ;
struct input_dev {int dummy; } ;
struct hid_usage {scalar_t__ hid; int code; int type; } ;
struct hid_field {scalar_t__ physical; int logical_maximum; } ;
struct hid_device {int vendor; int product; } ;
typedef int __s32 ;
struct TYPE_4__ {int is_touch_on; int touch_input; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;






 int VAR_2 ;
 struct wacom* FUNC_0 (struct hid_device*) ;
 int FUNC_1 (struct input_dev*,int ,int ,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ) ;
 unsigned int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct input_dev*,struct hid_usage*,int,int,int) ;
 int FUNC_6 (struct wacom_wac*,int ) ;
 int FUNC_7 (struct wacom*,int ,int,int) ;

__attribute__((used)) static void FUNC_8(struct hid_device *VAR_3, struct hid_field *VAR_4,
  struct hid_usage *VAR_5, __s32 VAR_6)
{
 struct wacom *VAR_7 = FUNC_0(VAR_3);
 struct wacom_wac *VAR_8 = &VAR_7->wacom_wac;
 struct input_dev *VAR_9 = VAR_8->pad_input;
 struct wacom_features *VAR_10 = &VAR_8->features;
 unsigned VAR_11 = FUNC_4(VAR_5->hid);
 int VAR_12;
 bool VAR_13 = 0;





 if (!VAR_5->type && VAR_11 != 132)
  return;

 if (FUNC_4(VAR_4->physical) == VAR_0) {
  if (VAR_5->hid != 129)
   VAR_8->hid_data.inrange_state |= VAR_6;
 }

 switch (VAR_11) {
 case 129:







  if (VAR_3->vendor == 0x56a &&
      (VAR_3->product == 0x34d || VAR_3->product == 0x34e ||
       VAR_3->product == 0x357 || VAR_3->product == 0x358 ||
       VAR_3->product == 0x392 ||
       VAR_3->product == 0x398 || VAR_3->product == 0x399)) {
   VAR_6 = (VAR_4->logical_maximum - VAR_6);

   if (VAR_3->product == 0x357 || VAR_3->product == 0x358 ||
       VAR_3->product == 0x392)
    VAR_6 = FUNC_5(VAR_9, VAR_5, VAR_6, 3, 16);
   else if (VAR_3->product == 0x34d || VAR_3->product == 0x34e ||
     VAR_3->product == 0x398 || VAR_3->product == 0x399)
    VAR_6 = FUNC_5(VAR_9, VAR_5, VAR_6, 1, 2);
  }
  else {
   VAR_6 = FUNC_5(VAR_9, VAR_5, VAR_6, 1, 4);
  }
  VAR_13 = 1;
  break;
 case 128:
  if (!VAR_6)
   FUNC_1(VAR_9, VAR_5->type, VAR_5->code, 0);
  break;

 case 131:
 case 130:
  if (VAR_8->shared->touch_input) {
   bool *VAR_14 = &VAR_8->shared->is_touch_on;

   if (VAR_11 == 131 && VAR_6)
    *VAR_14 = !(*VAR_14);
   else if (VAR_11 == 130)
    *VAR_14 = VAR_6;

   FUNC_2(VAR_8->shared->touch_input,
         VAR_1, !(*VAR_14));
   FUNC_3(VAR_8->shared->touch_input);
  }
  break;

 case 132:
  if (VAR_8->is_direct_mode != VAR_6) {
   VAR_8->is_direct_mode = VAR_6;
   FUNC_6(&VAR_7->wacom_wac, VAR_2);
  }
  break;

 case 133:
  for (VAR_12 = 0; VAR_12 < VAR_7->led.count; VAR_12++)
   FUNC_7(VAR_7, VAR_10->numbered_buttons,
      VAR_6, VAR_12);

 default:
  VAR_13 = 1;
  break;
 }

 if (VAR_13) {
  FUNC_1(VAR_9, VAR_5->type, VAR_5->code, VAR_6);
  if (VAR_6)
   VAR_8->hid_data.pad_input_event_flag = 1;
 }
}
