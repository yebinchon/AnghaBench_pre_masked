
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mxs_lradc_adc {TYPE_1__** scale_avail; } ;
struct iio_dev_attr {int address; } ;
struct iio_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int integer; int nano; } ;


 int FUNC_0 (TYPE_1__*) ;
 struct iio_dev* FUNC_1 (struct device*) ;
 struct mxs_lradc_adc* FUNC_2 (struct iio_dev*) ;
 scalar_t__ FUNC_3 (char*,char*,...) ;
 struct iio_dev_attr* FUNC_4 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_0,
       struct device_attribute *VAR_1,
       char *VAR_2)
{
 struct iio_dev *VAR_3 = FUNC_1(VAR_0);
 struct mxs_lradc_adc *VAR_4 = FUNC_2(VAR_3);
 struct iio_dev_attr *VAR_5 = FUNC_4(VAR_1);
 int VAR_6, VAR_7, VAR_8 = 0;

 VAR_7 = VAR_5->address;
 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_4->scale_avail[VAR_7]); VAR_6++)
  VAR_8 += FUNC_3(VAR_2 + VAR_8, "%u.%09u ",
          VAR_4->scale_avail[VAR_7][VAR_6].integer,
          VAR_4->scale_avail[VAR_7][VAR_6].nano);

 VAR_8 += FUNC_3(VAR_2 + VAR_8, "\n");

 return VAR_8;
}
