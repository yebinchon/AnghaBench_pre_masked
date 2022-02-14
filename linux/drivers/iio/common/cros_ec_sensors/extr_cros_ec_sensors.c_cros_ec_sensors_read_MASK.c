
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct iio_chan_spec {int scan_index; } ;
struct TYPE_15__ {int data; } ;
struct TYPE_12__ {int flags; } ;
struct TYPE_16__ {TYPE_5__ sensor_range; int cmd; TYPE_2__ sensor_offset; } ;
struct TYPE_19__ {int (* read_ec_sensors_data ) (struct iio_dev*,int,int*) ;int cmd_lock; int type; TYPE_8__* resp; TYPE_6__ param; TYPE_4__* calib; } ;
struct cros_ec_sensors_state {TYPE_9__ core; } ;
typedef int s64 ;
typedef int s16 ;
struct TYPE_17__ {int ret; } ;
struct TYPE_13__ {int* scale; } ;
struct TYPE_11__ {int* offset; } ;
struct TYPE_18__ {TYPE_7__ sensor_range; TYPE_3__ sensor_scale; TYPE_1__ sensor_offset; } ;
struct TYPE_14__ {int offset; int scale; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;




 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;



 int VAR_13 ;
 int FUNC_0 (TYPE_9__*,int ) ;
 int FUNC_1 (TYPE_9__*,struct iio_chan_spec const*,int*,int*,long) ;
 int FUNC_2 (int,int) ;
 struct cros_ec_sensors_state* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct iio_dev*,int,int*) ;

__attribute__((used)) static int FUNC_7(struct iio_dev *VAR_14,
     struct iio_chan_spec const *VAR_15,
     int *VAR_16, int *VAR_17, long VAR_18)
{
 struct cros_ec_sensors_state *VAR_19 = FUNC_3(VAR_14);
 s16 VAR_20 = 0;
 s64 VAR_21;
 int VAR_22;
 int VAR_23;
 int VAR_24 = VAR_15->scan_index;

 FUNC_4(&VAR_19->core.cmd_lock);

 switch (VAR_18) {
 case 132:
  VAR_23 = VAR_19->core.read_ec_sensors_data(VAR_14, 1 << VAR_24, &VAR_20);
  if (VAR_23 < 0)
   break;
  VAR_23 = VAR_7;
  *VAR_16 = VAR_20;
  break;
 case 134:
  VAR_19->core.param.cmd = VAR_10;
  VAR_19->core.param.sensor_offset.flags = 0;

  VAR_23 = FUNC_0(&VAR_19->core, 0);
  if (VAR_23 < 0)
   break;


  for (VAR_22 = VAR_2; VAR_22 < VAR_1; VAR_22++)
   VAR_19->core.calib[VAR_22].offset =
    VAR_19->core.resp->sensor_offset.offset[VAR_22];
  VAR_23 = VAR_7;
  *VAR_16 = VAR_19->core.calib[VAR_24].offset;
  break;
 case 133:
  VAR_19->core.param.cmd = VAR_12;
  VAR_19->core.param.sensor_offset.flags = 0;

  VAR_23 = FUNC_0(&VAR_19->core, 0);
  if (VAR_23 == -VAR_5) {

   *VAR_16 = 1;
   *VAR_17 = 0;
   VAR_23 = VAR_8;
   break;
  } else if (VAR_23) {
   break;
  }


  for (VAR_22 = VAR_2; VAR_22 < VAR_1; VAR_22++)
   VAR_19->core.calib[VAR_22].scale =
    VAR_19->core.resp->sensor_scale.scale[VAR_22];

  *VAR_16 = VAR_19->core.calib[VAR_24].scale >> 15;
  *VAR_17 = ((VAR_19->core.calib[VAR_24].scale & 0x7FFF) * 1000000LL) /
   VAR_13;
  VAR_23 = VAR_8;
  break;
 case 131:
  VAR_19->core.param.cmd = VAR_11;
  VAR_19->core.param.sensor_range.data = VAR_3;

  VAR_23 = FUNC_0(&VAR_19->core, 0);
  if (VAR_23 < 0)
   break;

  VAR_21 = VAR_19->core.resp->sensor_range.ret;
  switch (VAR_19->core.type) {
  case 130:




   *VAR_16 = FUNC_2(VAR_21 * 980665, 10);
   *VAR_17 = 10000 << (VAR_0 - 1);
   VAR_23 = VAR_6;
   break;
  case 129:





   *VAR_16 = 0;
   *VAR_17 = FUNC_2(VAR_21 * 3141592653ULL,
     180 << (VAR_0 - 1));
   VAR_23 = VAR_9;
   break;
  case 128:




   *VAR_16 = VAR_21;
   *VAR_17 = 100 << (VAR_0 - 1);
   VAR_23 = VAR_6;
   break;
  default:
   VAR_23 = -VAR_4;
  }
  break;
 default:
  VAR_23 = FUNC_1(&VAR_19->core, VAR_15, VAR_16, VAR_17,
      VAR_18);
  break;
 }
 FUNC_5(&VAR_19->core.cmd_lock);

 return VAR_23;
}
