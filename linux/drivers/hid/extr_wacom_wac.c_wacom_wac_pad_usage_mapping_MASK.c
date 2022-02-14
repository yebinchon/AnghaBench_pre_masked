
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wacom_features {int device_type; int numbered_buttons; } ;
struct wacom_wac {int has_mute_touch_switch; int has_mode_change; int is_direct_mode; struct input_dev* pad_input; struct wacom_features features; } ;
struct wacom {struct wacom_wac wacom_wac; } ;
struct input_dev {int evbit; int propbit; } ;
struct hid_usage {int code; int type; int hid; } ;
struct hid_field {int dummy; } ;
struct hid_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int ,int ) ;
 struct wacom* FUNC_1 (struct hid_device*) ;
 int FUNC_2 (int ,int ) ;
 unsigned int FUNC_3 (int ) ;
 int FUNC_4 (struct input_dev*,struct hid_usage*,struct hid_field*,int ,int ,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct hid_device *VAR_15,
  struct hid_field *VAR_16, struct hid_usage *VAR_17)
{
 struct wacom *VAR_18 = FUNC_1(VAR_15);
 struct wacom_wac *VAR_19 = &VAR_18->wacom_wac;
 struct wacom_features *VAR_20 = &VAR_19->features;
 struct input_dev *VAR_21 = VAR_19->pad_input;
 unsigned VAR_22 = FUNC_3(VAR_17->hid);

 switch (VAR_22) {
 case 147:
  FUNC_0(VAR_9, VAR_21->propbit);
  FUNC_4(VAR_21, VAR_17, VAR_16, VAR_6, VAR_3, 0);
  VAR_20->device_type |= VAR_14;
  break;
 case 146:
  FUNC_0(VAR_9, VAR_21->propbit);
  FUNC_4(VAR_21, VAR_17, VAR_16, VAR_6, VAR_4, 0);
  VAR_20->device_type |= VAR_14;
  break;
 case 145:
  FUNC_0(VAR_9, VAR_21->propbit);
  FUNC_4(VAR_21, VAR_17, VAR_16, VAR_6, VAR_5, 0);
  VAR_20->device_type |= VAR_14;
  break;
 case 144:
 case 141:
 case 138:
 case 142:
 case 140:
 case 139:
  FUNC_4(VAR_21, VAR_17, VAR_16, VAR_7,
    FUNC_5(VAR_20->numbered_buttons),
    0);
  VAR_20->numbered_buttons++;
  VAR_20->device_type |= VAR_14;
  break;
 case 132:
 case 134:
  VAR_19->has_mute_touch_switch = 1;
  VAR_17->type = VAR_8;
  VAR_17->code = VAR_13;
  VAR_20->device_type |= VAR_14;
  break;
 case 129:
  FUNC_4(VAR_21, VAR_17, VAR_16, VAR_6, VAR_0, 0);
  VAR_20->device_type |= VAR_14;
  break;
 case 128:
  FUNC_4(VAR_21, VAR_17, VAR_16, VAR_6, VAR_1, 0);
  VAR_20->device_type |= VAR_14;
  break;
 case 131:
  FUNC_4(VAR_21, VAR_17, VAR_16, VAR_6, VAR_2, 0);
  VAR_20->device_type |= VAR_14;
  break;
 case 130:




  VAR_17->type = VAR_6;
  VAR_17->code = VAR_2;
  FUNC_2(VAR_6, VAR_21->evbit);
  VAR_20->device_type |= VAR_14;
  break;
 case 143:
  FUNC_4(VAR_21, VAR_17, VAR_16, VAR_7, VAR_10, 0);
  VAR_20->device_type |= VAR_14;
  break;
 case 133:
  FUNC_4(VAR_21, VAR_17, VAR_16, VAR_7, VAR_12, 0);
  VAR_20->device_type |= VAR_14;
  break;
 case 137:
  FUNC_4(VAR_21, VAR_17, VAR_16, VAR_7, VAR_11, 0);
  VAR_20->device_type |= VAR_14;
  break;
 case 135:

  if (!VAR_19->has_mode_change) {
   VAR_19->has_mode_change = 1;
   VAR_19->is_direct_mode = 1;
  }
  VAR_20->device_type |= VAR_14;
  break;
 }

 switch (VAR_22 & 0xfffffff0) {
 case 136:
  FUNC_4(VAR_21, VAR_17, VAR_16, VAR_7,
    FUNC_5(VAR_20->numbered_buttons),
    0);
  VAR_20->numbered_buttons++;
  VAR_20->device_type |= VAR_14;
  break;
 }
}
