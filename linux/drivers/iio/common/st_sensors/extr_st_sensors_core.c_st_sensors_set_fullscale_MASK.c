
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct st_sensor_fullscale_avl {int dummy; } ;
struct st_sensor_data {TYPE_3__* sensor_settings; struct st_sensor_fullscale_avl* current_fullscale; } ;
struct iio_dev {int dev; } ;
struct TYPE_5__ {scalar_t__ addr; TYPE_1__* fs_avl; int mask; } ;
struct TYPE_6__ {TYPE_2__ fs; } ;
struct TYPE_4__ {int value; } ;


 int FUNC_0 (int *,char*) ;
 struct st_sensor_data* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (TYPE_3__*,unsigned int,int*) ;
 int FUNC_3 (struct iio_dev*,scalar_t__,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_0, unsigned int VAR_1)
{
 int VAR_2, VAR_3 = 0;
 struct st_sensor_data *VAR_4 = FUNC_1(VAR_0);

 if (VAR_4->sensor_settings->fs.addr == 0)
  return 0;

 VAR_2 = FUNC_2(VAR_4->sensor_settings, VAR_1, &VAR_3);
 if (VAR_2 < 0)
  goto st_accel_set_fullscale_error;

 VAR_2 = FUNC_3(VAR_0,
    VAR_4->sensor_settings->fs.addr,
    VAR_4->sensor_settings->fs.mask,
    VAR_4->sensor_settings->fs.fs_avl[VAR_3].value);
 if (VAR_2 < 0)
  goto st_accel_set_fullscale_error;

 VAR_4->current_fullscale = (struct st_sensor_fullscale_avl *)
     &VAR_4->sensor_settings->fs.fs_avl[VAR_3];
 return VAR_2;

st_accel_set_fullscale_error:
 FUNC_0(&VAR_0->dev, "failed to set new fullscale.\n");
 return VAR_2;
}
