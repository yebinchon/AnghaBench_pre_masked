
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wacom_features {int device_type; int type; int offset_left; int x_max; int offset_right; int offset_top; int y_max; int offset_bottom; int pressure_max; int x_resolution; int y_resolution; int distance_max; int distance_fuzz; int pressure_fuzz; int y_fuzz; int x_fuzz; } ;
struct wacom_wac {struct wacom_features features; } ;
struct input_dev {int* evbit; int absbit; int keybit; int propbit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int FUNC_0 (int ) ;
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


 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct input_dev*,int ,int) ;
 int FUNC_4 (struct input_dev*,int ,int,int,int ,int ) ;
 int FUNC_5 (struct input_dev*,int ,int ) ;
 int FUNC_6 (struct wacom_wac*) ;
 int FUNC_7 (struct wacom_wac*) ;
 int FUNC_8 (struct wacom_wac*) ;

int FUNC_9(struct input_dev *VAR_26,
       struct wacom_wac *VAR_27)
{
 struct wacom_features *VAR_28 = &VAR_27->features;

 VAR_26->evbit[0] |= FUNC_0(VAR_18) | FUNC_0(VAR_17);

 if (!(VAR_28->device_type & VAR_25))
  return -VAR_16;

 if (VAR_28->device_type & VAR_24)
  FUNC_2(VAR_21, VAR_26->propbit);
 else
  FUNC_2(VAR_22, VAR_26->propbit);

 if (VAR_28->type == VAR_20) {

  FUNC_5(VAR_26, VAR_18, VAR_11);
  return 0;
 }

 FUNC_2(VAR_15, VAR_26->keybit);
 FUNC_2(VAR_1, VAR_26->absbit);

 FUNC_4(VAR_26, VAR_3, 0 + VAR_28->offset_left,
        VAR_28->x_max - VAR_28->offset_right,
        VAR_28->x_fuzz, 0);
 FUNC_4(VAR_26, VAR_4, 0 + VAR_28->offset_top,
        VAR_28->y_max - VAR_28->offset_bottom,
        VAR_28->y_fuzz, 0);
 FUNC_4(VAR_26, VAR_2, 0,
  VAR_28->pressure_max, VAR_28->pressure_fuzz, 0);


 FUNC_3(VAR_26, VAR_3, VAR_28->x_resolution);
 FUNC_3(VAR_26, VAR_4, VAR_28->y_resolution);

 switch (VAR_28->type) {
 case 166:
  FUNC_1(VAR_1, VAR_26->absbit);


 case 128:
 case 129:
  FUNC_4(VAR_26, VAR_0, 0,
           VAR_28->distance_max,
           VAR_28->distance_fuzz, 0);


 case 167:
  FUNC_5(VAR_26, VAR_19, VAR_23);

  FUNC_2(VAR_6, VAR_26->keybit);
  FUNC_2(VAR_8, VAR_26->keybit);
  FUNC_2(VAR_7, VAR_26->keybit);

  FUNC_2(VAR_14, VAR_26->keybit);
  FUNC_2(VAR_13, VAR_26->keybit);
  FUNC_2(VAR_12, VAR_26->keybit);
  FUNC_2(VAR_9, VAR_26->keybit);
  FUNC_2(VAR_10, VAR_26->keybit);
  break;

 case 132:
 case 134:
 case 171:
 case 135:
 case 136:
 case 130:
 case 174:
 case 137:
 case 172:
 case 173:
  FUNC_4(VAR_26, VAR_5, -900, 899, 0, 0);
  FUNC_3(VAR_26, VAR_5, 287);
  FUNC_7(VAR_27);
  break;

 case 164:
 case 163:
 case 162:
 case 161:
 case 158:
 case 160:
 case 159:
  FUNC_4(VAR_26, VAR_5, -900, 899, 0, 0);
  FUNC_3(VAR_26, VAR_5, 287);


 case 165:
  FUNC_8(VAR_27);
  break;

 case 157:
 case 156:
 case 148:
 case 149:
 case 155:
 case 147:
 case 150:
 case 151:
  FUNC_4(VAR_26, VAR_0, 0,
          VAR_28->distance_max,
          VAR_28->distance_fuzz, 0);

  FUNC_4(VAR_26, VAR_5, -900, 899, 0, 0);
  FUNC_3(VAR_26, VAR_5, 287);

  FUNC_8(VAR_27);
  break;

 case 133:
 case 131:
 case 146:
 case 145:
 case 144:
 case 139:
 case 140:
 case 138:
  FUNC_1(VAR_1, VAR_26->absbit);


 case 169:
 case 168:
 case 142:
 case 170:
  FUNC_2(VAR_13, VAR_26->keybit);
  FUNC_2(VAR_14, VAR_26->keybit);
  FUNC_2(VAR_9, VAR_26->keybit);
  FUNC_2(VAR_10, VAR_26->keybit);
  break;

 case 141:
  FUNC_2(VAR_10, VAR_26->keybit);


 case 143:
  FUNC_2(VAR_13, VAR_26->keybit);
  FUNC_2(VAR_14, VAR_26->keybit);
  FUNC_2(VAR_9, VAR_26->keybit);
  break;

 case 154:
 case 175:
 case 176:
 case 153:
 case 152:
  if (VAR_28->type == 153 ||
      VAR_28->type == 152) {
   FUNC_6(VAR_27);
  } else {
   FUNC_1(VAR_1, VAR_26->absbit);
   FUNC_2(VAR_13, VAR_26->keybit);
   FUNC_2(VAR_14, VAR_26->keybit);
   FUNC_2(VAR_9, VAR_26->keybit);
   FUNC_2(VAR_10, VAR_26->keybit);
   FUNC_4(VAR_26, VAR_0, 0,
          VAR_28->distance_max,
          VAR_28->distance_fuzz, 0);
  }
  break;
 case 177:
  FUNC_1(VAR_1, VAR_26->absbit);
  break;
 }
 return 0;
}
