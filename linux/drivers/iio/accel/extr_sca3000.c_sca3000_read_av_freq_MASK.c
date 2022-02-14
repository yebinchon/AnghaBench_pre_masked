
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sca3000_state {int* rx; TYPE_1__* info; int lock; } ;
struct iio_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int measurement_mode_freq; int option_mode_1_freq; int option_mode_2_freq; } ;


 int VAR_0 ;



 int VAR_1 ;
 struct iio_dev* FUNC_0 (struct device*) ;
 struct sca3000_state* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct sca3000_state*,int ,int) ;
 int FUNC_5 (char*,char*,int,int,int) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_2,
        struct device_attribute *VAR_3,
        char *VAR_4)
{
 struct iio_dev *VAR_5 = FUNC_0(VAR_2);
 struct sca3000_state *VAR_6 = FUNC_1(VAR_5);
 int VAR_7 = 0, VAR_8, VAR_9;

 FUNC_2(&VAR_6->lock);
 VAR_8 = FUNC_4(VAR_6, VAR_0, 1);
 VAR_9 = VAR_6->rx[0];
 FUNC_3(&VAR_6->lock);
 if (VAR_8)
  goto error_ret;

 switch (VAR_9 & VAR_1) {
 case 130:
  VAR_7 += FUNC_5(VAR_4 + VAR_7, "%d %d %d\n",
          VAR_6->info->measurement_mode_freq,
          VAR_6->info->measurement_mode_freq / 2,
          VAR_6->info->measurement_mode_freq / 4);
  break;
 case 129:
  VAR_7 += FUNC_5(VAR_4 + VAR_7, "%d %d %d\n",
          VAR_6->info->option_mode_1_freq,
          VAR_6->info->option_mode_1_freq / 2,
          VAR_6->info->option_mode_1_freq / 4);
  break;
 case 128:
  VAR_7 += FUNC_5(VAR_4 + VAR_7, "%d %d %d\n",
          VAR_6->info->option_mode_2_freq,
          VAR_6->info->option_mode_2_freq / 2,
          VAR_6->info->option_mode_2_freq / 4);
  break;
 }
 return VAR_7;
error_ret:
 return VAR_8;
}
