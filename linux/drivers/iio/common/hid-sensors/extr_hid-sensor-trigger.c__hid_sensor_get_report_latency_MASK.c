
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct hid_sensor_common {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct iio_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (struct hid_sensor_common*) ;
 struct hid_sensor_common* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (char*,char*,int,int) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
           struct device_attribute *VAR_1,
           char *VAR_2)
{
 struct iio_dev *VAR_3 = FUNC_0(VAR_0);
 struct hid_sensor_common *VAR_4 = FUNC_2(VAR_3);
 int VAR_5;

 VAR_5 = FUNC_1(VAR_4);
 if (VAR_5 < 0)
  return VAR_5;

 return FUNC_3(VAR_2, "%d.%06u\n", VAR_5 / 1000, (VAR_5 % 1000) * 1000);
}
