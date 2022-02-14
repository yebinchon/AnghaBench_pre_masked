
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct iio_chan_spec {int scan_index; } ;
struct TYPE_9__ {int data; } ;
struct TYPE_8__ {int* offset; int temp; int flags; } ;
struct TYPE_10__ {TYPE_3__ sensor_range; int cmd; TYPE_2__ sensor_offset; } ;
struct TYPE_11__ {int cmd_lock; TYPE_4__ param; TYPE_1__* calib; } ;
struct cros_ec_light_prox_state {TYPE_5__ core; } ;
struct TYPE_7__ {int offset; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_5__*,int ) ;
 int FUNC_1 (TYPE_5__*,struct iio_chan_spec const*,int,int,long) ;
 struct cros_ec_light_prox_state* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_4,
          struct iio_chan_spec const *VAR_5,
          int VAR_6, int VAR_7, long VAR_8)
{
 struct cros_ec_light_prox_state *VAR_9 = FUNC_2(VAR_4);
 int VAR_10;
 int VAR_11 = VAR_5->scan_index;

 FUNC_3(&VAR_9->core.cmd_lock);

 switch (VAR_8) {
 case 129:
  VAR_9->core.calib[VAR_11].offset = VAR_6;

  VAR_9->core.param.cmd = VAR_1;
  VAR_9->core.param.sensor_offset.flags = VAR_3;
  VAR_9->core.param.sensor_offset.offset[0] =
   VAR_9->core.calib[0].offset;
  VAR_9->core.param.sensor_offset.temp =
     VAR_0;
  VAR_10 = FUNC_0(&VAR_9->core, 0);
  break;
 case 128:
  VAR_9->core.param.cmd = VAR_2;
  VAR_9->core.param.sensor_range.data = (VAR_6 << 16) | (VAR_7 / 100);
  VAR_10 = FUNC_0(&VAR_9->core, 0);
  break;
 default:
  VAR_10 = FUNC_1(&VAR_9->core, VAR_5, VAR_6, VAR_7,
       VAR_8);
  break;
 }

 FUNC_4(&VAR_9->core.cmd_lock);

 return VAR_10;
}
