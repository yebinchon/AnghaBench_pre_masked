
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {size_t index; } ;
struct iio_hwmon_state {struct iio_channel* channels; } ;
struct iio_channel {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef enum iio_chan_type { ____Placeholder_iio_chan_type } iio_chan_type ;


 int VAR_0 ;
 struct iio_hwmon_state* FUNC_0 (struct device*) ;
 int FUNC_1 (struct iio_channel*,int*) ;
 int FUNC_2 (struct iio_channel*,int*) ;
 int FUNC_3 (char*,char*,int) ;
 struct sensor_device_attribute* FUNC_4 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1,
      struct device_attribute *VAR_2,
      char *VAR_3)
{
 int VAR_4;
 int VAR_5;
 struct sensor_device_attribute *VAR_6 = FUNC_4(VAR_2);
 struct iio_hwmon_state *VAR_7 = FUNC_0(VAR_1);
 struct iio_channel *VAR_8 = &VAR_7->channels[VAR_6->index];
 enum iio_chan_type VAR_9;

 VAR_5 = FUNC_2(VAR_8, &VAR_4);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_5 = FUNC_1(VAR_8, &VAR_9);
 if (VAR_5 < 0)
  return VAR_5;

 if (VAR_9 == VAR_0)
  VAR_4 *= 1000;

 return FUNC_3(VAR_3, "%d\n", VAR_4);
}
