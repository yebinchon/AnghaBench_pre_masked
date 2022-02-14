
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_trigger {int dummy; } ;
struct iio_hrtimer_info {int sampling_frequency; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct iio_hrtimer_info* FUNC_0 (struct iio_trigger*) ;
 int FUNC_1 (char*,int ,char*,int ) ;
 struct iio_trigger* FUNC_2 (struct device*) ;

__attribute__((used)) static
ssize_t FUNC_3(struct device *VAR_1,
         struct device_attribute *VAR_2,
         char *VAR_3)
{
 struct iio_trigger *VAR_4 = FUNC_2(VAR_1);
 struct iio_hrtimer_info *VAR_5 = FUNC_0(VAR_4);

 return FUNC_1(VAR_3, VAR_0, "%lu\n", VAR_5->sampling_frequency);
}
