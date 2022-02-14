
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
typedef int touch_data ;
struct iqs5xx_touch_data {int abs_y; int abs_x; int strength; } ;
struct iqs5xx_private {scalar_t__ bl_status; struct input_dev* input; struct i2c_client* client; } ;
struct input_dev {int dummy; } ;
struct i2c_client {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct iqs5xx_touch_data*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct input_dev*,int ,int) ;
 int FUNC_3 (struct input_dev*,int) ;
 int FUNC_4 (struct input_dev*) ;
 int FUNC_5 (struct input_dev*,int ,scalar_t__) ;
 int FUNC_6 (struct input_dev*) ;
 int FUNC_7 (struct i2c_client*,int ,struct iqs5xx_touch_data*,int) ;
 int FUNC_8 (struct i2c_client*,int ,int ) ;
 int FUNC_9 (int,int) ;

__attribute__((used)) static irqreturn_t FUNC_10(int VAR_10, void *VAR_11)
{
 struct iqs5xx_private *VAR_12 = VAR_11;
 struct iqs5xx_touch_data VAR_13[VAR_6];
 struct i2c_client *VAR_14 = VAR_12->client;
 struct input_dev *VAR_15 = VAR_12->input;
 int VAR_16, VAR_17;






 if (VAR_12->bl_status == VAR_4)
  return VAR_8;

 VAR_16 = FUNC_7(VAR_14, VAR_3,
      VAR_13, sizeof(VAR_13));
 if (VAR_16)
  return VAR_8;

 for (VAR_17 = 0; VAR_17 < FUNC_0(VAR_13); VAR_17++) {
  u16 VAR_18 = FUNC_1(VAR_13[VAR_17].strength);

  FUNC_3(VAR_15, VAR_17);
  if (FUNC_2(VAR_15, VAR_9,
            VAR_18 != 0)) {
   FUNC_5(VAR_15, VAR_0,
      FUNC_1(VAR_13[VAR_17].abs_x));
   FUNC_5(VAR_15, VAR_1,
      FUNC_1(VAR_13[VAR_17].abs_y));
   FUNC_5(VAR_15, VAR_2, VAR_18);
  }
 }

 FUNC_4(VAR_15);
 FUNC_6(VAR_15);

 VAR_16 = FUNC_8(VAR_14, VAR_5, 0);
 if (VAR_16)
  return VAR_8;






 FUNC_9(50, 100);

 return VAR_7;
}
