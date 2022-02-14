
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u16 ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int scan_index; int type; } ;
struct TYPE_13__ {int data; } ;
struct TYPE_10__ {int flags; } ;
struct TYPE_14__ {TYPE_4__ sensor_range; int cmd; TYPE_1__ sensor_offset; } ;
struct TYPE_17__ {int cmd_lock; TYPE_7__* resp; TYPE_5__ param; TYPE_3__* calib; } ;
struct cros_ec_light_prox_state {TYPE_8__ core; } ;
typedef int s64 ;
typedef int s16 ;
struct TYPE_15__ {int ret; } ;
struct TYPE_11__ {int* offset; } ;
struct TYPE_16__ {TYPE_6__ sensor_range; TYPE_2__ sensor_offset; } ;
struct TYPE_12__ {int offset; } ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_8__*,int ) ;
 int FUNC_1 (TYPE_8__*,struct iio_chan_spec const*,int*,int*,long) ;
 int FUNC_2 (struct iio_dev*,int,int *) ;
 struct cros_ec_light_prox_state* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct iio_dev *VAR_8,
       struct iio_chan_spec const *VAR_9,
       int *VAR_10, int *VAR_11, long VAR_12)
{
 struct cros_ec_light_prox_state *VAR_13 = FUNC_3(VAR_8);
 u16 VAR_14 = 0;
 s64 VAR_15;
 int VAR_16;
 int VAR_17 = VAR_9->scan_index;

 FUNC_4(&VAR_13->core.cmd_lock);

 switch (VAR_12) {
 case 128:
  if (VAR_9->type == VAR_3) {
   VAR_16 = FUNC_2(VAR_8, 1 << VAR_17,
           (s16 *)&VAR_14);
   if (VAR_16)
    break;
   *VAR_10 = VAR_14;
   VAR_16 = VAR_4;
  } else {
   VAR_16 = -VAR_1;
  }
  break;
 case 129:
  if (VAR_9->type == VAR_2) {
   VAR_16 = FUNC_2(VAR_8, 1 << VAR_17,
           (s16 *)&VAR_14);
   if (VAR_16)
    break;





   *VAR_10 = VAR_14;
   VAR_16 = VAR_4;
  } else {
   VAR_16 = -VAR_1;
  }
  break;
 case 131:
  VAR_13->core.param.cmd = VAR_6;
  VAR_13->core.param.sensor_offset.flags = 0;

  VAR_16 = FUNC_0(&VAR_13->core, 0);
  if (VAR_16)
   break;


  VAR_13->core.calib[0].offset =
   VAR_13->core.resp->sensor_offset.offset[0];

  *VAR_10 = VAR_13->core.calib[VAR_17].offset;
  VAR_16 = VAR_4;
  break;
 case 130:





  VAR_13->core.param.cmd = VAR_7;
  VAR_13->core.param.sensor_range.data = VAR_0;

  VAR_16 = FUNC_0(&VAR_13->core, 0);
  if (VAR_16)
   break;

  VAR_15 = VAR_13->core.resp->sensor_range.ret;
  *VAR_10 = VAR_15 >> 16;
  *VAR_11 = (VAR_15 & 0xffff) * 100;
  VAR_16 = VAR_5;
  break;
 default:
  VAR_16 = FUNC_1(&VAR_13->core, VAR_9, VAR_10, VAR_11,
      VAR_12);
  break;
 }

 FUNC_5(&VAR_13->core.cmd_lock);

 return VAR_16;
}
