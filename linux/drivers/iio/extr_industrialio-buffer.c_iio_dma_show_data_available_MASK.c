
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int buffer; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct iio_dev* FUNC_0 (struct device*) ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (char*,char*,size_t) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
      struct device_attribute *VAR_1,
      char *VAR_2)
{
 struct iio_dev *VAR_3 = FUNC_0(VAR_0);
 size_t VAR_4;

 VAR_4 = FUNC_1(VAR_3->buffer);

 return FUNC_2(VAR_2, "%zu\n", VAR_4);
}
