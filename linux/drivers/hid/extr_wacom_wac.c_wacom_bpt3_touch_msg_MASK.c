
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wacom_features {scalar_t__ type; } ;
struct wacom_wac {struct input_dev* touch_input; struct wacom_features features; } ;
struct input_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct input_dev*,int ) ;
 int FUNC_1 (struct input_dev*,unsigned char) ;
 int FUNC_2 (struct input_dev*,int ,int) ;
 int FUNC_3 (struct input_dev*,int) ;
 int FUNC_4 (struct input_dev*,int ,int) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (struct wacom_wac*) ;

__attribute__((used)) static void FUNC_7(struct wacom_wac *VAR_8, unsigned char *VAR_9)
{
 struct wacom_features *VAR_10 = &VAR_8->features;
 struct input_dev *VAR_11 = VAR_8->touch_input;
 bool VAR_12 = VAR_9[1] & 0x80;
 int VAR_13 = FUNC_1(VAR_11, VAR_9[0]);

 if (VAR_13 < 0)
  return;

 VAR_12 = VAR_12 && FUNC_6(VAR_8);

 FUNC_3(VAR_11, VAR_13);
 FUNC_2(VAR_11, VAR_6, VAR_12);

 if (VAR_12) {
  int VAR_14 = (VAR_9[2] << 4) | (VAR_9[4] >> 4);
  int VAR_15 = (VAR_9[3] << 4) | (VAR_9[4] & 0x0f);
  int VAR_16, VAR_17;

  if (VAR_10->type >= VAR_5 && VAR_10->type <= VAR_4) {
   VAR_16 = VAR_9[5] * 100;
   VAR_17 = VAR_9[6] * 100;
  } else {





   int VAR_18 = VAR_9[5];
   int VAR_19 = FUNC_0(VAR_11, VAR_0);
   int VAR_20 = FUNC_0(VAR_11, VAR_1);
   VAR_16 = 2 * FUNC_5(VAR_18 * VAR_7);
   VAR_17 = VAR_16 * VAR_20 / VAR_19;
  }

  FUNC_4(VAR_11, VAR_0, VAR_14);
  FUNC_4(VAR_11, VAR_1, VAR_15);
  FUNC_4(VAR_11, VAR_2, VAR_16);
  FUNC_4(VAR_11, VAR_3, VAR_17);
 }
}
