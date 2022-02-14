
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tsys01_dev {int convert_and_read; int read_prom_word; int reset; struct i2c_client* client; } ;
struct iio_dev {int dummy; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; int adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*) ;
 struct iio_dev* FUNC_1 (int *,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct i2c_client*,struct iio_dev*) ;
 struct tsys01_dev* FUNC_4 (struct iio_dev*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (struct iio_dev*,int *) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_8,
       const struct i2c_device_id *VAR_9)
{
 struct tsys01_dev *VAR_10;
 struct iio_dev *VAR_11;

 if (!FUNC_2(VAR_8->adapter,
         VAR_3 |
         VAR_4 |
         VAR_2)) {
  FUNC_0(&VAR_8->dev,
   "Adapter does not support some i2c transaction\n");
  return -VAR_1;
 }

 VAR_11 = FUNC_1(&VAR_8->dev, sizeof(*VAR_10));
 if (!VAR_11)
  return -VAR_0;

 VAR_10 = FUNC_4(VAR_11);
 VAR_10->client = VAR_8;
 VAR_10->reset = VAR_7;
 VAR_10->read_prom_word = VAR_6;
 VAR_10->convert_and_read = VAR_5;

 FUNC_3(VAR_8, VAR_11);

 return FUNC_5(VAR_11, &VAR_8->dev);
}
