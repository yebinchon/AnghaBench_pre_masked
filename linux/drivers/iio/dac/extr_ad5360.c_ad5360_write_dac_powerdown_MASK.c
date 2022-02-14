
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct iio_dev*,int ,int ) ;
 struct iio_dev* FUNC_1 (struct device*) ;
 int FUNC_2 (char const*,int*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
 struct device_attribute *VAR_2, const char *VAR_3, size_t VAR_4)
{
 struct iio_dev *VAR_5 = FUNC_1(VAR_1);
 bool VAR_6;
 int VAR_7;

 VAR_7 = FUNC_2(VAR_3, &VAR_6);
 if (VAR_7)
  return VAR_7;

 if (VAR_6)
  VAR_7 = FUNC_0(VAR_5, VAR_0, 0);
 else
  VAR_7 = FUNC_0(VAR_5, 0, VAR_0);

 return VAR_7 ? VAR_7 : VAR_4;
}
