
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adis16136 {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct adis16136*,unsigned int) ;
 struct iio_dev* FUNC_1 (struct device*) ;
 struct adis16136* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (char const*,int,unsigned int*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
 struct device_attribute *VAR_2, const char *VAR_3, size_t VAR_4)
{
 struct iio_dev *VAR_5 = FUNC_1(VAR_1);
 struct adis16136 *VAR_6 = FUNC_2(VAR_5);
 unsigned int VAR_7;
 int VAR_8;

 VAR_8 = FUNC_3(VAR_3, 10, &VAR_7);
 if (VAR_8)
  return VAR_8;

 if (VAR_7 == 0)
  return -VAR_0;

 VAR_8 = FUNC_0(VAR_6, VAR_7);

 return VAR_8 ? VAR_8 : VAR_4;
}
