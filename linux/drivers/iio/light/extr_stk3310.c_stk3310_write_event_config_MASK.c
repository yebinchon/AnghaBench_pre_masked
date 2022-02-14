
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stk3310_data {int lock; int reg_int_ps; struct i2c_client* client; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
struct i2c_client {int dev; } ;
typedef enum iio_event_type { ____Placeholder_iio_event_type } iio_event_type ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 struct stk3310_data* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_1,
          const struct iio_chan_spec *VAR_2,
          enum iio_event_type VAR_3,
          enum iio_event_direction VAR_4,
          int VAR_5)
{
 int VAR_6;
 struct stk3310_data *VAR_7 = FUNC_1(VAR_1);
 struct i2c_client *VAR_8 = VAR_7->client;

 if (VAR_5 < 0 || VAR_5 > 7)
  return -VAR_0;


 FUNC_2(&VAR_7->lock);
 VAR_6 = FUNC_4(VAR_7->reg_int_ps, VAR_5);
 if (VAR_6 < 0)
  FUNC_0(&VAR_8->dev, "failed to set interrupt mode\n");
 FUNC_3(&VAR_7->lock);

 return VAR_6;
}
