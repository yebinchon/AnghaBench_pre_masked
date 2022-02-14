
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct max5821_data {int lock; struct i2c_client* client; } ;
struct iio_dev {int dummy; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct i2c_client*,int*,int) ;
 int FUNC_1 (struct i2c_client*,int*,int) ;
 struct max5821_data* FUNC_2 (struct iio_dev*) ;
 int* VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_4,
        int *VAR_5, int VAR_6)
{
 struct max5821_data *VAR_7 = FUNC_2(VAR_4);
 struct i2c_client *VAR_8 = VAR_7->client;
 u8 VAR_9[1];
 u8 VAR_10[2];
 int VAR_11;

 if ((VAR_6 != 0) && (VAR_6 != 1))
  return -VAR_0;

 VAR_9[0] = VAR_3[VAR_6];

 FUNC_3(&VAR_7->lock);

 VAR_11 = FUNC_1(VAR_8, VAR_9, 1);
 if (VAR_11 < 0) {
  FUNC_4(&VAR_7->lock);
  return VAR_11;
 } else if (VAR_11 != 1) {
  FUNC_4(&VAR_7->lock);
  return -VAR_1;
 }

 VAR_11 = FUNC_0(VAR_8, VAR_10, 2);
 if (VAR_11 < 0) {
  FUNC_4(&VAR_7->lock);
  return VAR_11;
 } else if (VAR_11 != 2) {
  FUNC_4(&VAR_7->lock);
  return -VAR_1;
 }

 FUNC_4(&VAR_7->lock);

 *VAR_5 = ((VAR_10[0] & 0x0f) << 6) | (VAR_10[1] >> 2);

 return VAR_2;
}
