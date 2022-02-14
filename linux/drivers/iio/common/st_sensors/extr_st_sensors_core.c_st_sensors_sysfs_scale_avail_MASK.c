
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct st_sensor_data {TYPE_3__* sensor_settings; } ;
struct iio_dev {int mlock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_5__ {TYPE_1__* fs_avl; } ;
struct TYPE_6__ {TYPE_2__ fs; } ;
struct TYPE_4__ {scalar_t__ num; int gain; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct iio_dev* FUNC_0 (struct device*) ;
 struct st_sensor_data* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (char*,scalar_t__,char*,int,int) ;

ssize_t FUNC_5(struct device *VAR_2,
    struct device_attribute *VAR_3, char *VAR_4)
{
 int VAR_5, VAR_6 = 0, VAR_7, VAR_8;
 struct iio_dev *VAR_9 = FUNC_0(VAR_2);
 struct st_sensor_data *VAR_10 = FUNC_1(VAR_9);

 FUNC_2(&VAR_9->mlock);
 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  if (VAR_10->sensor_settings->fs.fs_avl[VAR_5].num == 0)
   break;

  VAR_7 = VAR_10->sensor_settings->fs.fs_avl[VAR_5].gain / 1000000;
  VAR_8 = VAR_10->sensor_settings->fs.fs_avl[VAR_5].gain % 1000000;

  VAR_6 += FUNC_4(VAR_4 + VAR_6, VAR_0 - VAR_6, "%u.%06u ", VAR_7, VAR_8);
 }
 FUNC_3(&VAR_9->mlock);
 VAR_4[VAR_6 - 1] = '\n';

 return VAR_6;
}
