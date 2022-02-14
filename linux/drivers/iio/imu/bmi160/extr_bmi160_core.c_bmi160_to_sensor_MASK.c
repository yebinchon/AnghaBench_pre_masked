
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum iio_chan_type { ____Placeholder_iio_chan_type } iio_chan_type ;
typedef enum bmi160_sensor_type { ____Placeholder_bmi160_sensor_type } bmi160_sensor_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



__attribute__((used)) static enum bmi160_sensor_type FUNC_0(enum iio_chan_type VAR_3)
{
 switch (VAR_3) {
 case 129:
  return VAR_0;
 case 128:
  return VAR_1;
 default:
  return -VAR_2;
 }
}
