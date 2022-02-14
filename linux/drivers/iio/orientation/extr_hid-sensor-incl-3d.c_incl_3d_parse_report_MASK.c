
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct TYPE_5__ {scalar_t__ index; int report_id; int size; } ;
struct TYPE_4__ {TYPE_2__ sensitivity; } ;
struct incl_3d_state {TYPE_1__ common_attributes; int scale_post_decml; int scale_pre_decml; TYPE_2__* incl; int scale_precision; } ;
struct iio_chan_spec {int dummy; } ;
struct hid_sensor_hub_device {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int *,char*,scalar_t__,int ,...) ;
 int FUNC_1 (int ,TYPE_2__*,int *,int *) ;
 int FUNC_2 (struct iio_chan_spec*,int ) ;
 int FUNC_3 (struct hid_sensor_hub_device*,int ,unsigned int,int,TYPE_2__*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_11,
    struct hid_sensor_hub_device *VAR_12,
    struct iio_chan_spec *VAR_13,
    unsigned VAR_14,
    struct incl_3d_state *VAR_15)
{
 int VAR_16;

 VAR_16 = FUNC_3(VAR_12,
    VAR_4,
    VAR_14,
    VAR_8,
    &VAR_15->incl[VAR_0]);
 if (VAR_16)
  return VAR_16;
 FUNC_2(&VAR_13[VAR_0],
    VAR_15->incl[VAR_0].size);

 VAR_16 = FUNC_3(VAR_12,
    VAR_4,
    VAR_14,
    VAR_9,
    &VAR_15->incl[VAR_1]);
 if (VAR_16)
  return VAR_16;
 FUNC_2(&VAR_13[VAR_1],
    VAR_15->incl[VAR_1].size);

 VAR_16 = FUNC_3(VAR_12,
    VAR_4,
    VAR_14,
    VAR_10,
    &VAR_15->incl[VAR_2]);
 if (VAR_16)
  return VAR_16;
 FUNC_2(&VAR_13[VAR_2],
    VAR_15->incl[VAR_2].size);

 FUNC_0(&VAR_11->dev, "incl_3d %x:%x, %x:%x, %x:%x\n",
   VAR_15->incl[0].index,
   VAR_15->incl[0].report_id,
   VAR_15->incl[1].index, VAR_15->incl[1].report_id,
   VAR_15->incl[2].index, VAR_15->incl[2].report_id);

 VAR_15->scale_precision = FUNC_1(
    VAR_7,
    &VAR_15->incl[VAR_0],
    &VAR_15->scale_pre_decml, &VAR_15->scale_post_decml);


 if (VAR_15->common_attributes.sensitivity.index < 0) {
  FUNC_3(VAR_12,
   VAR_3, VAR_14,
   VAR_5 |
   VAR_6,
   &VAR_15->common_attributes.sensitivity);
  FUNC_0(&VAR_11->dev, "Sensitivity index:report %d:%d\n",
   VAR_15->common_attributes.sensitivity.index,
   VAR_15->common_attributes.sensitivity.report_id);
 }
 return VAR_16;
}
