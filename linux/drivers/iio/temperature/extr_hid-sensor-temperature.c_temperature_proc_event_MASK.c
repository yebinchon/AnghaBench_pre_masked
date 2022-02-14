
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int data_ready; } ;
struct temperature_state {int temperature_data; TYPE_1__ common_attributes; } ;
struct iio_dev {int dummy; } ;
struct hid_sensor_hub_device {int dummy; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct iio_dev*) ;
 struct temperature_state* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct iio_dev*,int *,int ) ;
 struct iio_dev* FUNC_4 (void*) ;

__attribute__((used)) static int FUNC_5(struct hid_sensor_hub_device *VAR_0,
    unsigned int VAR_1, void *VAR_2)
{
 struct iio_dev *VAR_3 = FUNC_4(VAR_2);
 struct temperature_state *VAR_4 = FUNC_2(VAR_3);

 if (FUNC_0(&VAR_4->common_attributes.data_ready))
  FUNC_3(VAR_3,
    &VAR_4->temperature_data,
    FUNC_1(VAR_3));

 return 0;
}
