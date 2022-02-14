
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct hid_sensor_common {int latency_ms; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct iio_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (struct hid_sensor_common*) ;
 int FUNC_2 (struct hid_sensor_common*,int) ;
 struct hid_sensor_common* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (char const*,int,int*,int*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_0,
           struct device_attribute *VAR_1,
           const char *VAR_2, size_t VAR_3)
{
 struct iio_dev *VAR_4 = FUNC_0(VAR_0);
 struct hid_sensor_common *VAR_5 = FUNC_3(VAR_4);
 int VAR_6, VAR_7, VAR_8;
 int VAR_9;

 VAR_8 = FUNC_4(VAR_2, 100000, &VAR_6, &VAR_7);
 if (VAR_8)
  return VAR_8;

 VAR_9 = VAR_6 * 1000 + VAR_7 / 1000;
 VAR_8 = FUNC_2(VAR_5, VAR_9);
 if (VAR_8 < 0)
  return VAR_3;

 VAR_5->latency_ms = FUNC_1(VAR_5);

 return VAR_3;
}
