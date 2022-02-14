
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sgp_data {scalar_t__ iaq_thread; } ;
struct iio_dev {int dummy; } ;
struct i2c_client {int dummy; } ;


 struct iio_dev* FUNC_0 (struct i2c_client*) ;
 struct sgp_data* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_0)
{
 struct iio_dev *VAR_1 = FUNC_0(VAR_0);
 struct sgp_data *VAR_2 = FUNC_1(VAR_1);

 if (VAR_2->iaq_thread)
  FUNC_2(VAR_2->iaq_thread);

 return 0;
}
