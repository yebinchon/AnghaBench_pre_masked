
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wacom_features {int type; scalar_t__ numbered_buttons; int device_type; int oPid; } ;
struct wacom_wac {struct input_dev* pad_input; struct wacom_features features; } ;
struct input_dev {int* evbit; int keybit; int absbit; int propbit; TYPE_1__* absinfo; } ;
struct TYPE_2__ {scalar_t__ maximum; scalar_t__ minimum; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;


 int FUNC_0 (int ) ;
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
 int VAR_27 ;







 int VAR_28 ;


 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct input_dev*,size_t,int) ;
 int FUNC_4 (struct input_dev*,size_t,int,int,int ,int ) ;
 int FUNC_5 (struct input_dev*,int ,int ) ;
 int FUNC_6 (struct input_dev*,scalar_t__) ;

int FUNC_7(struct input_dev *VAR_29,
       struct wacom_wac *VAR_30)
{
 struct wacom_features *VAR_31 = &VAR_30->features;

 if ((VAR_31->type == 155) && VAR_31->numbered_buttons > 0)
  VAR_31->device_type |= VAR_28;

 if (!(VAR_31->device_type & VAR_28))
  return -VAR_13;

 if (VAR_31->type == 136 && VAR_29 == VAR_30->pad_input)
  return -VAR_13;

 VAR_29->evbit[0] |= FUNC_0(VAR_15) | FUNC_0(VAR_14);


 FUNC_2(VAR_0, VAR_29->absbit);


 if (!(VAR_29->absinfo && (VAR_29->absinfo[VAR_5].minimum ||
       VAR_29->absinfo[VAR_5].maximum)))
  FUNC_4(VAR_29, VAR_5, 0, 1, 0, 0);
 if (!(VAR_29->absinfo && (VAR_29->absinfo[VAR_6].minimum ||
       VAR_29->absinfo[VAR_6].maximum)))
  FUNC_4(VAR_29, VAR_6, 0, 1, 0, 0);


 FUNC_2(VAR_12, VAR_29->keybit);

 FUNC_6(VAR_29, VAR_31->numbered_buttons);

 switch (VAR_31->type) {

 case 159:
 case 160:
 case 158:
 case 157:
 case 156:
  break;

 case 128:
  FUNC_2(VAR_8, VAR_29->keybit);
  FUNC_2(VAR_10, VAR_29->keybit);
  FUNC_2(VAR_9, VAR_29->keybit);
  FUNC_2(VAR_11, VAR_29->keybit);
  FUNC_4(VAR_29, VAR_4, 0, 71, 0, 0);
  break;

 case 129:
  FUNC_2(VAR_8, VAR_29->keybit);
  FUNC_2(VAR_9, VAR_29->keybit);
  FUNC_5(VAR_29, VAR_17, VAR_27);
  break;

 case 132:
  FUNC_2(VAR_23, VAR_29->keybit);
  FUNC_2(VAR_24, VAR_29->keybit);
  FUNC_2(VAR_25, VAR_29->keybit);

  FUNC_2(VAR_22, VAR_29->keybit);
  FUNC_2(VAR_21, VAR_29->keybit);

  if (!VAR_31->oPid)
   FUNC_2(VAR_19, VAR_29->keybit);

  FUNC_4(VAR_29, VAR_4, 0, 71, 0, 0);
  FUNC_4(VAR_29, VAR_3, 0, 71, 0, 0);
  break;

 case 131:
  FUNC_2(VAR_23, VAR_29->keybit);
  FUNC_2(VAR_24, VAR_29->keybit);
  FUNC_2(VAR_25, VAR_29->keybit);

  FUNC_2(VAR_22, VAR_29->keybit);
  FUNC_2(VAR_19, VAR_29->keybit);

  if (!VAR_31->oPid)
   FUNC_2(VAR_20, VAR_29->keybit);
  FUNC_4(VAR_29, VAR_5, -2048, 2048, 0, 0);
  FUNC_3(VAR_29, VAR_5, 1024);
  FUNC_4(VAR_29, VAR_6, -2048, 2048, 0, 0);
  FUNC_3(VAR_29, VAR_6, 1024);
  FUNC_4(VAR_29, VAR_7, -2048, 2048, 0, 0);
  FUNC_3(VAR_29, VAR_7, 1024);
  FUNC_2(VAR_18, VAR_29->propbit);
  break;

 case 133:
  FUNC_2(VAR_23, VAR_29->keybit);
  FUNC_2(VAR_24, VAR_29->keybit);
  FUNC_2(VAR_25, VAR_29->keybit);

  FUNC_2(VAR_19, VAR_29->keybit);
  FUNC_2(VAR_21, VAR_29->keybit);


 case 134:
 case 130:
 case 161:
  FUNC_4(VAR_29, VAR_1, 0, 4096, 0, 0);
  FUNC_4(VAR_29, VAR_2, 0, 4096, 0, 0);
  break;

 case 135:
  FUNC_4(VAR_29, VAR_4, 0, 71, 0, 0);
  break;

 case 154:
 case 153:
  FUNC_4(VAR_29, VAR_2, 0, 4096, 0, 0);


 case 152:
  FUNC_4(VAR_29, VAR_1, 0, 4096, 0, 0);
  break;

 case 147:
 case 146:
 case 138:
 case 139:
 case 145:
 case 137:
 case 140:
 case 141:
  FUNC_4(VAR_29, VAR_4, 0, 71, 0, 0);
  break;

 case 148:





  FUNC_2(VAR_12, VAR_29->keybit);


 case 151:
 case 150:
 case 149:
  FUNC_4(VAR_29, VAR_4, 0, 71, 0, 0);
  break;

 case 144:
 case 163:
 case 162:
 case 143:
  FUNC_1(VAR_0, VAR_29->absbit);

  FUNC_2(VAR_10, VAR_29->keybit);
  FUNC_2(VAR_9, VAR_29->keybit);
  FUNC_2(VAR_8, VAR_29->keybit);
  FUNC_2(VAR_11, VAR_29->keybit);

  break;

 case 136:
  FUNC_5(VAR_29, VAR_16, VAR_26);
  FUNC_4(VAR_29, VAR_4, 0, 71, 0, 0);
  break;

 case 142:
 case 155:
  break;

 default:

  return -VAR_13;
 }
 return 0;
}
