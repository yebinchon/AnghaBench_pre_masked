
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev_attr {int address; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int channel; int scale; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_0 (char*,char*,...) ;
 struct iio_dev_attr* FUNC_1 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_2,
    struct device_attribute *VAR_3,
    char *VAR_4)
{
 struct iio_dev_attr *VAR_5 = FUNC_1(VAR_3);
 int VAR_6 = VAR_5->address;
 int VAR_7, VAR_8 = 0;

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
  if (VAR_1[VAR_7].channel == VAR_6)
   VAR_8 += FUNC_0(VAR_4 + VAR_8, "0.%09d ",
     VAR_1[VAR_7].scale);

 VAR_8 += FUNC_0(VAR_4 + VAR_8, "\n");

 return VAR_8;
}
