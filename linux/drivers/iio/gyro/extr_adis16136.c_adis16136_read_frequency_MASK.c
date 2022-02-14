
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adis16136 {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (struct adis16136*,unsigned int*) ;
 struct iio_dev* FUNC_1 (struct device*) ;
 struct adis16136* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (char*,char*,unsigned int) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
 struct device_attribute *VAR_1, char *VAR_2)
{
 struct iio_dev *VAR_3 = FUNC_1(VAR_0);
 struct adis16136 *VAR_4 = FUNC_2(VAR_3);
 unsigned int VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_4, &VAR_5);
 if (VAR_6 < 0)
  return VAR_6;

 return FUNC_3(VAR_2, "%d\n", VAR_5);
}
