
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct st_lsm6dsx_sensor {struct st_lsm6dsx_hw* hw; } ;
struct st_lsm6dsx_hw {TYPE_2__* settings; } ;
struct iio_dev {int dummy; } ;
struct TYPE_3__ {int (* update_fifo ) (struct st_lsm6dsx_sensor*,int) ;} ;
struct TYPE_4__ {TYPE_1__ fifo_ops; } ;


 int VAR_0 ;
 struct st_lsm6dsx_sensor* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct st_lsm6dsx_sensor*,int) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_1)
{
 struct st_lsm6dsx_sensor *VAR_2 = FUNC_0(VAR_1);
 struct st_lsm6dsx_hw *VAR_3 = VAR_2->hw;

 if (!VAR_3->settings->fifo_ops.update_fifo)
  return -VAR_0;

 return VAR_3->settings->fifo_ops.update_fifo(VAR_2, 1);
}
