
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
struct TYPE_2__ {int (* write_event_config ) (struct iio_dev*,int ,int ,int ,int) ;} ;


 struct iio_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (struct iio_dev_attr*) ;
 int FUNC_2 (struct iio_dev_attr*) ;
 int FUNC_3 (char const*,int*) ;
 int FUNC_4 (struct iio_dev*,int ,int ,int ,int) ;
 struct iio_dev_attr* FUNC_5 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_0,
      struct device_attribute *VAR_1,
      const char *VAR_2,
      size_t VAR_3)
{
 struct iio_dev *VAR_4 = FUNC_0(VAR_0);
 struct iio_dev_attr *VAR_5 = FUNC_5(VAR_1);
 int VAR_6;
 bool VAR_7;

 VAR_6 = FUNC_3(VAR_2, &VAR_7);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_6 = VAR_4->info->write_event_config(VAR_4,
  VAR_5->c, FUNC_2(VAR_5),
  FUNC_1(VAR_5), VAR_7);

 return (VAR_6 < 0) ? VAR_6 : VAR_3;
}
