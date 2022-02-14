
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_sensor_data {scalar_t__ irq; } ;
struct iio_dev {int dummy; } ;


 int FUNC_0 (struct iio_dev*) ;
 struct st_sensor_data* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (struct iio_dev*) ;

void FUNC_5(struct iio_dev *VAR_0)
{
 struct st_sensor_data *VAR_1 = FUNC_1(VAR_0);

 FUNC_4(VAR_0);

 FUNC_0(VAR_0);
 if (VAR_1->irq > 0)
  FUNC_3(VAR_0);

 FUNC_2(VAR_0);
}
