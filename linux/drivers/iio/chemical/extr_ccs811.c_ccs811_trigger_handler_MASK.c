
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iio_poll_func {struct iio_dev* indio_dev; } ;
struct iio_dev {int trig; } ;
struct i2c_client {int dev; } ;
struct ccs811_data {struct i2c_client* client; } ;
typedef int s16 ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct i2c_client*,int ,int,int *) ;
 int FUNC_2 (struct iio_dev*) ;
 struct ccs811_data* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (struct iio_dev*,int *,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_2, void *VAR_3)
{
 struct iio_poll_func *VAR_4 = VAR_3;
 struct iio_dev *VAR_5 = VAR_4->indio_dev;
 struct ccs811_data *VAR_6 = FUNC_3(VAR_5);
 struct i2c_client *VAR_7 = VAR_6->client;
 s16 VAR_8[8];
 int VAR_9;

 VAR_9 = FUNC_1(VAR_7, VAR_0, 4,
         (u8 *)&VAR_8);
 if (VAR_9 != 4) {
  FUNC_0(&VAR_7->dev, "cannot read sensor data\n");
  goto err;
 }

 FUNC_4(VAR_5, VAR_8,
        FUNC_2(VAR_5));

err:
 FUNC_5(VAR_5->trig);

 return VAR_1;
}
