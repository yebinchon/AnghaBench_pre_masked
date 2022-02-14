
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ms_ht_dev {int dummy; } ;
struct iio_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct iio_dev* FUNC_0 (struct device*) ;
 struct ms_ht_dev* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (struct ms_ht_dev*,char const*,size_t) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
      struct device_attribute *VAR_1,
      const char *VAR_2, size_t VAR_3)
{
 struct iio_dev *VAR_4 = FUNC_0(VAR_0);
 struct ms_ht_dev *VAR_5 = FUNC_1(VAR_4);

 return FUNC_2(VAR_5, VAR_2, VAR_3);
}
