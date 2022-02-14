
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
typedef int ssize_t ;


 struct iio_dev* FUNC_0 (struct device*) ;
 struct tsl2583_chip* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_0,
      struct device_attribute *VAR_1,
      char *VAR_2)
{
 struct iio_dev *VAR_3 = FUNC_0(VAR_0);
 struct tsl2583_chip *VAR_4 = FUNC_1(VAR_3);
 int VAR_5;

 FUNC_2(&VAR_4->als_mutex);
 VAR_5 = FUNC_4(VAR_2, "%d\n", VAR_4->als_settings.als_cal_target);
 FUNC_3(&VAR_4->als_mutex);

 return VAR_5;
}
