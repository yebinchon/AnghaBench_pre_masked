
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpu3050 {scalar_t__ irq; } ;
struct iio_dev {int dummy; } ;
struct device {int dummy; } ;


 struct iio_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (scalar_t__,struct mpu3050*) ;
 int FUNC_2 (struct iio_dev*) ;
 struct mpu3050* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (struct iio_dev*) ;
 int FUNC_5 (struct mpu3050*) ;
 int FUNC_6 (struct device*) ;
 int FUNC_7 (struct device*) ;
 int FUNC_8 (struct device*) ;

int FUNC_9(struct device *VAR_0)
{
 struct iio_dev *VAR_1 = FUNC_0(VAR_0);
 struct mpu3050 *VAR_2 = FUNC_3(VAR_1);

 FUNC_7(VAR_0);
 FUNC_8(VAR_0);
 FUNC_6(VAR_0);
 FUNC_4(VAR_1);
 if (VAR_2->irq)
  FUNC_1(VAR_2->irq, VAR_2);
 FUNC_2(VAR_1);
 FUNC_5(VAR_2);

 return 0;
}
