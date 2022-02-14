
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct iio_chan_spec {int dummy; } ;
struct hid_sensor_hub_device {int usage; } ;
struct TYPE_5__ {int size; int report_id; int index; } ;
struct TYPE_4__ {TYPE_2__ sensitivity; } ;
struct dev_rot_state {TYPE_1__ common_attributes; int scale_post_decml; int scale_pre_decml; TYPE_2__ quaternion; int scale_precision; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,int,...) ;
 int FUNC_1 (struct iio_chan_spec*,int) ;
 int FUNC_2 (int ,TYPE_2__*,int *,int *) ;
 int FUNC_3 (struct hid_sensor_hub_device*,int ,unsigned int,int,TYPE_2__*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_5,
    struct hid_sensor_hub_device *VAR_6,
    struct iio_chan_spec *VAR_7,
    unsigned VAR_8,
    struct dev_rot_state *VAR_9)
{
 int VAR_10;

 VAR_10 = FUNC_3(VAR_6,
    VAR_1,
    VAR_8,
    VAR_4,
    &VAR_9->quaternion);
 if (VAR_10)
  return VAR_10;

 FUNC_1(&VAR_7[0],
  VAR_9->quaternion.size / 4);

 FUNC_0(&VAR_5->dev, "dev_rot %x:%x\n", VAR_9->quaternion.index,
  VAR_9->quaternion.report_id);

 FUNC_0(&VAR_5->dev, "dev_rot: attrib size %d\n",
    VAR_9->quaternion.size);

 VAR_9->scale_precision = FUNC_2(
    VAR_6->usage,
    &VAR_9->quaternion,
    &VAR_9->scale_pre_decml, &VAR_9->scale_post_decml);


 if (VAR_9->common_attributes.sensitivity.index < 0) {
  FUNC_3(VAR_6,
   VAR_0, VAR_8,
   VAR_2 |
   VAR_3,
   &VAR_9->common_attributes.sensitivity);
  FUNC_0(&VAR_5->dev, "Sensitivity index:report %d:%d\n",
   VAR_9->common_attributes.sensitivity.index,
   VAR_9->common_attributes.sensitivity.report_id);
 }

 return 0;
}
