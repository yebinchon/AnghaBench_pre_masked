
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* als_device_lux; } ;
struct tsl2583_chip {TYPE_1__ als_settings; } ;
struct iio_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_4__ {int ratio; int ch0; int ch1; } ;


 unsigned int FUNC_0 (TYPE_2__*) ;
 struct iio_dev* FUNC_1 (struct device*) ;
 struct tsl2583_chip* FUNC_2 (struct iio_dev*) ;
 scalar_t__ FUNC_3 (char*,char*,...) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
          struct device_attribute *VAR_1,
          char *VAR_2)
{
 struct iio_dev *VAR_3 = FUNC_1(VAR_0);
 struct tsl2583_chip *VAR_4 = FUNC_2(VAR_3);
 unsigned int VAR_5;
 int VAR_6 = 0;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_4->als_settings.als_device_lux); VAR_5++) {
  VAR_6 += FUNC_3(VAR_2 + VAR_6, "%u,%u,%u,",
      VAR_4->als_settings.als_device_lux[VAR_5].ratio,
      VAR_4->als_settings.als_device_lux[VAR_5].ch0,
      VAR_4->als_settings.als_device_lux[VAR_5].ch1);
  if (VAR_4->als_settings.als_device_lux[VAR_5].ratio == 0) {




   VAR_6--;
   break;
  }
 }

 VAR_6 += FUNC_3(VAR_2 + VAR_6, "\n");

 return VAR_6;
}
