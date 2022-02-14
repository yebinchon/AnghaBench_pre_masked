
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev_attr {int c; } ;
struct iio_dev {TYPE_1__* info; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int (* write_event_value ) (struct iio_dev*,int ,int ,int ,int ,int,int) ;} ;


 int VAR_0 ;
 struct iio_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (struct iio_dev_attr*) ;
 int FUNC_2 (struct iio_dev_attr*) ;
 int FUNC_3 (struct iio_dev_attr*) ;
 int FUNC_4 (char const*,int,int*,int*) ;
 int FUNC_5 (struct iio_dev*,int ,int ,int ,int ,int,int) ;
 struct iio_dev_attr* FUNC_6 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_1,
      struct device_attribute *VAR_2,
      const char *VAR_3,
      size_t VAR_4)
{
 struct iio_dev *VAR_5 = FUNC_0(VAR_1);
 struct iio_dev_attr *VAR_6 = FUNC_6(VAR_2);
 int VAR_7, VAR_8;
 int VAR_9;

 if (!VAR_5->info->write_event_value)
  return -VAR_0;

 VAR_9 = FUNC_4(VAR_3, 100000, &VAR_7, &VAR_8);
 if (VAR_9)
  return VAR_9;
 VAR_9 = VAR_5->info->write_event_value(VAR_5,
  VAR_6->c, FUNC_3(VAR_6),
  FUNC_1(VAR_6), FUNC_2(VAR_6),
  VAR_7, VAR_8);
 if (VAR_9 < 0)
  return VAR_9;

 return VAR_4;
}
