
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct iio_chan_spec {int scan_index; } ;
struct TYPE_11__ {int data; int roundup; } ;
struct TYPE_10__ {int* scale; void* temp; } ;
struct TYPE_8__ {int* offset; void* flags; void* temp; } ;
struct TYPE_12__ {TYPE_4__ sensor_range; int cmd; TYPE_3__ sensor_scale; TYPE_1__ sensor_offset; } ;
struct TYPE_13__ {int cmd_lock; TYPE_5__ param; int type; TYPE_2__* calib; } ;
struct cros_ec_sensors_state {TYPE_6__ core; } ;
struct TYPE_9__ {int offset; int scale; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;



 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int FUNC_0 (TYPE_6__*,int ) ;
 int FUNC_1 (TYPE_6__*,struct iio_chan_spec const*,int,int,long) ;
 struct cros_ec_sensors_state* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_9,
          struct iio_chan_spec const *VAR_10,
          int VAR_11, int VAR_12, long VAR_13)
{
 struct cros_ec_sensors_state *VAR_14 = FUNC_2(VAR_9);
 int VAR_15;
 int VAR_16;
 int VAR_17 = VAR_10->scan_index;

 FUNC_3(&VAR_14->core.cmd_lock);

 switch (VAR_13) {
 case 130:
  VAR_14->core.calib[VAR_17].offset = VAR_11;


  VAR_14->core.param.cmd = VAR_4;
  VAR_14->core.param.sensor_offset.flags =
   VAR_8;
  for (VAR_15 = VAR_1; VAR_15 < VAR_0; VAR_15++)
   VAR_14->core.param.sensor_offset.offset[VAR_15] =
    VAR_14->core.calib[VAR_15].offset;
  VAR_14->core.param.sensor_offset.temp =
   VAR_2;

  VAR_16 = FUNC_0(&VAR_14->core, 0);
  break;
 case 129:
  VAR_14->core.calib[VAR_17].scale = VAR_11;


  VAR_14->core.param.cmd = VAR_6;
  VAR_14->core.param.sensor_offset.flags =
   VAR_8;
  for (VAR_15 = VAR_1; VAR_15 < VAR_0; VAR_15++)
   VAR_14->core.param.sensor_scale.scale[VAR_15] =
    VAR_14->core.calib[VAR_15].scale;
  VAR_14->core.param.sensor_scale.temp =
   VAR_2;

  VAR_16 = FUNC_0(&VAR_14->core, 0);
  break;
 case 128:
  if (VAR_14->core.type == VAR_7) {
   VAR_16 = -VAR_3;
   break;
  }
  VAR_14->core.param.cmd = VAR_5;
  VAR_14->core.param.sensor_range.data = VAR_11;


  VAR_14->core.param.sensor_range.roundup = 1;

  VAR_16 = FUNC_0(&VAR_14->core, 0);
  break;
 default:
  VAR_16 = FUNC_1(
    &VAR_14->core, VAR_10, VAR_11, VAR_12, VAR_13);
  break;
 }

 FUNC_4(&VAR_14->core.cmd_lock);

 return VAR_16;
}
