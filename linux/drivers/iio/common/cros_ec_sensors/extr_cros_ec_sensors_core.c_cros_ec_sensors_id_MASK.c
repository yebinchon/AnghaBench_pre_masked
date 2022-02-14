
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
struct TYPE_3__ {int sensor_num; } ;
struct TYPE_4__ {TYPE_1__ info; } ;
struct cros_ec_sensors_core_state {TYPE_2__ param; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct cros_ec_sensors_core_state* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (char*,int ,char*,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct iio_dev *VAR_1,
      uintptr_t VAR_2,
      const struct iio_chan_spec *VAR_3, char *VAR_4)
{
 struct cros_ec_sensors_core_state *VAR_5 = FUNC_0(VAR_1);

 return FUNC_1(VAR_4, VAR_0, "%d\n", VAR_5->param.info.sensor_num);
}
