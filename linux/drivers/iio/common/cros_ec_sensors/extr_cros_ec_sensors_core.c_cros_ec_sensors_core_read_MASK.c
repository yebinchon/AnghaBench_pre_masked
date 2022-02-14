
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct iio_chan_spec {int dummy; } ;
struct TYPE_9__ {void* data; } ;
struct TYPE_7__ {void* data; } ;
struct TYPE_10__ {TYPE_3__ sensor_odr; int cmd; TYPE_1__ ec_rate; } ;
struct cros_ec_sensors_core_state {TYPE_6__* resp; TYPE_4__ param; } ;
struct TYPE_11__ {int ret; } ;
struct TYPE_8__ {int ret; } ;
struct TYPE_12__ {TYPE_5__ sensor_odr; TYPE_2__ ec_rate; } ;


 void* VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct cros_ec_sensors_core_state*,int ) ;

int FUNC_1(struct cros_ec_sensors_core_state *VAR_5,
     struct iio_chan_spec const *VAR_6,
     int *VAR_7, int *VAR_8, long VAR_9)
{
 int VAR_10;

 switch (VAR_9) {
 case 128:
  VAR_5->param.cmd = VAR_3;
  VAR_5->param.ec_rate.data =
   VAR_0;

  VAR_10 = FUNC_0(VAR_5, 0);
  if (VAR_10)
   break;

  *VAR_7 = VAR_5->resp->ec_rate.ret;
  VAR_10 = VAR_2;
  break;
 case 129:
  VAR_5->param.cmd = VAR_4;
  VAR_5->param.sensor_odr.data =
   VAR_0;

  VAR_10 = FUNC_0(VAR_5, 0);
  if (VAR_10)
   break;

  *VAR_7 = VAR_5->resp->sensor_odr.ret;
  VAR_10 = VAR_2;
  break;
 default:
  VAR_10 = -VAR_1;
  break;
 }

 return VAR_10;
}
