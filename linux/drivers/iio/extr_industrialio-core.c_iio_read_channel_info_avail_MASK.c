
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev_attr {int address; int c; } ;
struct iio_dev {TYPE_1__* info; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int (* read_avail ) (struct iio_dev*,int ,int const**,int*,int*,int ) ;} ;


 int VAR_0 ;


 struct iio_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,int const*,int,int) ;
 int FUNC_2 (char*,int const*,int) ;
 int FUNC_3 (struct iio_dev*,int ,int const**,int*,int*,int ) ;
 struct iio_dev_attr* FUNC_4 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1,
        struct device_attribute *VAR_2,
        char *VAR_3)
{
 struct iio_dev *VAR_4 = FUNC_0(VAR_1);
 struct iio_dev_attr *VAR_5 = FUNC_4(VAR_2);
 const int *VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9;

 VAR_7 = VAR_4->info->read_avail(VAR_4, VAR_5->c,
       &VAR_6, &VAR_9, &VAR_8,
       VAR_5->address);

 if (VAR_7 < 0)
  return VAR_7;
 switch (VAR_7) {
 case 129:
  return FUNC_1(VAR_3, VAR_6, VAR_9, VAR_8);
 case 128:
  return FUNC_2(VAR_3, VAR_6, VAR_9);
 default:
  return -VAR_0;
 }
}
