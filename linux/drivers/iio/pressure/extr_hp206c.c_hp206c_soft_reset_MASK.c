
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct i2c_client {int dev; } ;
struct hp206c_data {struct i2c_client* client; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct i2c_client*,int) ;
 int FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct i2c_client*,int ) ;
 struct hp206c_data* FUNC_4 (struct iio_dev*) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static int FUNC_6(struct iio_dev *VAR_1)
{
 int VAR_2;
 struct hp206c_data *VAR_3 = FUNC_4(VAR_1);
 struct i2c_client *VAR_4 = VAR_3->client;

 VAR_2 = FUNC_3(VAR_4, VAR_0);
 if (VAR_2) {
  FUNC_0(&VAR_4->dev, "Failed to reset device: %d\n", VAR_2);
  return VAR_2;
 }

 FUNC_5(400, 600);

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2) {
  FUNC_0(&VAR_4->dev, "Device not ready after soft reset: %d\n", VAR_2);
  return VAR_2;
 }

 VAR_2 = FUNC_1(VAR_4, 1);
 if (VAR_2)
  FUNC_0(&VAR_4->dev, "Failed to enable compensation: %d\n", VAR_2);
 return VAR_2;
}
