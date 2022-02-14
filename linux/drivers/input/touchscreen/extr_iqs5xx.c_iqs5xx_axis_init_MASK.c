
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct touchscreen_properties {int max_x; int max_y; scalar_t__ swap_x_y; scalar_t__ invert_y; scalar_t__ invert_x; } ;
struct iqs5xx_private {struct input_dev* input; } ;
struct TYPE_2__ {int bustype; } ;
struct input_dev {int close; int open; TYPE_1__ id; int name; } ;
struct i2c_client {int dev; int name; } ;


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
 int FUNC_0 (int *,char*,int,...) ;
 struct input_dev* FUNC_1 (int *) ;
 struct iqs5xx_private* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (struct input_dev*,int ,int) ;
 int FUNC_4 (struct input_dev*,int ,int ) ;
 int FUNC_5 (struct input_dev*,int ,int ) ;
 int FUNC_6 (struct input_dev*,struct iqs5xx_private*) ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_7 (struct i2c_client*,int ,int*) ;
 int FUNC_8 (struct i2c_client*,int ,int*) ;
 int FUNC_9 (struct i2c_client*,int ,int) ;
 int FUNC_10 (struct i2c_client*,int ,int) ;
 int FUNC_11 (int,int) ;
 int FUNC_12 (struct input_dev*,int,struct touchscreen_properties*) ;

__attribute__((used)) static int FUNC_13(struct i2c_client *VAR_20)
{
 struct iqs5xx_private *VAR_21 = FUNC_2(VAR_20);
 struct touchscreen_properties VAR_22;
 struct input_dev *VAR_23;
 int VAR_24;
 u16 VAR_25, VAR_26;
 u16 VAR_27, VAR_28;
 u8 VAR_29;

 if (!VAR_21->input) {
  VAR_23 = FUNC_1(&VAR_20->dev);
  if (!VAR_23)
   return -VAR_5;

  VAR_23->name = VAR_20->name;
  VAR_23->id.bustype = VAR_3;
  VAR_23->open = VAR_19;
  VAR_23->close = VAR_18;

  FUNC_5(VAR_23, VAR_6, VAR_0);
  FUNC_5(VAR_23, VAR_6, VAR_1);
  FUNC_5(VAR_23, VAR_6, VAR_2);

  FUNC_6(VAR_23, VAR_21);
  VAR_21->input = VAR_23;
 }

 FUNC_12(VAR_21->input, 1, &VAR_22);

 VAR_24 = FUNC_7(VAR_20, VAR_13, &VAR_29);
 if (VAR_24)
  return VAR_24;
 VAR_26 = (VAR_29 - 1) * VAR_11;

 VAR_24 = FUNC_7(VAR_20, VAR_14, &VAR_29);
 if (VAR_24)
  return VAR_24;
 VAR_28 = (VAR_29 - 1) * VAR_11;

 VAR_24 = FUNC_7(VAR_20, VAR_15, &VAR_29);
 if (VAR_24)
  return VAR_24;

 if (VAR_29 & VAR_12)
  FUNC_11(VAR_26, VAR_28);

 if (VAR_22.swap_x_y)
  VAR_29 ^= VAR_12;

 if (VAR_22.invert_x)
  VAR_29 ^= VAR_22.swap_x_y ? VAR_9 : VAR_8;

 if (VAR_22.invert_y)
  VAR_29 ^= VAR_22.swap_x_y ? VAR_8 : VAR_9;

 VAR_24 = FUNC_9(VAR_20, VAR_15, VAR_29);
 if (VAR_24)
  return VAR_24;

 if (VAR_22.max_x > VAR_26) {
  FUNC_0(&VAR_20->dev, "Invalid maximum x-coordinate: %u > %u\n",
   VAR_22.max_x, VAR_26);
  return -VAR_4;
 } else if (VAR_22.max_x == 0) {
  VAR_24 = FUNC_8(VAR_20, VAR_16, &VAR_25);
  if (VAR_24)
   return VAR_24;

  FUNC_3(VAR_21->input,
      VAR_22.swap_x_y ? VAR_1 :
        VAR_0,
      VAR_25);
 } else {
  VAR_25 = (u16)VAR_22.max_x;
 }

 if (VAR_22.max_y > VAR_28) {
  FUNC_0(&VAR_20->dev, "Invalid maximum y-coordinate: %u > %u\n",
   VAR_22.max_y, VAR_28);
  return -VAR_4;
 } else if (VAR_22.max_y == 0) {
  VAR_24 = FUNC_8(VAR_20, VAR_17, &VAR_27);
  if (VAR_24)
   return VAR_24;

  FUNC_3(VAR_21->input,
      VAR_22.swap_x_y ? VAR_0 :
        VAR_1,
      VAR_27);
 } else {
  VAR_27 = (u16)VAR_22.max_y;
 }






 VAR_24 = FUNC_10(VAR_20,
      VAR_22.swap_x_y ? VAR_17 : VAR_16,
      VAR_25);
 if (VAR_24)
  return VAR_24;

 VAR_24 = FUNC_10(VAR_20,
      VAR_22.swap_x_y ? VAR_16 : VAR_17,
      VAR_27);
 if (VAR_24)
  return VAR_24;

 VAR_24 = FUNC_4(VAR_21->input, VAR_10,
        VAR_7);
 if (VAR_24)
  FUNC_0(&VAR_20->dev, "Failed to initialize slots: %d\n",
   VAR_24);

 return VAR_24;
}
