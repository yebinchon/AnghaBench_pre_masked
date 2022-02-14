
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wacom_features {int quirks; int device_type; } ;
struct wacom_wac {struct input_dev* pen_input; struct wacom_features features; } ;
struct wacom {struct wacom_wac wacom_wac; } ;
struct input_dev {int evbit; } ;
struct hid_usage {int hid; } ;
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
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;




 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 struct wacom* FUNC_0 (struct hid_device*) ;
 int FUNC_1 (struct input_dev*,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 unsigned int FUNC_3 (int ) ;
 int FUNC_4 (struct input_dev*,struct hid_usage*,struct hid_field*,int ,int ,int) ;

__attribute__((used)) static void FUNC_5(struct hid_device *VAR_27,
  struct hid_field *VAR_28, struct hid_usage *VAR_29)
{
 struct wacom *VAR_30 = FUNC_0(VAR_27);
 struct wacom_wac *VAR_31 = &VAR_30->wacom_wac;
 struct wacom_features *VAR_32 = &VAR_31->features;
 struct input_dev *VAR_33 = VAR_31->pen_input;
 unsigned VAR_34 = FUNC_3(VAR_29->hid);

 switch (VAR_34) {
 case 134:
  FUNC_4(VAR_33, VAR_29, VAR_28, VAR_19, VAR_6, 4);
  break;
 case 133:
  FUNC_4(VAR_33, VAR_29, VAR_28, VAR_19, VAR_7, 4);
  break;
 case 131:
 case 132:
  FUNC_4(VAR_33, VAR_29, VAR_28, VAR_19, VAR_0, 0);
  break;
 case 138:
  FUNC_4(VAR_33, VAR_29, VAR_28, VAR_19, VAR_2, 0);
  break;
 case 142:
  FUNC_4(VAR_33, VAR_29, VAR_28, VAR_20, VAR_15, 0);
  break;
 case 141:
  FUNC_4(VAR_33, VAR_29, VAR_28, VAR_20,
    VAR_17, 0);
  break;
 case 140:
  FUNC_4(VAR_33, VAR_29, VAR_28, VAR_19, VAR_3, 0);
  break;
 case 139:
  FUNC_4(VAR_33, VAR_29, VAR_28, VAR_19, VAR_4, 0);
  break;
 case 135:
  FUNC_4(VAR_33, VAR_29, VAR_28, VAR_19, VAR_8, 0);
  break;
 case 143:
 case 137:
  FUNC_4(VAR_33, VAR_29, VAR_28, VAR_20, VAR_18, 0);
  break;
 case 145:
  FUNC_4(VAR_33, VAR_29, VAR_28, VAR_20, VAR_9, 0);
  break;
 case 144:
  FUNC_4(VAR_33, VAR_29, VAR_28, VAR_20, VAR_10, 0);
  break;
 case 136:
  VAR_32->quirks |= VAR_26;
  FUNC_4(VAR_33, VAR_29, VAR_28, VAR_21, VAR_22, 0);
  break;
 case 129:
  VAR_32->quirks |= VAR_25;
  FUNC_4(VAR_33, VAR_29, VAR_28, VAR_20, VAR_15, 0);
  break;
 case 128:
  FUNC_4(VAR_33, VAR_29, VAR_28, VAR_19, VAR_1, 0);

  if (!(VAR_32->quirks & VAR_24)) {
   FUNC_2(VAR_20, VAR_33->evbit);
   FUNC_1(VAR_33, VAR_20, VAR_15);
   FUNC_1(VAR_33, VAR_20, VAR_17);
   FUNC_1(VAR_33, VAR_20, VAR_12);
   FUNC_1(VAR_33, VAR_20, VAR_16);
   FUNC_1(VAR_33, VAR_20, VAR_11);
   if (!(VAR_32->device_type & VAR_23)) {
    FUNC_1(VAR_33, VAR_20, VAR_14);
    FUNC_1(VAR_33, VAR_20, VAR_13);
   }
  }
  break;
 case 130:
  FUNC_4(VAR_33, VAR_29, VAR_28, VAR_19, VAR_5, 0);
  break;
 }
}
