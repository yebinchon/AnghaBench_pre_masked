
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct iio_dev {int dev; } ;
struct iio_chan_spec {int dummy; } ;
struct TYPE_5__ {int cmd; } ;
struct cros_ec_sensors_core_state {int cmd_lock; TYPE_4__* resp; TYPE_2__* calib; TYPE_1__ param; } ;
typedef int ssize_t ;
struct TYPE_7__ {int * offset; } ;
struct TYPE_8__ {TYPE_3__ perform_calib; } ;
struct TYPE_6__ {int offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cros_ec_sensors_core_state*,int ) ;
 int FUNC_1 (int *,char*) ;
 struct cros_ec_sensors_core_state* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char const*,int*) ;

__attribute__((used)) static ssize_t FUNC_6(struct iio_dev *VAR_4,
  uintptr_t VAR_5, const struct iio_chan_spec *VAR_6,
  const char *VAR_7, size_t VAR_8)
{
 struct cros_ec_sensors_core_state *VAR_9 = FUNC_2(VAR_4);
 int VAR_10, VAR_11;
 bool VAR_12;

 VAR_10 = FUNC_5(VAR_7, &VAR_12);
 if (VAR_10 < 0)
  return VAR_10;
 if (!VAR_12)
  return -VAR_2;

 FUNC_3(&VAR_9->cmd_lock);
 VAR_9->param.cmd = VAR_3;
 VAR_10 = FUNC_0(VAR_9, 0);
 if (VAR_10 != 0) {
  FUNC_1(&VAR_4->dev, "Unable to calibrate sensor\n");
 } else {

  for (VAR_11 = VAR_1; VAR_11 < VAR_0; VAR_11++)
   VAR_9->calib[VAR_11].offset = VAR_9->resp->perform_calib.offset[VAR_11];
 }
 FUNC_4(&VAR_9->cmd_lock);

 return VAR_10 ? VAR_10 : VAR_8;
}
