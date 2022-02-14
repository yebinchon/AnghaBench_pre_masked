
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct m62332_data {int* raw; int mutex; int vcc; struct i2c_client* client; } ;
struct iio_dev {int dummy; } ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int FUNC_1 (struct i2c_client*,int*,int) ;
 struct m62332_data* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct iio_dev *VAR_1, u8 VAR_2, int VAR_3)
{
 struct m62332_data *VAR_4 = FUNC_2(VAR_1);
 struct i2c_client *VAR_5 = VAR_4->client;
 u8 VAR_6[2];
 int VAR_7;

 if (VAR_2 == VAR_4->raw[VAR_3])
  return 0;

 VAR_6[0] = VAR_3;
 VAR_6[1] = VAR_2;

 FUNC_3(&VAR_4->mutex);

 if (VAR_2) {
  VAR_7 = FUNC_6(VAR_4->vcc);
  if (VAR_7)
   goto out;
 }

 VAR_7 = FUNC_1(VAR_5, VAR_6, FUNC_0(VAR_6));
 if (VAR_7 >= 0 && VAR_7 != FUNC_0(VAR_6))
  VAR_7 = -VAR_0;
 if (VAR_7 < 0)
  goto out;

 VAR_4->raw[VAR_3] = VAR_2;

 if (!VAR_2)
  FUNC_5(VAR_4->vcc);

 FUNC_4(&VAR_4->mutex);

 return 0;

out:
 FUNC_4(&VAR_4->mutex);

 return VAR_7;
}
