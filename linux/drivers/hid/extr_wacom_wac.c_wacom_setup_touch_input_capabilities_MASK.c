
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wacom_features {int device_type; int type; int touch_max; int x_max; int x_fuzz; int y_max; int y_fuzz; int x_resolution; int y_resolution; int pktlen; } ;
struct wacom_wac {TYPE_2__* shared; struct wacom_features features; } ;
struct input_dev {int* evbit; int keybit; int swbit; int propbit; } ;
struct TYPE_4__ {int has_mute_touch_switch; TYPE_1__* touch; } ;
struct TYPE_3__ {int product; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;



 int FUNC_0 (int ) ;
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
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct input_dev*,int ,int) ;
 int FUNC_3 (struct input_dev*,int,int ) ;
 int FUNC_4 (struct input_dev*,int ,int ,int,int,int ) ;

int FUNC_5(struct input_dev *VAR_25,
      struct wacom_wac *VAR_26)
{
 struct wacom_features *VAR_27 = &VAR_26->features;

 VAR_25->evbit[0] |= FUNC_0(VAR_14) | FUNC_0(VAR_13);

 if (!(VAR_27->device_type & VAR_23))
  return -VAR_12;

 if (VAR_27->device_type & VAR_22)
  FUNC_1(VAR_19, VAR_25->propbit);
 else
  FUNC_1(VAR_20, VAR_25->propbit);

 if (VAR_27->type == VAR_16)

  return 0;

 FUNC_1(VAR_11, VAR_25->keybit);

 if (VAR_27->touch_max == 1) {
  FUNC_4(VAR_25, VAR_7, 0,
   VAR_27->x_max, VAR_27->x_fuzz, 0);
  FUNC_4(VAR_25, VAR_8, 0,
   VAR_27->y_max, VAR_27->y_fuzz, 0);
  FUNC_2(VAR_25, VAR_7,
      VAR_27->x_resolution);
  FUNC_2(VAR_25, VAR_8,
      VAR_27->y_resolution);
 }
 else if (VAR_27->touch_max > 1) {
  FUNC_4(VAR_25, VAR_1, 0,
   VAR_27->x_max, VAR_27->x_fuzz, 0);
  FUNC_4(VAR_25, VAR_2, 0,
   VAR_27->y_max, VAR_27->y_fuzz, 0);
  FUNC_2(VAR_25, VAR_1,
      VAR_27->x_resolution);
  FUNC_2(VAR_25, VAR_2,
      VAR_27->y_resolution);
 }

 switch (VAR_27->type) {
 case 139:
 case 140:
  VAR_25->evbit[0] |= FUNC_0(VAR_15);
  FUNC_1(VAR_21, VAR_25->swbit);

  if (VAR_26->shared->touch->product == 0x361) {
   FUNC_4(VAR_25, VAR_1,
          0, 12440, 4, 0);
   FUNC_4(VAR_25, VAR_2,
          0, 8640, 4, 0);
  }
  else if (VAR_26->shared->touch->product == 0x360) {
   FUNC_4(VAR_25, VAR_1,
          0, 8960, 4, 0);
   FUNC_4(VAR_25, VAR_2,
          0, 5920, 4, 0);
  }
  else if (VAR_26->shared->touch->product == 0x393) {
   FUNC_4(VAR_25, VAR_1,
          0, 6400, 4, 0);
   FUNC_4(VAR_25, VAR_2,
          0, 4000, 4, 0);
  }
  FUNC_2(VAR_25, VAR_1, 40);
  FUNC_2(VAR_25, VAR_2, 40);



 case 145:
 case 144:
 case 137:
 case 138:
 case 143:
 case 136:
  FUNC_4(VAR_25, VAR_3, 0, VAR_27->x_max, 0, 0);
  FUNC_4(VAR_25, VAR_4, 0, VAR_27->y_max, 0, 0);
  FUNC_3(VAR_25, VAR_27->touch_max, VAR_18);
  break;

 case 129:
  FUNC_4(VAR_25, VAR_3, 0, VAR_27->x_max, 0, 0);
  FUNC_4(VAR_25, VAR_5, 0, VAR_27->x_max, 0, 0);
  FUNC_4(VAR_25, VAR_6, 0, VAR_27->y_max, 0, 0);
  FUNC_4(VAR_25, VAR_0, 0, 1, 0, 0);


 case 128:
  if (VAR_26->shared->touch->product == 0x32C ||
      VAR_26->shared->touch->product == 0xF6) {
   VAR_25->evbit[0] |= FUNC_0(VAR_15);
   FUNC_1(VAR_21, VAR_25->swbit);
   VAR_26->shared->has_mute_touch_switch = 1;
  }


 case 135:
 case 134:
 case 133:
 case 131:
  FUNC_3(VAR_25, VAR_27->touch_max, VAR_17);


 case 132:
 case 130:
  break;

 case 142:
 case 141:
  VAR_25->evbit[0] |= FUNC_0(VAR_15);
  FUNC_1(VAR_21, VAR_25->swbit);


 case 147:
 case 146:
  if (VAR_27->pktlen == VAR_24) {
   FUNC_4(VAR_25,
         VAR_3,
         0, VAR_27->x_max, 0, 0);
   FUNC_4(VAR_25,
         VAR_4,
         0, VAR_27->y_max, 0, 0);
  }
  FUNC_3(VAR_25, VAR_27->touch_max, VAR_18);
  break;

 case 148:
  FUNC_3(VAR_25, VAR_27->touch_max,
        VAR_18);
  FUNC_1(VAR_9, VAR_25->keybit);
  FUNC_1(VAR_10, VAR_25->keybit);
  break;
 }
 return 0;
}
