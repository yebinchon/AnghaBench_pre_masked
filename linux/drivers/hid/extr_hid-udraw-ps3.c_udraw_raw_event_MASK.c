
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct udraw {int last_one_finger_x; int last_one_finger_y; int last_two_finger_x; int last_two_finger_y; int accel_input_dev; int pen_input_dev; int touch_input_dev; int joy_input_dev; } ;
struct hid_report {int dummy; } ;
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
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_0 (scalar_t__,int ,int ) ;
 int FUNC_1 (int,int ) ;
 struct udraw* FUNC_2 (struct hid_device*) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct hid_device *VAR_24, struct hid_report *VAR_25,
  u8 *VAR_26, int VAR_27)
{
 struct udraw *VAR_28 = FUNC_2(VAR_24);
 int VAR_29;
 int VAR_30, VAR_31, VAR_32;

 if (VAR_27 != 27)
  return 0;

 if (VAR_26[11] == 0x00)
  VAR_29 = VAR_21;
 else if (VAR_26[11] == 0x40)
  VAR_29 = VAR_22;
 else if (VAR_26[11] == 0x80)
  VAR_29 = VAR_20;
 else
  VAR_29 = VAR_23;


 FUNC_4(VAR_28->joy_input_dev, VAR_17, VAR_26[0] & 1);
 FUNC_4(VAR_28->joy_input_dev, VAR_11, !!(VAR_26[0] & 2));
 FUNC_4(VAR_28->joy_input_dev, VAR_7, !!(VAR_26[0] & 4));
 FUNC_4(VAR_28->joy_input_dev, VAR_9, !!(VAR_26[0] & 8));

 FUNC_4(VAR_28->joy_input_dev, VAR_10, !!(VAR_26[1] & 1));
 FUNC_4(VAR_28->joy_input_dev, VAR_12, !!(VAR_26[1] & 2));
 FUNC_4(VAR_28->joy_input_dev, VAR_8, !!(VAR_26[1] & 16));

 VAR_30 = VAR_31 = 0;
 switch (VAR_26[2]) {
 case 0x0:
  VAR_31 = -127;
  break;
 case 0x1:
  VAR_31 = -127;
  VAR_30 = 127;
  break;
 case 0x2:
  VAR_30 = 127;
  break;
 case 0x3:
  VAR_31 = 127;
  VAR_30 = 127;
  break;
 case 0x4:
  VAR_31 = 127;
  break;
 case 0x5:
  VAR_31 = 127;
  VAR_30 = -127;
  break;
 case 0x6:
  VAR_30 = -127;
  break;
 case 0x7:
  VAR_31 = -127;
  VAR_30 = -127;
  break;
 default:
  break;
 }

 FUNC_3(VAR_28->joy_input_dev, VAR_1, VAR_30);
 FUNC_3(VAR_28->joy_input_dev, VAR_2, VAR_31);

 FUNC_5(VAR_28->joy_input_dev);


 VAR_30 = VAR_31 = 0;
 if (VAR_29 != VAR_21) {
  if (VAR_26[15] != 0x0F)
   VAR_30 = VAR_26[15] * 256 + VAR_26[17];
  if (VAR_26[16] != 0x0F)
   VAR_31 = VAR_26[16] * 256 + VAR_26[18];
 }

 if (VAR_29 == VAR_20) {

  VAR_28->last_one_finger_x = VAR_30;
  VAR_28->last_one_finger_y = VAR_31;
  VAR_28->last_two_finger_x = -1;
  VAR_28->last_two_finger_y = -1;
 } else if (VAR_29 == VAR_23) {
  if (VAR_28->last_two_finger_x == -1) {

   VAR_28->last_two_finger_x = VAR_30;
   VAR_28->last_two_finger_y = VAR_31;

   VAR_30 = VAR_28->last_one_finger_x;
   VAR_31 = VAR_28->last_one_finger_y;
  } else {




   VAR_30 = VAR_30 - (VAR_28->last_two_finger_x
    - VAR_28->last_one_finger_x);
   VAR_31 = VAR_31 - (VAR_28->last_two_finger_y
    - VAR_28->last_one_finger_y);
  }
 }


 if (VAR_29 == VAR_20 || VAR_29 == VAR_23) {
  FUNC_4(VAR_28->touch_input_dev, VAR_16, 1);
  FUNC_4(VAR_28->touch_input_dev, VAR_14,
    VAR_29 == VAR_20);
  FUNC_4(VAR_28->touch_input_dev, VAR_13,
    VAR_29 == VAR_23);

  FUNC_3(VAR_28->touch_input_dev, VAR_1, VAR_30);
  FUNC_3(VAR_28->touch_input_dev, VAR_2, VAR_31);
 } else {
  FUNC_4(VAR_28->touch_input_dev, VAR_16, 0);
  FUNC_4(VAR_28->touch_input_dev, VAR_14, 0);
  FUNC_4(VAR_28->touch_input_dev, VAR_13, 0);
 }
 FUNC_5(VAR_28->touch_input_dev);


 if (VAR_29 == VAR_22) {
  int VAR_33;

  VAR_33 = FUNC_0(VAR_26[13] - VAR_19,
    0, VAR_18);

  FUNC_4(VAR_28->pen_input_dev, VAR_16, (VAR_33 != 0));
  FUNC_4(VAR_28->pen_input_dev, VAR_15, 1);
  FUNC_3(VAR_28->pen_input_dev, VAR_0, VAR_33);
  FUNC_3(VAR_28->pen_input_dev, VAR_1, VAR_30);
  FUNC_3(VAR_28->pen_input_dev, VAR_2, VAR_31);
 } else {
  FUNC_4(VAR_28->pen_input_dev, VAR_16, 0);
  FUNC_4(VAR_28->pen_input_dev, VAR_15, 0);
  FUNC_3(VAR_28->pen_input_dev, VAR_0, 0);
 }
 FUNC_5(VAR_28->pen_input_dev);


 VAR_30 = (VAR_26[19] + (VAR_26[20] << 8));
 VAR_30 = FUNC_1(VAR_30, VAR_4);
 VAR_31 = (VAR_26[21] + (VAR_26[22] << 8));
 VAR_31 = FUNC_1(VAR_31, VAR_5);
 VAR_32 = (VAR_26[23] + (VAR_26[24] << 8));
 VAR_32 = FUNC_1(VAR_32, VAR_6);
 FUNC_3(VAR_28->accel_input_dev, VAR_1, VAR_30);
 FUNC_3(VAR_28->accel_input_dev, VAR_2, VAR_31);
 FUNC_3(VAR_28->accel_input_dev, VAR_3, VAR_32);
 FUNC_5(VAR_28->accel_input_dev);


 return 0;
}
