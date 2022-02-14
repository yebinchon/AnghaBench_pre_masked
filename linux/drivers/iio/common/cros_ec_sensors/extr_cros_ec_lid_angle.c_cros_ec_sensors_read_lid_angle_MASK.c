
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct iio_dev {int dev; } ;
struct TYPE_4__ {int cmd; } ;
struct cros_ec_sensors_core_state {TYPE_3__* resp; TYPE_1__ param; } ;
typedef int s16 ;
struct TYPE_5__ {int value; } ;
struct TYPE_6__ {TYPE_2__ lid_angle; } ;


 int VAR_0 ;
 int FUNC_0 (struct cros_ec_sensors_core_state*,int) ;
 int FUNC_1 (int *,char*) ;
 struct cros_ec_sensors_core_state* FUNC_2 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_1,
       unsigned long VAR_2, s16 *VAR_3)
{
 struct cros_ec_sensors_core_state *VAR_4 = FUNC_2(VAR_1);
 int VAR_5;

 VAR_4->param.cmd = VAR_0;
 VAR_5 = FUNC_0(VAR_4, sizeof(VAR_4->resp->lid_angle));
 if (VAR_5) {
  FUNC_1(&VAR_1->dev, "Unable to read lid angle\n");
  return VAR_5;
 }

 *VAR_3 = VAR_4->resp->lid_angle.value;
 return 0;
}
