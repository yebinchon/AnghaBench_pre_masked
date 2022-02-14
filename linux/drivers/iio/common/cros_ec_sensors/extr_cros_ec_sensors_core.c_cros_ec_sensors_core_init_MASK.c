
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct device {int parent; } ;
struct platform_device {int name; struct device dev; } ;
struct TYPE_9__ {struct device* parent; } ;
struct iio_dev {int modes; int name; TYPE_1__ dev; } ;
struct TYPE_14__ {scalar_t__ max_frequency; scalar_t__ min_frequency; } ;
struct TYPE_13__ {int type; int location; } ;
struct ec_response_motion_sense {TYPE_6__ info_3; TYPE_5__ info; } ;
struct ec_params_motion_sense {int dummy; } ;
struct TYPE_10__ {int sensor_num; } ;
struct TYPE_11__ {TYPE_2__ info; int cmd; } ;
struct cros_ec_sensors_core_state {struct ec_response_motion_sense* resp; scalar_t__* frequencies; TYPE_7__* msg; TYPE_4__* calib; int sign; int loc; int type; TYPE_3__ param; TYPE_8__* ec; int cmd_lock; } ;
struct cros_ec_sensor_platform {int sensor_num; } ;
struct cros_ec_dev {scalar_t__ cmd_offset; TYPE_8__* ec_dev; } ;
struct TYPE_16__ {int max_response; } ;
struct TYPE_15__ {int version; int outsize; scalar_t__ command; scalar_t__ data; } ;
struct TYPE_12__ {int scale; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_8__*,scalar_t__,scalar_t__,int *) ;
 int FUNC_1 (struct cros_ec_sensors_core_state*,int ) ;
 struct cros_ec_dev* FUNC_2 (int ) ;
 struct cros_ec_sensor_platform* FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*,char*) ;
 TYPE_7__* FUNC_5 (struct device*,int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,scalar_t__*,scalar_t__*) ;
 struct cros_ec_sensors_core_state* FUNC_8 (struct iio_dev*) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct platform_device*,struct iio_dev*) ;

int FUNC_13(struct platform_device *VAR_8,
         struct iio_dev *VAR_9,
         bool VAR_10)
{
 struct device *VAR_11 = &VAR_8->dev;
 struct cros_ec_sensors_core_state *VAR_12 = FUNC_8(VAR_9);
 struct cros_ec_dev *VAR_13 = FUNC_2(VAR_8->dev.parent);
 struct cros_ec_sensor_platform *VAR_14 = FUNC_3(VAR_11);
 u32 VAR_15;
 int VAR_16, VAR_17;

 FUNC_12(VAR_8, VAR_9);

 VAR_12->ec = VAR_13->ec_dev;
 VAR_12->msg = FUNC_5(&VAR_8->dev,
    FUNC_9((u16)sizeof(struct ec_params_motion_sense),
    VAR_12->ec->max_response), VAR_4);
 if (!VAR_12->msg)
  return -VAR_3;

 VAR_12->resp = (struct ec_response_motion_sense *)VAR_12->msg->data;

 FUNC_11(&VAR_12->cmd_lock);

 VAR_16 = FUNC_0(VAR_12->ec,
      VAR_13->cmd_offset,
      VAR_2,
      &VAR_15);
 if (VAR_16 < 0)
  return VAR_16;


 VAR_12->msg->version = FUNC_6(VAR_15) - 1;
 VAR_12->msg->command = VAR_2 + VAR_13->cmd_offset;
 VAR_12->msg->outsize = sizeof(struct ec_params_motion_sense);

 VAR_9->dev.parent = &VAR_8->dev;
 VAR_9->name = VAR_8->name;

 if (VAR_10) {
  VAR_9->modes = VAR_5;

  VAR_12->param.cmd = VAR_6;
  VAR_12->param.info.sensor_num = VAR_14->sensor_num;
  VAR_16 = FUNC_1(VAR_12, 0);
  if (VAR_16) {
   FUNC_4(VAR_11, "Can not access sensor info\n");
   return VAR_16;
  }
  VAR_12->type = VAR_12->resp->info.type;
  VAR_12->loc = VAR_12->resp->info.location;


  FUNC_10(VAR_12->sign, 1, VAR_0);

  for (VAR_17 = VAR_1; VAR_17 < VAR_0; VAR_17++)
   VAR_12->calib[VAR_17].scale = VAR_7;


  VAR_12->frequencies[0] = 0;
  if (VAR_12->msg->version < 3) {
   FUNC_7(VAR_12->resp->info.type,
       &VAR_12->frequencies[1],
       &VAR_12->frequencies[2]);
  } else {
   VAR_12->frequencies[1] =
       VAR_12->resp->info_3.min_frequency;
   VAR_12->frequencies[2] =
       VAR_12->resp->info_3.max_frequency;
  }
 }

 return 0;
}
