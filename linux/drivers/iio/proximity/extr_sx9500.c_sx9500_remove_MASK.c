
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sx9500_data {int buffer; int trig; } ;
struct iio_dev {int dummy; } ;
struct i2c_client {scalar_t__ irq; } ;


 struct iio_dev* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct iio_dev*) ;
 struct sx9500_data* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct iio_dev*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_0)
{
 struct iio_dev *VAR_1 = FUNC_0(VAR_0);
 struct sx9500_data *VAR_2 = FUNC_2(VAR_1);

 FUNC_1(VAR_1);
 FUNC_4(VAR_1);
 if (VAR_0->irq > 0)
  FUNC_3(VAR_2->trig);
 FUNC_5(VAR_2->buffer);

 return 0;
}
