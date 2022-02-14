
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {size_t scan_index; } ;
struct hid_sensor_hub_device {int usage; } ;
struct TYPE_6__ {struct hid_sensor_hub_device* hsdev; } ;
struct accel_3d_state {int scale_pre_decml; int scale_post_decml; int scale_precision; int value_offset; TYPE_2__ common_attributes; TYPE_1__* accel; } ;
typedef int s32 ;
struct TYPE_5__ {int report_id; int logical_minimum; } ;


 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*,int*,int*) ;
 int FUNC_2 (TYPE_2__*,int*,int*) ;
 struct accel_3d_state* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (struct hid_sensor_hub_device*,int ,int ,int,int ,int) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_4,
         struct iio_chan_spec const *VAR_5,
         int *VAR_6, int *VAR_7,
         long VAR_8)
{
 struct accel_3d_state *VAR_9 = FUNC_3(VAR_4);
 int VAR_10 = -1;
 u32 VAR_11;
 int VAR_12;
 s32 VAR_13;
 struct hid_sensor_hub_device *VAR_14 =
     VAR_9->common_attributes.hsdev;

 *VAR_6 = 0;
 *VAR_7 = 0;
 switch (VAR_8) {
 case 130:
  FUNC_0(&VAR_9->common_attributes, 1);
  VAR_10 = VAR_9->accel[VAR_5->scan_index].report_id;
  VAR_13 = VAR_9->accel[VAR_5->scan_index].logical_minimum;
  VAR_11 = VAR_3[VAR_5->scan_index];
  if (VAR_10 >= 0)
   *VAR_6 = FUNC_4(
     VAR_9->common_attributes.hsdev,
     VAR_14->usage, VAR_11, VAR_10,
     VAR_2,
     VAR_13 < 0);
  else {
   *VAR_6 = 0;
   FUNC_0(&VAR_9->common_attributes,
       0);
   return -VAR_0;
  }
  FUNC_0(&VAR_9->common_attributes, 0);
  VAR_12 = VAR_1;
  break;
 case 128:
  *VAR_6 = VAR_9->scale_pre_decml;
  *VAR_7 = VAR_9->scale_post_decml;
  VAR_12 = VAR_9->scale_precision;
  break;
 case 131:
  *VAR_6 = VAR_9->value_offset;
  VAR_12 = VAR_1;
  break;
 case 129:
  VAR_12 = FUNC_2(
   &VAR_9->common_attributes, VAR_6, VAR_7);
  break;
 case 132:
  VAR_12 = FUNC_1(
   &VAR_9->common_attributes, VAR_6, VAR_7);
  break;
 default:
  VAR_12 = -VAR_0;
  break;
 }

 return VAR_12;
}
