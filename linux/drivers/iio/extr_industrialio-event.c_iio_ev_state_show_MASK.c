
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
struct TYPE_2__ {int (* read_event_config ) (struct iio_dev*,int ,int ,int ) ;} ;


 struct iio_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (struct iio_dev_attr*) ;
 int FUNC_2 (struct iio_dev_attr*) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (struct iio_dev*,int ,int ,int ) ;
 struct iio_dev_attr* FUNC_5 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_0,
     struct device_attribute *VAR_1,
     char *VAR_2)
{
 struct iio_dev *VAR_3 = FUNC_0(VAR_0);
 struct iio_dev_attr *VAR_4 = FUNC_5(VAR_1);
 int VAR_5;

 VAR_5 = VAR_3->info->read_event_config(VAR_3,
  VAR_4->c, FUNC_2(VAR_4),
  FUNC_1(VAR_4));
 if (VAR_5 < 0)
  return VAR_5;
 else
  return FUNC_3(VAR_2, "%d\n", VAR_5);
}
