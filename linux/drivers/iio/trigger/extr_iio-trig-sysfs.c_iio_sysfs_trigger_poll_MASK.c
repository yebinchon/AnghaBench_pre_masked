
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_trigger {int dummy; } ;
struct iio_sysfs_trig {int work; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 struct iio_sysfs_trig* FUNC_0 (struct iio_trigger*) ;
 int FUNC_1 (int *) ;
 struct iio_trigger* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
  struct device_attribute *VAR_1, const char *VAR_2, size_t VAR_3)
{
 struct iio_trigger *VAR_4 = FUNC_2(VAR_0);
 struct iio_sysfs_trig *VAR_5 = FUNC_0(VAR_4);

 FUNC_1(&VAR_5->work);

 return VAR_3;
}
