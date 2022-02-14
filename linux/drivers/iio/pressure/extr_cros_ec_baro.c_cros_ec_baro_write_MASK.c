
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
struct TYPE_5__ {int data; int roundup; } ;
struct TYPE_6__ {TYPE_1__ sensor_range; int cmd; } ;
struct TYPE_7__ {int cmd_lock; TYPE_2__ param; } ;
struct cros_ec_baro_state {TYPE_3__ core; } ;


 int VAR_0 ;

 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (TYPE_3__*,struct iio_chan_spec const*,int,int,long) ;
 struct cros_ec_baro_state* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_2,
         struct iio_chan_spec const *VAR_3,
         int VAR_4, int VAR_5, long VAR_6)
{
 struct cros_ec_baro_state *VAR_7 = FUNC_2(VAR_2);
 int VAR_8 = 0;

 FUNC_3(&VAR_7->core.cmd_lock);

 switch (VAR_6) {
 case 128:
  VAR_7->core.param.cmd = VAR_1;
  VAR_7->core.param.sensor_range.data = VAR_4;


  VAR_7->core.param.sensor_range.roundup = 1;

  if (FUNC_0(&VAR_7->core, 0))
   VAR_8 = -VAR_0;
  break;
 default:
  VAR_8 = FUNC_1(&VAR_7->core, VAR_3, VAR_4, VAR_5,
       VAR_6);
  break;
 }

 FUNC_4(&VAR_7->core.cmd_lock);

 return VAR_8;
}
