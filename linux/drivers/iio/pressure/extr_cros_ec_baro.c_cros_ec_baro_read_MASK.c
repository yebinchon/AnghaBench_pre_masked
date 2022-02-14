
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u16 ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int scan_index; } ;
struct TYPE_7__ {int data; } ;
struct TYPE_8__ {TYPE_1__ sensor_range; int cmd; } ;
struct TYPE_11__ {int cmd_lock; TYPE_4__* resp; TYPE_2__ param; } ;
struct cros_ec_baro_state {TYPE_5__ core; } ;
typedef int s16 ;
struct TYPE_9__ {int ret; } ;
struct TYPE_10__ {TYPE_3__ sensor_range; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_5__*,int ) ;
 int FUNC_1 (TYPE_5__*,struct iio_chan_spec const*,int*,int*,long) ;
 int FUNC_2 (struct iio_dev*,int,int *) ;
 struct cros_ec_baro_state* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct iio_dev *VAR_5,
        struct iio_chan_spec const *VAR_6,
        int *VAR_7, int *VAR_8, long VAR_9)
{
 struct cros_ec_baro_state *VAR_10 = FUNC_3(VAR_5);
 u16 VAR_11 = 0;
 int VAR_12;
 int VAR_13 = VAR_6->scan_index;

 FUNC_4(&VAR_10->core.cmd_lock);

 switch (VAR_9) {
 case 129:
  VAR_12 = FUNC_2(VAR_5, 1 << VAR_13,
          (s16 *)&VAR_11);
  if (VAR_12)
   break;

  *VAR_7 = VAR_11;
  VAR_12 = VAR_3;
  break;
 case 128:
  VAR_10->core.param.cmd = VAR_4;
  VAR_10->core.param.sensor_range.data = VAR_1;

  VAR_12 = FUNC_0(&VAR_10->core, 0);
  if (VAR_12)
   break;

  *VAR_7 = VAR_10->core.resp->sensor_range.ret;


  *VAR_8 = 10 << VAR_0;
  VAR_12 = VAR_2;
  break;
 default:
  VAR_12 = FUNC_1(&VAR_10->core, VAR_6, VAR_7, VAR_8,
      VAR_9);
  break;
 }

 FUNC_5(&VAR_10->core.cmd_lock);

 return VAR_12;
}
