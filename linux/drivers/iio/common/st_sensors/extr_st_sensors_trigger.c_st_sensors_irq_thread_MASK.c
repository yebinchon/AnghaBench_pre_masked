
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_sensor_data {int hw_timestamp; int dev; scalar_t__ hw_irq_trigger; int edge_irq; } ;
struct iio_trigger {int dummy; } ;
struct iio_dev {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct iio_dev*) ;
 struct st_sensor_data* FUNC_2 (struct iio_dev*) ;
 struct iio_dev* FUNC_3 (struct iio_trigger*) ;
 int FUNC_4 (void*) ;
 scalar_t__ FUNC_5 (struct iio_dev*,struct st_sensor_data*) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_2, void *VAR_3)
{
 struct iio_trigger *VAR_4 = VAR_3;
 struct iio_dev *VAR_5 = FUNC_3(VAR_4);
 struct st_sensor_data *VAR_6 = FUNC_2(VAR_5);
 if (VAR_6->hw_irq_trigger &&
     FUNC_5(VAR_5, VAR_6)) {
  FUNC_4(VAR_3);
 } else {
  FUNC_0(VAR_6->dev, "spurious IRQ\n");
  return VAR_1;
 }






 if (!VAR_6->edge_irq)
  return VAR_0;







 while (VAR_6->hw_irq_trigger &&
        FUNC_5(VAR_5, VAR_6)) {
  FUNC_0(VAR_6->dev, "more samples came in during polling\n");
  VAR_6->hw_timestamp = FUNC_1(VAR_5);
  FUNC_4(VAR_3);
 }

 return VAR_0;
}
