
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct iio_chan_spec {int dummy; } ;
struct hid_sensor_hub_device {int dummy; } ;
struct TYPE_5__ {scalar_t__ index; int report_id; int size; } ;
struct TYPE_4__ {TYPE_2__ sensitivity; } ;
struct als_state {TYPE_1__ common_attributes; int scale_post_decml; int scale_pre_decml; TYPE_2__ als_illum; int scale_precision; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct iio_chan_spec*,int ,int ) ;
 int FUNC_1 (int *,char*,scalar_t__,int ) ;
 int FUNC_2 (int ,TYPE_2__*,int *,int *) ;
 int FUNC_3 (struct hid_sensor_hub_device*,int ,unsigned int,int,TYPE_2__*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_8,
    struct hid_sensor_hub_device *VAR_9,
    struct iio_chan_spec *VAR_10,
    unsigned VAR_11,
    struct als_state *VAR_12)
{
 int VAR_13;

 VAR_13 = FUNC_3(VAR_9, VAR_3,
   VAR_11,
   VAR_7,
   &VAR_12->als_illum);
 if (VAR_13 < 0)
  return VAR_13;
 FUNC_0(VAR_10, VAR_1,
        VAR_12->als_illum.size);
 FUNC_0(VAR_10, VAR_0,
     VAR_12->als_illum.size);

 FUNC_1(&VAR_8->dev, "als %x:%x\n", VAR_12->als_illum.index,
   VAR_12->als_illum.report_id);

 VAR_12->scale_precision = FUNC_2(
    VAR_4,
    &VAR_12->als_illum,
    &VAR_12->scale_pre_decml, &VAR_12->scale_post_decml);


 if (VAR_12->common_attributes.sensitivity.index < 0) {
  FUNC_3(VAR_9,
   VAR_2, VAR_11,
   VAR_6 |
   VAR_5,
   &VAR_12->common_attributes.sensitivity);
  FUNC_1(&VAR_8->dev, "Sensitivity index:report %d:%d\n",
   VAR_12->common_attributes.sensitivity.index,
   VAR_12->common_attributes.sensitivity.report_id);
 }
 return VAR_13;
}
