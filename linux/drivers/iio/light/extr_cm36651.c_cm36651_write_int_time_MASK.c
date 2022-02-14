
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_chan_spec {int type; int address; } ;
struct i2c_client {int dev; } ;
struct cm36651_data {int* cs_int_time; int ps_int_time; struct i2c_client* ps_client; struct i2c_client* client; } ;


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


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct i2c_client*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct cm36651_data *VAR_11,
    struct iio_chan_spec const *VAR_12, int VAR_13)
{
 struct i2c_client *VAR_14 = VAR_11->client;
 struct i2c_client *VAR_15 = VAR_11->ps_client;
 int VAR_16, VAR_17;

 switch (VAR_12->type) {
 case 129:
  if (VAR_13 == 80000)
   VAR_16 = VAR_1;
  else if (VAR_13 == 160000)
   VAR_16 = VAR_2;
  else if (VAR_13 == 320000)
   VAR_16 = VAR_3;
  else if (VAR_13 == 640000)
   VAR_16 = VAR_4;
  else
   return -VAR_10;

  VAR_17 = FUNC_1(VAR_14, VAR_0,
        VAR_16 >> 2 * (VAR_12->address));
  if (VAR_17 < 0) {
   FUNC_0(&VAR_14->dev, "CS integration time write failed\n");
   return VAR_17;
  }
  VAR_11->cs_int_time[VAR_12->address] = VAR_16;
  break;
 case 128:
  if (VAR_13 == 320)
   VAR_16 = VAR_6;
  else if (VAR_13 == 420)
   VAR_16 = VAR_7;
  else if (VAR_13 == 520)
   VAR_16 = VAR_8;
  else if (VAR_13 == 640)
   VAR_16 = VAR_9;
  else
   return -VAR_10;

  VAR_17 = FUNC_1(VAR_15,
      VAR_5, VAR_16);
  if (VAR_17 < 0) {
   FUNC_0(&VAR_14->dev, "PS integration time write failed\n");
   return VAR_17;
  }
  VAR_11->ps_int_time = VAR_16;
  break;
 default:
  return -VAR_10;
 }

 return VAR_17;
}
