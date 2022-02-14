
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max1363_state {scalar_t__ reg; scalar_t__ vref; } ;
struct iio_dev {int dummy; } ;
struct i2c_client {int dummy; } ;


 struct iio_dev* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (struct iio_dev*) ;
 struct max1363_state* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (struct iio_dev*) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_0)
{
 struct iio_dev *VAR_1 = FUNC_0(VAR_0);
 struct max1363_state *VAR_2 = FUNC_3(VAR_1);

 FUNC_1(VAR_1);
 FUNC_4(VAR_1);
 if (VAR_2->vref)
  FUNC_5(VAR_2->vref);
 FUNC_5(VAR_2->reg);
 FUNC_2(VAR_1);

 return 0;
}
