
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_sensor_data {int vdd_io; int vdd; } ;
struct iio_dev {int dummy; } ;


 struct st_sensor_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct iio_dev *VAR_0)
{
 struct st_sensor_data *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_1->vdd);
 FUNC_1(VAR_1->vdd_io);
}
