
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ms5611_state {struct i2c_client* client; int read_adc_temp_and_pressure; int read_prom_word; int reset; } ;
struct iio_dev {int dummy; } ;
struct i2c_device_id {int driver_data; int name; } ;
struct i2c_client {int dev; int adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct iio_dev* FUNC_0 (int *,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct i2c_client*,struct iio_dev*) ;
 struct ms5611_state* FUNC_3 (struct iio_dev*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (struct iio_dev*,int *,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_8,
       const struct i2c_device_id *VAR_9)
{
 struct ms5611_state *VAR_10;
 struct iio_dev *VAR_11;

 if (!FUNC_1(VAR_8->adapter,
         VAR_4 |
         VAR_3 |
         VAR_2))
  return -VAR_1;

 VAR_11 = FUNC_0(&VAR_8->dev, sizeof(*VAR_10));
 if (!VAR_11)
  return -VAR_0;

 VAR_10 = FUNC_3(VAR_11);
 FUNC_2(VAR_8, VAR_11);
 VAR_10->reset = VAR_7;
 VAR_10->read_prom_word = VAR_6;
 VAR_10->read_adc_temp_and_pressure = VAR_5;
 VAR_10->client = VAR_8;

 return FUNC_4(VAR_11, &VAR_8->dev, VAR_9->name, VAR_9->driver_data);
}
