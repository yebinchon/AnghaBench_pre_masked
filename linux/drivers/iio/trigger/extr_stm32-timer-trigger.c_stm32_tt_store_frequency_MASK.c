
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_timer_trigger {int dummy; } ;
struct iio_trigger {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct stm32_timer_trigger* FUNC_0 (struct iio_trigger*) ;
 int FUNC_1 (char const*,int,unsigned int*) ;
 int FUNC_2 (struct stm32_timer_trigger*,struct iio_trigger*,unsigned int) ;
 int FUNC_3 (struct stm32_timer_trigger*) ;
 struct iio_trigger* FUNC_4 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_0,
     struct device_attribute *VAR_1,
     const char *VAR_2, size_t VAR_3)
{
 struct iio_trigger *VAR_4 = FUNC_4(VAR_0);
 struct stm32_timer_trigger *VAR_5 = FUNC_0(VAR_4);
 unsigned int VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_2, 10, &VAR_6);
 if (VAR_7)
  return VAR_7;

 if (VAR_6 == 0) {
  FUNC_3(VAR_5);
 } else {
  VAR_7 = FUNC_2(VAR_5, VAR_4, VAR_6);
  if (VAR_7)
   return VAR_7;
 }

 return VAR_3;
}
