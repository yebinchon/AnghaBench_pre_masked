
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srf08_data {int dummy; } ;
struct iio_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct iio_dev* FUNC_0 (struct device*) ;
 struct srf08_data* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (char const*,int,int*,int*) ;
 int FUNC_3 (struct srf08_data*,int) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
     struct device_attribute *VAR_1,
     const char *VAR_2, size_t VAR_3)
{
 struct iio_dev *VAR_4 = FUNC_0(VAR_0);
 struct srf08_data *VAR_5 = FUNC_1(VAR_4);
 int VAR_6;
 int VAR_7, VAR_8;

 VAR_6 = FUNC_2(VAR_2, 100, &VAR_7, &VAR_8);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_3(VAR_5, VAR_7 * 1000 + VAR_8);
 if (VAR_6 < 0)
  return VAR_6;

 return VAR_3;
}
