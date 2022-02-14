
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int als_cal_target; } ;
struct tsl2772_chip {TYPE_1__ settings; } ;
struct iio_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct iio_dev* FUNC_0 (struct device*) ;
 struct tsl2772_chip* FUNC_1 (struct iio_dev*) ;
 scalar_t__ FUNC_2 (char const*,int ,int *) ;
 int FUNC_3 (struct iio_dev*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
        struct device_attribute *VAR_2,
        const char *VAR_3, size_t VAR_4)
{
 struct iio_dev *VAR_5 = FUNC_0(VAR_1);
 struct tsl2772_chip *VAR_6 = FUNC_1(VAR_5);
 u16 VAR_7;
 int VAR_8;

 if (FUNC_2(VAR_3, 0, &VAR_7))
  return -VAR_0;

 VAR_6->settings.als_cal_target = VAR_7;
 VAR_8 = FUNC_3(VAR_5);
 if (VAR_8 < 0)
  return VAR_8;

 return VAR_4;
}
