
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kxcjk1013_data {scalar_t__ chipset; } ;
struct iio_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 struct iio_dev* FUNC_0 (struct device*) ;
 struct kxcjk1013_data* FUNC_1 (struct iio_dev*) ;
 char* VAR_1 ;
 char* VAR_2 ;
 int FUNC_2 (char*,char*,char const*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_3,
          struct device_attribute *VAR_4,
          char *VAR_5)
{
 struct iio_dev *VAR_6 = FUNC_0(VAR_3);
 struct kxcjk1013_data *VAR_7 = FUNC_1(VAR_6);
 const char *VAR_8;

 if (VAR_7->chipset == VAR_0)
  VAR_8 = VAR_2;
 else
  VAR_8 = VAR_1;

 return FUNC_2(VAR_5, "%s\n", VAR_8);
}
