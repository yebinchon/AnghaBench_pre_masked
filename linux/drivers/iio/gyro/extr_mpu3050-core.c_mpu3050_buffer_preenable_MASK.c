
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpu3050 {int hw_irq_trigger; int dev; } ;
struct iio_dev {int dummy; } ;


 struct mpu3050* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct mpu3050*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_0)
{
 struct mpu3050 *VAR_1 = FUNC_0(VAR_0);

 FUNC_2(VAR_1->dev);


 if (!VAR_1->hw_irq_trigger)
  return FUNC_1(VAR_1);

 return 0;
}
