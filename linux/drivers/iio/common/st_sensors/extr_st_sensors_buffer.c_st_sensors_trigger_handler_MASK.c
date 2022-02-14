
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_sensor_data {int buffer_data; int hw_timestamp; } ;
struct iio_poll_func {struct iio_dev* indio_dev; } ;
struct iio_dev {int trig; } ;
typedef int s64 ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (struct iio_dev*) ;
 struct st_sensor_data* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (struct iio_dev*,int ,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct iio_dev*) ;
 int FUNC_5 (struct iio_dev*,int ) ;

irqreturn_t FUNC_6(int VAR_1, void *VAR_2)
{
 int VAR_3;
 struct iio_poll_func *VAR_4 = VAR_2;
 struct iio_dev *VAR_5 = VAR_4->indio_dev;
 struct st_sensor_data *VAR_6 = FUNC_1(VAR_5);
 s64 VAR_7;







 if (FUNC_4(VAR_5))
  VAR_7 = VAR_6->hw_timestamp;
 else
  VAR_7 = FUNC_0(VAR_5);

 VAR_3 = FUNC_5(VAR_5, VAR_6->buffer_data);
 if (VAR_3 < 0)
  goto st_sensors_get_buffer_element_error;

 FUNC_2(VAR_5, VAR_6->buffer_data,
        VAR_7);

st_sensors_get_buffer_element_error:
 FUNC_3(VAR_5->trig);

 return VAR_0;
}
