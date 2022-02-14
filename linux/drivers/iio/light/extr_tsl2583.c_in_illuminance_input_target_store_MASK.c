
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int als_cal_target; } ;
struct tsl2583_chip {int als_mutex; TYPE_1__ als_settings; } ;
struct iio_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 struct iio_dev* FUNC_0 (struct device*) ;
 struct tsl2583_chip* FUNC_1 (struct iio_dev*) ;
 scalar_t__ FUNC_2 (char const*,int ,int*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1,
       struct device_attribute *VAR_2,
       const char *VAR_3, size_t VAR_4)
{
 struct iio_dev *VAR_5 = FUNC_0(VAR_1);
 struct tsl2583_chip *VAR_6 = FUNC_1(VAR_5);
 int VAR_7;

 if (FUNC_2(VAR_3, 0, &VAR_7) || !VAR_7)
  return -VAR_0;

 FUNC_3(&VAR_6->als_mutex);
 VAR_6->als_settings.als_cal_target = VAR_7;
 FUNC_4(&VAR_6->als_mutex);

 return VAR_4;
}
