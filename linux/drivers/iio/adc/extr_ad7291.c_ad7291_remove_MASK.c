
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct i2c_client {scalar_t__ irq; } ;
struct ad7291_chip_info {scalar_t__ reg; } ;


 int FUNC_0 (scalar_t__,struct iio_dev*) ;
 struct iio_dev* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct iio_dev*) ;
 struct ad7291_chip_info* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_0)
{
 struct iio_dev *VAR_1 = FUNC_1(VAR_0);
 struct ad7291_chip_info *VAR_2 = FUNC_3(VAR_1);

 FUNC_2(VAR_1);

 if (VAR_0->irq)
  FUNC_0(VAR_0->irq, VAR_1);

 if (VAR_2->reg)
  FUNC_4(VAR_2->reg);

 return 0;
}
