
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct srf08_data {TYPE_1__* chip_info; } ;
struct iio_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int num_sensitivity_avail; int* sensitivity_avail; } ;


 struct iio_dev* FUNC_0 (struct device*) ;
 struct srf08_data* FUNC_1 (struct iio_dev*) ;
 scalar_t__ FUNC_2 (char*,char*,...) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
    struct device_attribute *VAR_1, char *VAR_2)
{
 int VAR_3, VAR_4 = 0;
 struct iio_dev *VAR_5 = FUNC_0(VAR_0);
 struct srf08_data *VAR_6 = FUNC_1(VAR_5);

 for (VAR_3 = 0; VAR_3 < VAR_6->chip_info->num_sensitivity_avail; VAR_3++)
  if (VAR_6->chip_info->sensitivity_avail[VAR_3])
   VAR_4 += FUNC_2(VAR_2 + VAR_4, "%d ",
    VAR_6->chip_info->sensitivity_avail[VAR_3]);

 VAR_4 += FUNC_2(VAR_2 + VAR_4, "\n");

 return VAR_4;
}
