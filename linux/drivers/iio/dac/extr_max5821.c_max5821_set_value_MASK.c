
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct max5821_data {struct i2c_client* client; } ;
struct iio_dev {int dummy; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i2c_client*,int*,int) ;
 struct max5821_data* FUNC_1 (struct iio_dev*) ;
 int* VAR_2 ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_3,
        int VAR_4, int VAR_5)
{
 struct max5821_data *VAR_6 = FUNC_1(VAR_3);
 struct i2c_client *VAR_7 = VAR_6->client;
 u8 VAR_8[2];
 int VAR_9;

 if ((VAR_4 < 0) || (VAR_4 > 1023))
  return -VAR_0;

 if ((VAR_5 != 0) && (VAR_5 != 1))
  return -VAR_0;

 VAR_8[0] = VAR_2[VAR_5];
 VAR_8[0] |= VAR_4 >> 6;
 VAR_8[1] = (VAR_4 & 0x3f) << 2;

 VAR_9 = FUNC_0(VAR_7, VAR_8, 2);
 if (VAR_9 < 0)
  return VAR_9;
 else if (VAR_9 != 2)
  return -VAR_1;
 else
  return 0;
}
