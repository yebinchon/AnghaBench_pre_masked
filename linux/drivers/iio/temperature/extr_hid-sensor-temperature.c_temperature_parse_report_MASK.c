
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ index; int size; } ;
struct TYPE_4__ {TYPE_2__ sensitivity; } ;
struct temperature_state {TYPE_1__ common_attributes; int scale_post_decml; int scale_pre_decml; TYPE_2__ temperature_attr; int scale_precision; } ;
struct platform_device {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
struct hid_sensor_hub_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,TYPE_2__*,int *,int *) ;
 int FUNC_1 (struct hid_sensor_hub_device*,int ,unsigned int,int,TYPE_2__*) ;
 int FUNC_2 (struct iio_chan_spec*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_5,
    struct hid_sensor_hub_device *VAR_6,
    struct iio_chan_spec *VAR_7,
    unsigned int VAR_8,
    struct temperature_state *VAR_9)
{
 int VAR_10;

 VAR_10 = FUNC_1(VAR_6, VAR_1,
   VAR_8,
   VAR_2,
   &VAR_9->temperature_attr);
 if (VAR_10 < 0)
  return VAR_10;

 FUNC_2(VAR_7, 0,
     VAR_9->temperature_attr.size);

 VAR_9->scale_precision = FUNC_0(
    VAR_4,
    &VAR_9->temperature_attr,
    &VAR_9->scale_pre_decml, &VAR_9->scale_post_decml);


 if (VAR_9->common_attributes.sensitivity.index < 0)
  FUNC_1(VAR_6,
   VAR_0, VAR_8,
   VAR_3 |
   VAR_2,
   &VAR_9->common_attributes.sensitivity);

 return VAR_10;
}
