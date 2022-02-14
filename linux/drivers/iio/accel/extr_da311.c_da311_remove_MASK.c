
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (struct i2c_client*,int) ;
 struct iio_dev* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_0)
{
 struct iio_dev *VAR_1 = FUNC_1(VAR_0);

 FUNC_2(VAR_1);

 return FUNC_0(VAR_0, 0);
}
