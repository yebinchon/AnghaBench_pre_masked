
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rohm_ts_data {int finger_count; unsigned int* contact_count; struct input_dev* input; struct i2c_client* client; } ;
struct input_mt_pos {int x; int y; } ;
struct input_dev {int dummy; } ;
struct device {int dummy; } ;
struct i2c_client {struct device dev; } ;
typedef int s16 ;
typedef int irqreturn_t ;
typedef int buf ;


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
 int FUNC_0 (int ) ;
 int VAR_19 ;

 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*,char*,int) ;
 unsigned int* VAR_24 ;
 int FUNC_3 (struct i2c_client*,int ,int) ;
 int FUNC_4 (struct input_dev*,int*,struct input_mt_pos*,int,int ) ;
 int FUNC_5 (struct input_dev*,int) ;
 int FUNC_6 (struct input_dev*,int ,int) ;
 int FUNC_7 (struct input_dev*,int) ;
 int FUNC_8 (struct input_dev*) ;
 int FUNC_9 (struct input_dev*,int ,int) ;
 int FUNC_10 (struct input_dev*) ;
 int FUNC_11 (int*,int ,int) ;
 int FUNC_12 (struct i2c_client*,int ,int*,int) ;
 int FUNC_13 (struct rohm_ts_data*) ;
 unsigned int* VAR_25 ;
 unsigned int* VAR_26 ;

__attribute__((used)) static irqreturn_t FUNC_14(int VAR_27, void *VAR_28)
{
 struct rohm_ts_data *VAR_29 = VAR_28;
 struct i2c_client *VAR_30 = VAR_29->client;
 struct input_dev *VAR_31 = VAR_29->input;
 struct device *VAR_32 = &VAR_30->dev;

 u8 VAR_33[10];

 struct input_mt_pos VAR_34[VAR_8];
 int VAR_35[VAR_8];
 u8 VAR_36;
 unsigned int VAR_37;
 int VAR_38 = -1;
 int VAR_39 = VAR_29->finger_count;
 int VAR_40;
 int VAR_41;
 int VAR_42;

 VAR_41 = FUNC_3(VAR_30, VAR_6, VAR_4);
 if (VAR_41)
  return VAR_7;


 VAR_41 = FUNC_3(VAR_30, VAR_5, 0xff);
 if (VAR_41)
  return VAR_7;



 VAR_41 = FUNC_12(VAR_30, VAR_10, VAR_33, sizeof(VAR_33));
 if (VAR_41)
  return VAR_7;

 VAR_36 = VAR_33[((VAR_22) - VAR_10)] & VAR_23;
 if (VAR_36) {

  VAR_34[0].x = ((s16)VAR_33[((VAR_10) - VAR_10)] << 2) |
      VAR_33[((VAR_11) - VAR_10)];
  VAR_34[0].y = ((s16)VAR_33[((VAR_14) - VAR_10)] << 2) |
      VAR_33[((VAR_15) - VAR_10)];
  VAR_34[1].x = ((s16)VAR_33[((VAR_12) - VAR_10)] << 2) |
      VAR_33[((VAR_13) - VAR_10)];
  VAR_34[1].y = ((s16)VAR_33[((VAR_16) - VAR_10)] << 2) |
      VAR_33[((VAR_17) - VAR_10)];
 }

 switch (VAR_36) {
 case 0:
  VAR_37 = VAR_26[VAR_39];
  if (++VAR_29->contact_count[0] >= VAR_37)
   VAR_38 = 0;
  break;

 case 128:
  VAR_37 = VAR_25[VAR_39];
  if (++VAR_29->contact_count[1] >= VAR_37)
   VAR_38 = 1;

  if (VAR_38 == 1) {
   if (VAR_34[1].x != 0 && VAR_34[1].y != 0) {
    VAR_34[0].x = VAR_34[1].x;
    VAR_34[0].y = VAR_34[1].y;
    VAR_34[1].x = 0;
    VAR_34[1].y = 0;
   }
  }
  break;

 case 129:
  VAR_37 = VAR_24[VAR_39];
  if (++VAR_29->contact_count[2] >= VAR_37)
   VAR_38 = 2;
  break;

 default:
  FUNC_1(VAR_32,
   "Three or more touches are not supported\n");
  return VAR_7;
 }

 if (VAR_38 >= 0) {
  if (VAR_39 != VAR_38) {
   VAR_40 = VAR_29->contact_count[VAR_38];
   FUNC_11(VAR_29->contact_count, 0, sizeof(VAR_29->contact_count));
   VAR_29->contact_count[VAR_38] = VAR_40;
  }

  FUNC_4(VAR_31, VAR_35, VAR_34,
          VAR_38, VAR_19);

  for (VAR_42 = 0; VAR_42 < VAR_38; VAR_42++) {
   FUNC_7(VAR_31, VAR_35[VAR_42]);
   FUNC_6(VAR_31,
         VAR_9, 1);
   FUNC_9(VAR_31,
      VAR_0, VAR_34[VAR_42].x);
   FUNC_9(VAR_31,
      VAR_1, VAR_34[VAR_42].y);
  }

  FUNC_8(VAR_31);
  FUNC_5(VAR_31, 1);
  FUNC_10(VAR_31);

  VAR_29->finger_count = VAR_38;
 }

 if (VAR_33[((VAR_22) - VAR_10)] & VAR_3) {
  VAR_41 = FUNC_13(VAR_29);
  if (VAR_41)
   FUNC_2(VAR_32, "manual calibration failed: %d\n",
     VAR_41);
 }

 FUNC_3(VAR_30, VAR_6,
      VAR_2 | VAR_21 | VAR_20 |
      VAR_18);

 return VAR_7;
}
