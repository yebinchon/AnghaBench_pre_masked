
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct stk3310_data {int regmap; int reg_ps_gain; struct i2c_client* client; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
struct i2c_client {int dev; } ;
typedef enum iio_event_type { ____Placeholder_iio_event_type } iio_event_type ;
typedef enum iio_event_info { ____Placeholder_iio_event_info } iio_event_info ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*) ;
 struct stk3310_data* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int ,int ,int *,int) ;
 int FUNC_4 (int ,unsigned int*) ;
 int* VAR_5 ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_6,
          const struct iio_chan_spec *VAR_7,
          enum iio_event_type VAR_8,
          enum iio_event_direction VAR_9,
          enum iio_event_info VAR_10,
          int VAR_11, int VAR_12)
{
 u8 VAR_13;
 __be16 VAR_14;
 int VAR_15;
 unsigned int VAR_16;
 struct stk3310_data *VAR_17 = FUNC_2(VAR_6);
 struct i2c_client *VAR_18 = VAR_17->client;

 VAR_15 = FUNC_4(VAR_17->reg_ps_gain, &VAR_16);
 if (VAR_15 < 0)
  return VAR_15;

 if (VAR_11 < 0 || VAR_11 > VAR_5[VAR_16])
  return -VAR_0;

 if (VAR_9 == VAR_2)
  VAR_13 = VAR_3;
 else if (VAR_9 == VAR_1)
  VAR_13 = VAR_4;
 else
  return -VAR_0;

 VAR_14 = FUNC_0(VAR_11);
 VAR_15 = FUNC_3(VAR_17->regmap, VAR_13, &VAR_14, 2);
 if (VAR_15 < 0)
  FUNC_1(&VAR_18->dev, "failed to set PS threshold!\n");

 return VAR_15;
}
