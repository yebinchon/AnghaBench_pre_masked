
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_trigger {int dummy; } ;
struct iio_hrtimer_info {unsigned long sampling_frequency; unsigned long period; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 struct iio_hrtimer_info* FUNC_0 (struct iio_trigger*) ;
 int FUNC_1 (char const*,int,unsigned long*) ;
 struct iio_trigger* FUNC_2 (struct device*) ;

__attribute__((used)) static
ssize_t FUNC_3(struct device *VAR_2,
          struct device_attribute *VAR_3,
          const char *VAR_4, size_t VAR_5)
{
 struct iio_trigger *VAR_6 = FUNC_2(VAR_2);
 struct iio_hrtimer_info *VAR_7 = FUNC_0(VAR_6);
 unsigned long VAR_8;
 int VAR_9;

 VAR_9 = FUNC_1(VAR_4, 10, &VAR_8);
 if (VAR_9)
  return VAR_9;

 if (!VAR_8 || VAR_8 > VAR_1)
  return -VAR_0;

 VAR_7->sampling_frequency = VAR_8;
 VAR_7->period = VAR_1 / VAR_8;

 return VAR_5;
}
