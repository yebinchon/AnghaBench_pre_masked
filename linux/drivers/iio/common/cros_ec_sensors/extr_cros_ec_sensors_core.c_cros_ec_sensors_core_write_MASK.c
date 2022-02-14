
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct iio_chan_spec {int dummy; } ;
struct TYPE_4__ {int data; } ;
struct TYPE_6__ {int data; int roundup; } ;
struct TYPE_5__ {TYPE_1__ ec_rate; int cmd; TYPE_3__ sensor_odr; } ;
struct cros_ec_sensors_core_state {int curr_sampl_freq; TYPE_2__ param; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cros_ec_sensors_core_state*,int ) ;

int FUNC_1(struct cros_ec_sensors_core_state *VAR_3,
          struct iio_chan_spec const *VAR_4,
          int VAR_5, int VAR_6, long VAR_7)
{
 int VAR_8;

 switch (VAR_7) {
 case 129:
  VAR_3->param.cmd = VAR_2;
  VAR_3->param.sensor_odr.data = VAR_5;


  VAR_3->param.sensor_odr.roundup = 1;

  VAR_8 = FUNC_0(VAR_3, 0);
  break;
 case 128:
  VAR_3->param.cmd = VAR_1;
  VAR_3->param.ec_rate.data = VAR_5;

  VAR_8 = FUNC_0(VAR_3, 0);
  if (VAR_8)
   break;
  VAR_3->curr_sampl_freq = VAR_5;
  break;
 default:
  VAR_8 = -VAR_0;
  break;
 }
 return VAR_8;
}
