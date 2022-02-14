
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct st_lsm6dsx_sensor {unsigned int watermark; struct st_lsm6dsx_hw* hw; } ;
struct st_lsm6dsx_hw {int conf_lock; TYPE_1__* settings; } ;
struct iio_dev {int dummy; } ;
struct TYPE_2__ {unsigned int max_fifo_size; } ;


 int VAR_0 ;
 struct st_lsm6dsx_sensor* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct st_lsm6dsx_sensor*,unsigned int) ;

int FUNC_4(struct iio_dev *VAR_1, unsigned int VAR_2)
{
 struct st_lsm6dsx_sensor *VAR_3 = FUNC_0(VAR_1);
 struct st_lsm6dsx_hw *VAR_4 = VAR_3->hw;
 int VAR_5;

 if (VAR_2 < 1 || VAR_2 > VAR_4->settings->max_fifo_size)
  return -VAR_0;

 FUNC_1(&VAR_4->conf_lock);

 VAR_5 = FUNC_3(VAR_3, VAR_2);

 FUNC_2(&VAR_4->conf_lock);

 if (VAR_5 < 0)
  return VAR_5;

 VAR_3->watermark = VAR_2;

 return 0;
}
