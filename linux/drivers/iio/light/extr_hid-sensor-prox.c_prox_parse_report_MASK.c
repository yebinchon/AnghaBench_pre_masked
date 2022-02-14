
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ index; int report_id; int size; } ;
struct TYPE_3__ {TYPE_2__ sensitivity; } ;
struct prox_state {TYPE_1__ common_attributes; TYPE_2__ prox_attr; } ;
struct platform_device {int dev; } ;
struct iio_chan_spec {int dummy; } ;
struct hid_sensor_hub_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*,scalar_t__,int ) ;
 int FUNC_1 (struct iio_chan_spec*,int ,int ) ;
 int FUNC_2 (struct hid_sensor_hub_device*,int ,unsigned int,int,TYPE_2__*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_6,
    struct hid_sensor_hub_device *VAR_7,
    struct iio_chan_spec *VAR_8,
    unsigned VAR_9,
    struct prox_state *VAR_10)
{
 int VAR_11;

 VAR_11 = FUNC_2(VAR_7, VAR_2,
   VAR_9,
   VAR_5,
   &VAR_10->prox_attr);
 if (VAR_11 < 0)
  return VAR_11;
 FUNC_1(VAR_8, VAR_0,
     VAR_10->prox_attr.size);

 FUNC_0(&VAR_6->dev, "prox %x:%x\n", VAR_10->prox_attr.index,
   VAR_10->prox_attr.report_id);


 if (VAR_10->common_attributes.sensitivity.index < 0) {
  FUNC_2(VAR_7,
   VAR_1, VAR_9,
   VAR_3 |
   VAR_4,
   &VAR_10->common_attributes.sensitivity);
  FUNC_0(&VAR_6->dev, "Sensitivity index:report %d:%d\n",
   VAR_10->common_attributes.sensitivity.index,
   VAR_10->common_attributes.sensitivity.report_id);
 }
 if (VAR_10->common_attributes.sensitivity.index < 0)
  FUNC_2(VAR_7,
   VAR_1, VAR_9,
   VAR_3 |
   VAR_5,
   &VAR_10->common_attributes.sensitivity);

 return VAR_11;
}
