
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct iio_chan_spec {int dummy; } ;
struct hid_sensor_hub_device {int usage; } ;
struct TYPE_5__ {scalar_t__ index; int report_id; int size; } ;
struct TYPE_4__ {TYPE_2__ sensitivity; } ;
struct accel_3d_state {TYPE_1__ common_attributes; int scale_post_decml; int scale_pre_decml; TYPE_2__* accel; int scale_precision; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct iio_chan_spec*,int,int ) ;
 int FUNC_1 (int *,char*,scalar_t__,int ,...) ;
 int FUNC_2 (int ,TYPE_2__*,int *,int *) ;
 int FUNC_3 (struct hid_sensor_hub_device*,int ,unsigned int,int,TYPE_2__*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_7,
    struct hid_sensor_hub_device *VAR_8,
    struct iio_chan_spec *VAR_9,
    unsigned VAR_10,
    struct accel_3d_state *VAR_11)
{
 int VAR_12;
 int VAR_13;

 for (VAR_13 = 0; VAR_13 <= VAR_1; ++VAR_13) {
  VAR_12 = FUNC_3(VAR_8,
    VAR_3,
    VAR_10,
    VAR_4 + VAR_13,
    &VAR_11->accel[VAR_0 + VAR_13]);
  if (VAR_12 < 0)
   break;
  FUNC_0(VAR_9,
    VAR_0 + VAR_13,
    VAR_11->accel[VAR_0 + VAR_13].size);
 }
 FUNC_1(&VAR_7->dev, "accel_3d %x:%x, %x:%x, %x:%x\n",
   VAR_11->accel[0].index,
   VAR_11->accel[0].report_id,
   VAR_11->accel[1].index, VAR_11->accel[1].report_id,
   VAR_11->accel[2].index, VAR_11->accel[2].report_id);

 VAR_11->scale_precision = FUNC_2(
    VAR_8->usage,
    &VAR_11->accel[VAR_0],
    &VAR_11->scale_pre_decml, &VAR_11->scale_post_decml);


 if (VAR_11->common_attributes.sensitivity.index < 0) {
  FUNC_3(VAR_8,
   VAR_2, VAR_10,
   VAR_6 |
   VAR_5,
   &VAR_11->common_attributes.sensitivity);
  FUNC_1(&VAR_7->dev, "Sensitivity index:report %d:%d\n",
   VAR_11->common_attributes.sensitivity.index,
   VAR_11->common_attributes.sensitivity.report_id);
 }

 return VAR_12;
}
