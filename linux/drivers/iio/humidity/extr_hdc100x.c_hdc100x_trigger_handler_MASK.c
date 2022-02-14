
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iio_poll_func {struct iio_dev* indio_dev; } ;
struct iio_dev {int trig; } ;
struct i2c_client {int dev; } ;
struct hdc100x_data {int* adc_int_us; int lock; struct i2c_client* client; } ;
typedef int s16 ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct i2c_client*,int *,int) ;
 int FUNC_2 (struct i2c_client*,int ) ;
 int FUNC_3 (struct iio_dev*) ;
 struct hdc100x_data* FUNC_4 (struct iio_dev*) ;
 int FUNC_5 (struct iio_dev*,int *,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int,int) ;

__attribute__((used)) static irqreturn_t FUNC_10(int VAR_2, void *VAR_3)
{
 struct iio_poll_func *VAR_4 = VAR_3;
 struct iio_dev *VAR_5 = VAR_4->indio_dev;
 struct hdc100x_data *VAR_6 = FUNC_4(VAR_5);
 struct i2c_client *VAR_7 = VAR_6->client;
 int VAR_8 = VAR_6->adc_int_us[0] + VAR_6->adc_int_us[1];
 int VAR_9;
 s16 VAR_10[8];


 FUNC_7(&VAR_6->lock);
 VAR_9 = FUNC_2(VAR_7, VAR_0);
 if (VAR_9 < 0) {
  FUNC_0(&VAR_7->dev, "cannot start measurement\n");
  goto err;
 }
 FUNC_9(VAR_8, VAR_8 + 1000);

 VAR_9 = FUNC_1(VAR_7, (u8 *)VAR_10, 4);
 if (VAR_9 < 0) {
  FUNC_0(&VAR_7->dev, "cannot read sensor data\n");
  goto err;
 }

 FUNC_5(VAR_5, VAR_10,
        FUNC_3(VAR_5));
err:
 FUNC_8(&VAR_6->lock);
 FUNC_6(VAR_5->trig);

 return VAR_1;
}
