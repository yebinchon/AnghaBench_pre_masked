
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_sensor_data {int trig; int irq; } ;
struct iio_dev {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 struct st_sensor_data* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

void FUNC_4(struct iio_dev *VAR_0)
{
 struct st_sensor_data *VAR_1 = FUNC_1(VAR_0);

 FUNC_3(VAR_1->trig);
 FUNC_0(VAR_1->irq, VAR_1->trig);
 FUNC_2(VAR_1->trig);
}
