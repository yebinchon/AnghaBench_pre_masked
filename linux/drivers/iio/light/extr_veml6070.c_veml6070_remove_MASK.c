
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct veml6070_data {int client2; } ;
struct iio_dev {int dummy; } ;
struct i2c_client {int dummy; } ;


 struct iio_dev* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct iio_dev*) ;
 struct veml6070_data* FUNC_3 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_0)
{
 struct iio_dev *VAR_1 = FUNC_0(VAR_0);
 struct veml6070_data *VAR_2 = FUNC_3(VAR_1);

 FUNC_2(VAR_1);
 FUNC_1(VAR_2->client2);

 return 0;
}
