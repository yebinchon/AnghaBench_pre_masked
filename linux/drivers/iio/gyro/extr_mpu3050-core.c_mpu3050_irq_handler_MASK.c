
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpu3050 {int hw_timestamp; int hw_irq_trigger; } ;
struct iio_trigger {int dummy; } ;
struct iio_dev {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iio_dev*) ;
 struct mpu3050* FUNC_1 (struct iio_dev*) ;
 struct iio_dev* FUNC_2 (struct iio_trigger*) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_2, void *VAR_3)
{
 struct iio_trigger *VAR_4 = VAR_3;
 struct iio_dev *VAR_5 = FUNC_2(VAR_4);
 struct mpu3050 *VAR_6 = FUNC_1(VAR_5);

 if (!VAR_6->hw_irq_trigger)
  return VAR_0;


 VAR_6->hw_timestamp = FUNC_0(VAR_5);

 return VAR_1;
}
