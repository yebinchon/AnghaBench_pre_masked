
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct magicmouse_sc {int ntouches; struct input_dev* input; } ;
struct TYPE_2__ {scalar_t__ product; } ;
struct input_dev {TYPE_1__ id; } ;
struct hid_report {int dummy; } ;
struct hid_device {int dummy; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;



 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct magicmouse_sc* FUNC_0 (struct hid_device*) ;
 int FUNC_1 (struct hid_device*,char*,int) ;
 int FUNC_2 (struct input_dev*,int) ;
 int FUNC_3 (struct input_dev*) ;
 int FUNC_4 (struct input_dev*,int ,int) ;
 int FUNC_5 (struct input_dev*,int ,int) ;
 int FUNC_6 (struct input_dev*) ;
 int FUNC_7 (struct magicmouse_sc*,int) ;
 int FUNC_8 (struct magicmouse_sc*,int,int*) ;

__attribute__((used)) static int FUNC_9(struct hid_device *VAR_5,
  struct hid_report *VAR_6, u8 *VAR_7, int VAR_8)
{
 struct magicmouse_sc *VAR_9 = FUNC_0(VAR_5);
 struct input_dev *VAR_10 = VAR_9->input;
 int VAR_11 = 0, VAR_12 = 0, VAR_13, VAR_14 = 0, VAR_15;

 switch (VAR_7[0]) {
 case 128:
 case 130:

  if (VAR_8 < 4 || ((VAR_8 - 4) % 9) != 0)
   return 0;
  VAR_15 = (VAR_8 - 4) / 9;
  if (VAR_15 > 15) {
   FUNC_1(VAR_5, "invalid size value (%d) for TRACKPAD_REPORT_ID\n",
     VAR_8);
   return 0;
  }
  VAR_9->ntouches = 0;
  for (VAR_13 = 0; VAR_13 < VAR_15; VAR_13++)
   FUNC_8(VAR_9, VAR_13, VAR_7 + VAR_13 * 9 + 4);

  VAR_14 = VAR_7[1];






  break;
 case 129:

  if (VAR_8 < 12 || ((VAR_8 - 12) % 9) != 0)
   return 0;
  VAR_15 = (VAR_8 - 12) / 9;
  if (VAR_15 > 15) {
   FUNC_1(VAR_5, "invalid size value (%d) for TRACKPAD2_USB_REPORT_ID\n",
     VAR_8);
   return 0;
  }
  VAR_9->ntouches = 0;
  for (VAR_13 = 0; VAR_13 < VAR_15; VAR_13++)
   FUNC_8(VAR_9, VAR_13, VAR_7 + VAR_13 * 9 + 12);

  VAR_14 = VAR_7[1];
  break;
 case 131:

  if (VAR_8 < 6 || ((VAR_8 - 6) % 8) != 0)
   return 0;
  VAR_15 = (VAR_8 - 6) / 8;
  if (VAR_15 > 15) {
   FUNC_1(VAR_5, "invalid size value (%d) for MOUSE_REPORT_ID\n",
     VAR_8);
   return 0;
  }
  VAR_9->ntouches = 0;
  for (VAR_13 = 0; VAR_13 < VAR_15; VAR_13++)
   FUNC_8(VAR_9, VAR_13, VAR_7 + VAR_13 * 8 + 6);





  VAR_11 = (int)(((VAR_7[3] & 0x0c) << 28) | (VAR_7[1] << 22)) >> 22;
  VAR_12 = (int)(((VAR_7[3] & 0x30) << 26) | (VAR_7[2] << 22)) >> 22;
  VAR_14 = VAR_7[3];






  break;
 case 132:



  FUNC_9(VAR_5, VAR_6, VAR_7 + 2, VAR_7[1]);
  FUNC_9(VAR_5, VAR_6, VAR_7 + 2 + VAR_7[1],
   VAR_8 - 2 - VAR_7[1]);
  break;
 default:
  return 0;
 }

 if (VAR_10->id.product == VAR_3) {
  FUNC_7(VAR_9, VAR_14 & 3);
  FUNC_5(VAR_10, VAR_1, VAR_11);
  FUNC_5(VAR_10, VAR_2, VAR_12);
 } else if (VAR_10->id.product == VAR_4) {
  FUNC_3(VAR_10);
  FUNC_4(VAR_10, VAR_0, VAR_14 & 1);
 } else {
  FUNC_4(VAR_10, VAR_0, VAR_14 & 1);
  FUNC_2(VAR_10, 1);
 }

 FUNC_6(VAR_10);
 return 1;
}
