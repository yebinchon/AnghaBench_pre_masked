
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wacom_features {int quirks; } ;
struct wacom_wac {unsigned char* data; TYPE_1__* shared; struct input_dev* pad_input; struct input_dev* touch_input; struct wacom_features features; } ;
struct input_dev {int dummy; } ;
struct TYPE_2__ {int touch_down; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (unsigned char*) ;
 int FUNC_1 (struct input_dev*,int ,int) ;
 int FUNC_2 (struct input_dev*,int) ;
 int FUNC_3 (struct input_dev*) ;
 int FUNC_4 (struct input_dev*,int ,int) ;
 int FUNC_5 (struct input_dev*,int ,int) ;
 scalar_t__ FUNC_6 (struct wacom_wac*) ;
 int FUNC_7 (struct wacom_wac*) ;

__attribute__((used)) static int FUNC_8(struct wacom_wac *VAR_8)
{
 struct wacom_features *VAR_9 = &VAR_8->features;
 struct input_dev *VAR_10 = VAR_8->touch_input;
 struct input_dev *VAR_11 = VAR_8->pad_input;
 unsigned char *VAR_12 = VAR_8->data;
 int VAR_13;

 if (VAR_12[0] != 0x02)
     return 0;

 for (VAR_13 = 0; VAR_13 < 2; VAR_13++) {
  int VAR_14 = (VAR_12[1] & 0x80) ? (8 * VAR_13) : (9 * VAR_13);
  bool VAR_15 = FUNC_6(VAR_8)
      && (VAR_12[VAR_14 + 3] & 0x80);

  FUNC_2(VAR_10, VAR_13);
  FUNC_1(VAR_10, VAR_6, VAR_15);
  if (VAR_15) {
   int VAR_16 = FUNC_0(&VAR_12[VAR_14 + 3]) & 0x7ff;
   int VAR_17 = FUNC_0(&VAR_12[VAR_14 + 5]) & 0x7ff;
   if (VAR_9->quirks & VAR_7) {
    VAR_16 <<= 5;
    VAR_17 <<= 5;
   }
   FUNC_4(VAR_10, VAR_0, VAR_16);
   FUNC_4(VAR_10, VAR_1, VAR_17);
  }
 }

 FUNC_3(VAR_10);

 FUNC_5(VAR_11, VAR_4, (VAR_12[1] & 0x08) != 0);
 FUNC_5(VAR_11, VAR_3, (VAR_12[1] & 0x04) != 0);
 FUNC_5(VAR_11, VAR_2, (VAR_12[1] & 0x02) != 0);
 FUNC_5(VAR_11, VAR_5, (VAR_12[1] & 0x01) != 0);
 VAR_8->shared->touch_down = FUNC_7(VAR_8);

 return 1;
}
