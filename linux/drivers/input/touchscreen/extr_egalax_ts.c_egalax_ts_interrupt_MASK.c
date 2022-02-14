
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct input_dev {int dummy; } ;
struct i2c_client {int dev; } ;
struct egalax_ts {struct i2c_client* client; struct input_dev* input_dev; } ;
typedef int irqreturn_t ;


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
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (struct i2c_client*,int*,int) ;
 int FUNC_2 (struct input_dev*,int) ;
 int FUNC_3 (struct input_dev*,int ,int) ;
 int FUNC_4 (struct input_dev*,int) ;
 int FUNC_5 (struct input_dev*,int ,int) ;
 int FUNC_6 (struct input_dev*) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_14, void *VAR_15)
{
 struct egalax_ts *VAR_16 = VAR_15;
 struct input_dev *VAR_17 = VAR_16->input_dev;
 struct i2c_client *VAR_18 = VAR_16->client;
 u8 VAR_19[VAR_10];
 int VAR_20, VAR_21, VAR_22, VAR_23, VAR_24;
 int VAR_25 = 0;
 bool VAR_26, VAR_27;
 u8 VAR_28;

 do {
  VAR_21 = FUNC_1(VAR_18, VAR_19, VAR_10);
 } while (VAR_21 == -VAR_3 && VAR_25++ < VAR_4);

 if (VAR_21 < 0)
  return VAR_9;

 if (VAR_19[0] != VAR_13) {

  return VAR_9;
 }

 VAR_28 = VAR_19[1];
 VAR_22 = (VAR_19[3] << 8) | VAR_19[2];
 VAR_23 = (VAR_19[5] << 8) | VAR_19[4];
 VAR_24 = (VAR_19[7] << 8) | VAR_19[6];

 VAR_27 = VAR_28 & VAR_8;
 VAR_20 = (VAR_28 & VAR_6) >> VAR_7;
 VAR_26 = VAR_28 & VAR_5;

 if (!VAR_27 || VAR_20 > VAR_11) {
  FUNC_0(&VAR_18->dev, "point invalid\n");
  return VAR_9;
 }

 FUNC_4(VAR_17, VAR_20);
 FUNC_3(VAR_17, VAR_12, VAR_26);

 FUNC_0(&VAR_18->dev, "%s id:%d x:%d y:%d z:%d",
  VAR_26 ? "down" : "up", VAR_20, VAR_22, VAR_23, VAR_24);

 if (VAR_26) {
  FUNC_5(VAR_17, VAR_0, VAR_22);
  FUNC_5(VAR_17, VAR_1, VAR_23);
  FUNC_5(VAR_17, VAR_2, VAR_24);
 }

 FUNC_2(VAR_17, 1);
 FUNC_6(VAR_17);

 return VAR_9;
}
