
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct st_sensor_data {TYPE_3__* sensor_settings; } ;
struct iio_dev {int dummy; } ;
struct TYPE_5__ {TYPE_1__* fs_avl; } ;
struct TYPE_6__ {TYPE_2__ fs; } ;
struct TYPE_4__ {int gain; int num; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct st_sensor_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct iio_dev*,int ) ;

int FUNC_2(struct iio_dev *VAR_2, int VAR_3)
{
 int VAR_4 = -VAR_0, VAR_5;
 struct st_sensor_data *VAR_6 = FUNC_0(VAR_2);

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  if ((VAR_6->sensor_settings->fs.fs_avl[VAR_5].gain == VAR_3) &&
    (VAR_6->sensor_settings->fs.fs_avl[VAR_5].gain != 0)) {
   VAR_4 = 0;
   break;
  }
 }
 if (VAR_4 < 0)
  goto st_sensors_match_scale_error;

 VAR_4 = FUNC_1(VAR_2,
    VAR_6->sensor_settings->fs.fs_avl[VAR_5].num);

st_sensors_match_scale_error:
 return VAR_4;
}
