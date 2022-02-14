
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wacom_features {unsigned int distance_max; int pressure_max; int type; } ;
struct wacom_wac {unsigned char* data; int* id; scalar_t__* tool; int reporting_data; int * serial; struct input_dev* pen_input; struct wacom_features features; } ;
struct input_dev {int dummy; } ;
typedef int __be16 ;


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
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
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
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 unsigned char VAR_37 ;
 unsigned char VAR_38 ;
 unsigned char VAR_39 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct wacom_wac*) ;
 int FUNC_2 (struct input_dev*,int ,int ,int ) ;
 int FUNC_3 (struct input_dev*,int ,unsigned char) ;
 int FUNC_4 (struct input_dev*,scalar_t__,int) ;
 int FUNC_5 (struct input_dev*,int ,unsigned char) ;
 unsigned char FUNC_6 (int) ;
 int FUNC_7 (struct wacom_wac*) ;

__attribute__((used)) static int FUNC_8(struct wacom_wac *VAR_40)
{
 struct wacom_features *VAR_41 = &VAR_40->features;
 unsigned char *VAR_42 = VAR_40->data;
 struct input_dev *VAR_43 = VAR_40->pen_input;
 int VAR_44 = (VAR_41->type == VAR_23) ? (VAR_42[1] & 0x01) : 0;
 unsigned char VAR_45 = (VAR_42[1] >> 1) & 0x0F;
 unsigned int VAR_46, VAR_47, VAR_48, VAR_49;

 if (VAR_42[0] != VAR_39 && VAR_42[0] != VAR_37 &&
  VAR_42[0] != VAR_38)
  return 0;

 if (FUNC_1(VAR_40))
  return 1;


 if (!VAR_40->id[VAR_44]) {

  FUNC_7(VAR_40);
  return 1;
 }





 if ((!((VAR_40->id[VAR_44] >> 16) & 0x01) &&
   (VAR_41->type == VAR_36)) ||

     (VAR_40->tool[VAR_44] == VAR_18 &&
  (VAR_41->type == VAR_24 ||
   VAR_41->type == VAR_26 ||
   VAR_41->type == VAR_27 ||
   VAR_41->type == VAR_28 ||
   VAR_41->type == VAR_29 ||
   VAR_41->type == VAR_30 ||
   VAR_41->type == VAR_32 ||
   VAR_41->type == VAR_33)) ||

    (VAR_41->type == VAR_21 && !(VAR_42[1] & 0x40)))
  return 1;

 VAR_46 = (FUNC_0((__be16 *)&VAR_42[2]) << 1) | ((VAR_42[9] >> 1) & 1);
 VAR_47 = (FUNC_0((__be16 *)&VAR_42[4]) << 1) | (VAR_42[9] & 1);
 VAR_48 = VAR_42[9] >> 2;
 if (VAR_41->type < VAR_26) {
  VAR_46 >>= 1;
  VAR_47 >>= 1;
  VAR_48 >>= 1;
 }
 if (VAR_41->type == VAR_31)
  VAR_48 = VAR_41->distance_max - VAR_48;
 FUNC_3(VAR_43, VAR_8, VAR_46);
 FUNC_3(VAR_43, VAR_9, VAR_47);
 FUNC_3(VAR_43, VAR_0, VAR_48);

 switch (VAR_45) {
 case 0x00:
 case 0x01:
 case 0x02:
 case 0x03:

  VAR_49 = (VAR_42[6] << 3) | ((VAR_42[7] & 0xC0) >> 5) | (VAR_42[1] & 1);
  if (VAR_41->pressure_max < 2047)
   VAR_49 >>= 1;
  FUNC_3(VAR_43, VAR_2, VAR_49);
  if (VAR_41->type != VAR_31) {
      FUNC_3(VAR_43, VAR_5,
     (((VAR_42[7] << 1) & 0x7e) | (VAR_42[8] >> 7)) - 64);
      FUNC_3(VAR_43, VAR_6, (VAR_42[8] & 0x7f) - 64);
  }
  FUNC_4(VAR_43, VAR_16, VAR_42[1] & 2);
  FUNC_4(VAR_43, VAR_17, VAR_42[1] & 4);
  FUNC_4(VAR_43, VAR_20, VAR_49 > 10);
  break;

 case 0x0a:

  FUNC_3(VAR_43, VAR_7,
    (VAR_42[6] << 2) | ((VAR_42[7] >> 6) & 3));
  FUNC_3(VAR_43, VAR_5,
     (((VAR_42[7] << 1) & 0x7e) | (VAR_42[8] >> 7)) - 64);
  FUNC_3(VAR_43, VAR_6, (VAR_42[8] & 0x7f) - 64);
  break;

 case 0x05:

  if (VAR_41->type >= VAR_26) {

   VAR_49 = (VAR_42[6] << 3) | ((VAR_42[7] >> 5) & 7);
   VAR_49 = (VAR_42[7] & 0x20) ? ((VAR_49 > 900) ? ((VAR_49-1) / 2 - 1350) :
    ((VAR_49-1) / 2 + 450)) : (450 - VAR_49 / 2) ;
   FUNC_3(VAR_43, VAR_10, VAR_49);
  } else {

   VAR_49 = (VAR_42[6] << 3) | ((VAR_42[7] >> 5) & 7);
   FUNC_3(VAR_43, VAR_3, (VAR_42[7] & 0x20) ?
    ((VAR_49 - 1) / 2) : -VAR_49 / 2);
  }
  break;

 case 0x04:

  FUNC_4(VAR_43, VAR_12, VAR_42[8] & 0x01);
  FUNC_4(VAR_43, VAR_13, VAR_42[8] & 0x02);
  FUNC_4(VAR_43, VAR_14, VAR_42[8] & 0x04);

  FUNC_4(VAR_43, VAR_15, VAR_42[8] & 0x20);
  FUNC_4(VAR_43, VAR_11, VAR_42[8] & 0x10);
  VAR_49 = (VAR_42[6] << 2) | ((VAR_42[7] >> 6) & 3);
  FUNC_3(VAR_43, VAR_4, (VAR_42[8] & 0x08) ? -VAR_49 : VAR_49);
  break;

 case 0x06:

  FUNC_4(VAR_43, VAR_12, VAR_42[6] & 0x01);
  FUNC_4(VAR_43, VAR_13, VAR_42[6] & 0x02);
  FUNC_4(VAR_43, VAR_14, VAR_42[6] & 0x04);
  FUNC_5(VAR_43, VAR_35, ((VAR_42[7] & 0x80) >> 7)
     - ((VAR_42[7] & 0x40) >> 6));
  FUNC_4(VAR_43, VAR_15, VAR_42[6] & 0x08);
  FUNC_4(VAR_43, VAR_11, VAR_42[6] & 0x10);

  FUNC_3(VAR_43, VAR_5,
   (((VAR_42[7] << 1) & 0x7e) | (VAR_42[8] >> 7)) - 64);
  FUNC_3(VAR_43, VAR_6, (VAR_42[8] & 0x7f) - 64);
  break;

 case 0x08:
  if (VAR_40->tool[VAR_44] == VAR_19) {

   FUNC_4(VAR_43, VAR_12, VAR_42[8] & 0x04);
   FUNC_4(VAR_43, VAR_13, VAR_42[8] & 0x08);
   FUNC_4(VAR_43, VAR_14, VAR_42[8] & 0x10);
   FUNC_5(VAR_43, VAR_35, (VAR_42[8] & 0x01)
      - ((VAR_42[8] & 0x02) >> 1));


   if (VAR_41->type >= VAR_26 && VAR_41->type <= VAR_25) {
    FUNC_4(VAR_43, VAR_15, VAR_42[8] & 0x40);
    FUNC_4(VAR_43, VAR_11, VAR_42[8] & 0x20);
   }
  }
  else if (VAR_40->tool[VAR_44] == VAR_18) {

   FUNC_4(VAR_43, VAR_12, VAR_42[8] & 0x01);
   FUNC_4(VAR_43, VAR_13, VAR_42[8] & 0x02);
   FUNC_4(VAR_43, VAR_14, VAR_42[8] & 0x04);
   FUNC_4(VAR_43, VAR_15, VAR_42[8] & 0x10);
   FUNC_4(VAR_43, VAR_11, VAR_42[8] & 0x08);
  }
  break;

 case 0x07:
 case 0x09:
 case 0x0b:
 case 0x0c:
 case 0x0d:
 case 0x0e:
 case 0x0f:

  break;
 }

 FUNC_3(VAR_43, VAR_1,
    FUNC_6(VAR_40->id[VAR_44]));
 FUNC_4(VAR_43, VAR_40->tool[VAR_44], 1);
 FUNC_2(VAR_43, VAR_22, VAR_34, VAR_40->serial[VAR_44]);
 VAR_40->reporting_data = 1;
 return 2;
}
