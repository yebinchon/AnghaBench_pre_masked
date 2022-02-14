
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vl6180_data {int als_it_ms; int als_gain_milli; struct i2c_client* client; } ;
struct i2c_client {int dev; } ;


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
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct vl6180_data*,int) ;
 int FUNC_3 (struct i2c_client*,int ) ;
 int FUNC_4 (struct i2c_client*,int ,int) ;
 int FUNC_5 (struct i2c_client*,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct vl6180_data *VAR_11)
{
 struct i2c_client *VAR_12 = VAR_11->client;
 int VAR_13;

 VAR_13 = FUNC_3(VAR_12, VAR_7);
 if (VAR_13 < 0)
  return VAR_13;

 if (VAR_13 != VAR_8) {
  FUNC_0(&VAR_12->dev, "invalid model ID %02x\n", VAR_13);
  return -VAR_0;
 }

 VAR_13 = FUNC_2(VAR_11, 1);
 if (VAR_13 < 0)
  return VAR_13;

 VAR_13 = FUNC_3(VAR_12, VAR_9);
 if (VAR_13 < 0)
  return VAR_13;





 if (VAR_13 != 0x01)
  FUNC_1(&VAR_12->dev, "device is not fresh out of reset\n");


 VAR_13 = FUNC_4(VAR_12, VAR_6,
    VAR_5 | VAR_10);
 if (VAR_13 < 0)
  return VAR_13;


 VAR_11->als_it_ms = 100;
 VAR_13 = FUNC_5(VAR_12, VAR_3, VAR_4);
 if (VAR_13 < 0)
  return VAR_13;


 VAR_11->als_gain_milli = 1000;
 VAR_13 = FUNC_4(VAR_12, VAR_1, VAR_2);
 if (VAR_13 < 0)
  return VAR_13;

 VAR_13 = FUNC_4(VAR_12, VAR_9, 0x00);
 if (VAR_13 < 0)
  return VAR_13;

 return FUNC_2(VAR_11, 0);
}
