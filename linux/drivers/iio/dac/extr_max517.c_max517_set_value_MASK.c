
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct max517_data {struct i2c_client* client; } ;
struct iio_dev {int dummy; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i2c_client*,int*,int) ;
 struct max517_data* FUNC_1 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_2,
 long VAR_3, int VAR_4)
{
 struct max517_data *VAR_5 = FUNC_1(VAR_2);
 struct i2c_client *VAR_6 = VAR_5->client;
 u8 VAR_7[2];
 int VAR_8;

 if (VAR_3 < 0 || VAR_3 > 255)
  return -VAR_0;

 VAR_7[0] = VAR_4;
 VAR_7[1] = VAR_3;

 VAR_8 = FUNC_0(VAR_6, VAR_7, 2);
 if (VAR_8 < 0)
  return VAR_8;
 else if (VAR_8 != 2)
  return -VAR_1;
 else
  return 0;
}
