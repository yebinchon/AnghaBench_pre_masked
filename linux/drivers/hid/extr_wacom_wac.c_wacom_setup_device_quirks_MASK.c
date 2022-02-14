
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wacom_features {int type; int device_type; int x_max; int y_max; scalar_t__ pktlen; int x_fuzz; int y_fuzz; int quirks; scalar_t__ touch_max; } ;
struct wacom_wac {TYPE_2__* pen_input; struct wacom_features features; } ;
struct wacom {TYPE_1__* hdev; struct wacom_wac wacom_wac; } ;
struct TYPE_4__ {int evbit; int mscbit; int absbit; int keybit; } ;
struct TYPE_3__ {scalar_t__ bus; int product; } ;


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
 scalar_t__ VAR_13 ;







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
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 scalar_t__ VAR_33 ;
 scalar_t__ VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int FUNC_0 (int ,int ) ;

void FUNC_1(struct wacom *VAR_39)
{
 struct wacom_wac *VAR_40 = &VAR_39->wacom_wac;
 struct wacom_features *VAR_41 = &VAR_39->wacom_wac.features;


 if (VAR_41->type == VAR_15 || VAR_41->type == VAR_31 ||
     VAR_41->type == 144 ||
     (VAR_41->type >= VAR_16 && VAR_41->type <= VAR_32)) {
  if (VAR_41->device_type & VAR_28)
   VAR_41->device_type |= VAR_27;
 }


 if (VAR_41->device_type & VAR_29 && !VAR_41->x_max) {
  VAR_41->x_max = 1023;
  VAR_41->y_max = 1023;
 }







 if ((VAR_41->type >= VAR_17 && VAR_41->type <= VAR_23) ||
  (VAR_41->type >= VAR_18 && VAR_41->type <= VAR_8)) {
  if (VAR_41->pktlen == VAR_34) {
   if (VAR_41->touch_max)
    VAR_41->device_type |= VAR_29;
   if (VAR_41->type >= VAR_18 && VAR_41->type <= VAR_8)
    VAR_41->device_type |= VAR_27;

   if (VAR_41->type == VAR_19) {
    VAR_41->x_max = VAR_41->x_max / 10;
    VAR_41->y_max = VAR_41->y_max / 10;
   }
   else {
    VAR_41->x_max = 4096;
    VAR_41->y_max = 4096;
   }
  }
  else if (VAR_41->pktlen == VAR_33) {
   VAR_41->device_type |= VAR_27;
  }
 }
 if (VAR_41->type == VAR_7 &&
     VAR_41->pktlen == VAR_34)
  VAR_41->device_type |= VAR_27;
 if (VAR_41->type == VAR_6)
  VAR_41->device_type = VAR_29;

 if (VAR_41->type == VAR_25)
  VAR_41->device_type = VAR_27;

 if (VAR_41->type == VAR_22 ||
     VAR_41->type == VAR_21) {
  VAR_41->device_type |= VAR_28 |
      VAR_27 |
      VAR_29;
  VAR_41->quirks |= VAR_35;
 }

 if (VAR_41->type == VAR_20) {
  VAR_41->device_type |= VAR_28 |
      VAR_27;
  VAR_41->quirks |= VAR_35;
 }

 switch (VAR_41->type) {
 case 139:
 case 145:
 case 144:
 case 143:
 case 134:
 case 133:
 case 146:
 case 132:
 case 130:
 case 147:
 case 148:
 case 149:
 case 128:
 case 135:
 case 131:
 case 129:
 case 138:
 case 136:
 case 137:
 case 142:
 case 141:
 case 140:
  VAR_41->device_type |= VAR_26;
  break;
 }

 if (VAR_39->hdev->bus == VAR_13)
  VAR_41->quirks |= VAR_35;


 if ((VAR_41->type == VAR_8 || VAR_41->type == VAR_9) &&
     VAR_41->pktlen == VAR_33) {
  VAR_41->x_max <<= 5;
  VAR_41->y_max <<= 5;
  VAR_41->x_fuzz <<= 5;
  VAR_41->y_fuzz <<= 5;
  VAR_41->quirks |= VAR_36;
 }

 if (VAR_41->type == VAR_38) {
  if (VAR_41->device_type == VAR_30) {
   VAR_41->quirks |= VAR_35;
  }
 }

 if (VAR_41->type == VAR_25)
  VAR_41->device_type |= VAR_30;




 if (VAR_39->hdev->product == 0x382 || VAR_39->hdev->product == 0x37d) {
  VAR_41->quirks &= ~VAR_37;
  FUNC_0(VAR_11, VAR_40->pen_input->keybit);
  FUNC_0(VAR_12, VAR_40->pen_input->keybit);
  FUNC_0(VAR_10, VAR_40->pen_input->keybit);
  FUNC_0(VAR_5, VAR_40->pen_input->absbit);
  FUNC_0(VAR_0, VAR_40->pen_input->absbit);
  FUNC_0(VAR_2, VAR_40->pen_input->absbit);
  FUNC_0(VAR_3, VAR_40->pen_input->absbit);
  FUNC_0(VAR_4, VAR_40->pen_input->absbit);
  FUNC_0(VAR_1, VAR_40->pen_input->absbit);
  FUNC_0(VAR_24, VAR_40->pen_input->mscbit);
  FUNC_0(VAR_14, VAR_40->pen_input->evbit);
 }
}
