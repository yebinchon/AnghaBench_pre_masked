
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
struct TYPE_2__ {int cmd_lock; } ;
struct cros_ec_lid_angle_state {TYPE_1__ core; } ;
typedef int s16 ;


 int VAR_0 ;
 int FUNC_0 (struct iio_dev*,int,int*) ;
 struct cros_ec_lid_angle_state* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_1,
        struct iio_chan_spec const *VAR_2,
        int *VAR_3, int *VAR_4, long VAR_5)
{
 struct cros_ec_lid_angle_state *VAR_6 = FUNC_1(VAR_1);
 s16 VAR_7;
 int VAR_8;

 FUNC_2(&VAR_6->core.cmd_lock);
 VAR_8 = FUNC_0(VAR_1, 1, &VAR_7);
 if (VAR_8 == 0) {
  *VAR_3 = VAR_7;
  VAR_8 = VAR_0;
 }
 FUNC_3(&VAR_6->core.cmd_lock);
 return VAR_8;
}
