
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct i2c_client {int dummy; } ;
struct ccs811_data {scalar_t__ drdy_trig; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct iio_dev* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct i2c_client*,int ,int ) ;
 int FUNC_2 (struct iio_dev*) ;
 struct ccs811_data* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_2)
{
 struct iio_dev *VAR_3 = FUNC_0(VAR_2);
 struct ccs811_data *VAR_4 = FUNC_3(VAR_3);

 FUNC_2(VAR_3);
 FUNC_5(VAR_3);
 if (VAR_4->drdy_trig)
  FUNC_4(VAR_4->drdy_trig);

 return FUNC_1(VAR_2, VAR_0,
      VAR_1);
}
