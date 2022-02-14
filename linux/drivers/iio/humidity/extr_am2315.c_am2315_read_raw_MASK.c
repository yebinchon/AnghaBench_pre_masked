
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int type; } ;
struct am2315_sensor_data {int hum_data; int temp_data; } ;
struct am2315_data {int dummy; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct am2315_data*,struct am2315_sensor_data*) ;
 struct am2315_data* FUNC_1 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_3,
      struct iio_chan_spec const *VAR_4,
      int *VAR_5, int *VAR_6, long VAR_7)
{
 int VAR_8;
 struct am2315_sensor_data VAR_9;
 struct am2315_data *VAR_10 = FUNC_1(VAR_3);

 switch (VAR_7) {
 case 129:
  VAR_8 = FUNC_0(VAR_10, &VAR_9);
  if (VAR_8 < 0)
   return VAR_8;
  *VAR_5 = (VAR_4->type == VAR_1) ?
    VAR_9.hum_data : VAR_9.temp_data;
  return VAR_2;
 case 128:
  *VAR_5 = 100;
  return VAR_2;
 }

 return -VAR_0;
}
