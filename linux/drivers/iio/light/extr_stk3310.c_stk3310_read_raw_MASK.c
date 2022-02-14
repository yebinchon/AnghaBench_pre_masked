
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct stk3310_data {int reg_ps_gain; int reg_als_gain; int reg_ps_it; int reg_als_it; int lock; int regmap; struct i2c_client* client; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {scalar_t__ type; } ;
struct i2c_client {int dev; } ;
typedef int __be16 ;


 int VAR_0 ;



 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*) ;
 struct stk3310_data* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,int *,int) ;
 int FUNC_6 (int ,unsigned int*) ;
 int** VAR_7 ;
 int** VAR_8 ;

__attribute__((used)) static int FUNC_7(struct iio_dev *VAR_9,
       struct iio_chan_spec const *VAR_10,
       int *VAR_11, int *VAR_12, long VAR_13)
{
 u8 VAR_14;
 __be16 VAR_15;
 int VAR_16;
 unsigned int VAR_17;
 struct stk3310_data *VAR_18 = FUNC_2(VAR_9);
 struct i2c_client *VAR_19 = VAR_18->client;

 if (VAR_10->type != VAR_1 && VAR_10->type != VAR_2)
  return -VAR_0;

 switch (VAR_13) {
 case 129:
  if (VAR_10->type == VAR_1)
   VAR_14 = VAR_5;
  else
   VAR_14 = VAR_6;

  FUNC_3(&VAR_18->lock);
  VAR_16 = FUNC_5(VAR_18->regmap, VAR_14, &VAR_15, 2);
  if (VAR_16 < 0) {
   FUNC_1(&VAR_19->dev, "register read failed\n");
   FUNC_4(&VAR_18->lock);
   return VAR_16;
  }
  *VAR_11 = FUNC_0(VAR_15);
  FUNC_4(&VAR_18->lock);
  return VAR_3;
 case 130:
  if (VAR_10->type == VAR_1)
   VAR_16 = FUNC_6(VAR_18->reg_als_it, &VAR_17);
  else
   VAR_16 = FUNC_6(VAR_18->reg_ps_it, &VAR_17);
  if (VAR_16 < 0)
   return VAR_16;

  *VAR_11 = VAR_7[VAR_17][0];
  *VAR_12 = VAR_7[VAR_17][1];
  return VAR_4;
 case 128:
  if (VAR_10->type == VAR_1)
   VAR_16 = FUNC_6(VAR_18->reg_als_gain, &VAR_17);
  else
   VAR_16 = FUNC_6(VAR_18->reg_ps_gain, &VAR_17);
  if (VAR_16 < 0)
   return VAR_16;

  *VAR_11 = VAR_8[VAR_17][0];
  *VAR_12 = VAR_8[VAR_17][1];
  return VAR_4;
 }

 return -VAR_0;
}
