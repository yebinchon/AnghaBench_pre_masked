
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sca3000_state {TYPE_1__* info; } ;
struct iio_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int measurement_mode_3db_freq; int option_mode_1_3db_freq; int option_mode_2_3db_freq; scalar_t__ option_mode_2; scalar_t__ option_mode_1; } ;


 struct iio_dev* FUNC_0 (struct device*) ;
 struct sca3000_state* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (char*,char*,...) ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_0,
     struct device_attribute *VAR_1,
     char *VAR_2)
{
 struct iio_dev *VAR_3 = FUNC_0(VAR_0);
 struct sca3000_state *VAR_4 = FUNC_1(VAR_3);
 int VAR_5;

 VAR_5 = FUNC_2(VAR_2, "%d", VAR_4->info->measurement_mode_3db_freq);
 if (VAR_4->info->option_mode_1)
  VAR_5 += FUNC_2(VAR_2 + VAR_5, " %d",
          VAR_4->info->option_mode_1_3db_freq);
 if (VAR_4->info->option_mode_2)
  VAR_5 += FUNC_2(VAR_2 + VAR_5, " %d",
          VAR_4->info->option_mode_2_3db_freq);
 VAR_5 += FUNC_2(VAR_2 + VAR_5, "\n");

 return VAR_5;
}
