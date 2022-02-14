
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
struct TYPE_2__ {int (* read_event_value ) (struct iio_dev*,int ,int ,int ,int ,int*,int*) ;} ;


 struct iio_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (struct iio_dev_attr*) ;
 int FUNC_2 (struct iio_dev_attr*) ;
 int FUNC_3 (struct iio_dev_attr*) ;
 int FUNC_4 (char*,int,int,int*) ;
 int FUNC_5 (struct iio_dev*,int ,int ,int ,int ,int*,int*) ;
 struct iio_dev_attr* FUNC_6 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_0,
     struct device_attribute *VAR_1,
     char *VAR_2)
{
 struct iio_dev *VAR_3 = FUNC_0(VAR_0);
 struct iio_dev_attr *VAR_4 = FUNC_6(VAR_1);
 int VAR_5, VAR_6, VAR_7[2];
 int VAR_8;

 VAR_8 = VAR_3->info->read_event_value(VAR_3,
  VAR_4->c, FUNC_3(VAR_4),
  FUNC_1(VAR_4), FUNC_2(VAR_4),
  &VAR_5, &VAR_6);
 if (VAR_8 < 0)
  return VAR_8;
 VAR_7[0] = VAR_5;
 VAR_7[1] = VAR_6;
 return FUNC_4(VAR_2, VAR_8, 2, VAR_7);
}
