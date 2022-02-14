
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_sensor_data {int hw_timestamp; } ;
struct iio_trigger {int dummy; } ;
struct iio_dev {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (struct iio_dev*) ;
 struct st_sensor_data* FUNC_1 (struct iio_dev*) ;
 struct iio_dev* FUNC_2 (struct iio_trigger*) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_1, void *VAR_2)
{
 struct iio_trigger *VAR_3 = VAR_2;
 struct iio_dev *VAR_4 = FUNC_2(VAR_3);
 struct st_sensor_data *VAR_5 = FUNC_1(VAR_4);


 VAR_5->hw_timestamp = FUNC_0(VAR_4);
 return VAR_0;
}
