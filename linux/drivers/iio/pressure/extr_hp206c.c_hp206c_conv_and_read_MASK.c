
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iio_dev {int dev; } ;
struct i2c_client {int dummy; } ;
struct hp206c_data {struct i2c_client* client; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct i2c_client*,int ) ;
 int FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct i2c_client*,int ) ;
 struct hp206c_data* FUNC_4 (struct iio_dev*) ;
 int FUNC_5 (unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_6(struct iio_dev *VAR_0,
    u8 VAR_1, u8 VAR_2,
    unsigned int VAR_3)
{
 int VAR_4;
 struct hp206c_data *VAR_5 = FUNC_4(VAR_0);
 struct i2c_client *VAR_6 = VAR_5->client;

 VAR_4 = FUNC_2(VAR_0);
 if (VAR_4 < 0) {
  FUNC_0(&VAR_0->dev, "Device not ready: %d\n", VAR_4);
  return VAR_4;
 }

 VAR_4 = FUNC_3(VAR_6, VAR_1);
 if (VAR_4 < 0) {
  FUNC_0(&VAR_0->dev, "Failed convert: %d\n", VAR_4);
  return VAR_4;
 }

 FUNC_5(VAR_3, VAR_3 * 3 / 2);

 VAR_4 = FUNC_2(VAR_0);
 if (VAR_4 < 0) {
  FUNC_0(&VAR_0->dev, "Device not ready: %d\n", VAR_4);
  return VAR_4;
 }

 VAR_4 = FUNC_1(VAR_6, VAR_2);
 if (VAR_4 < 0)
  FUNC_0(&VAR_0->dev, "Failed read: %d\n", VAR_4);

 return VAR_4;
}
