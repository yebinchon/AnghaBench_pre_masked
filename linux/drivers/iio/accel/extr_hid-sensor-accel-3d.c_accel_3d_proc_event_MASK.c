
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int dev; } ;
struct hid_sensor_hub_device {int dummy; } ;
struct TYPE_2__ {int data_ready; } ;
struct accel_3d_state {scalar_t__ timestamp; int accel_val; TYPE_1__ common_attributes; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct iio_dev*,int ,int,scalar_t__) ;
 scalar_t__ FUNC_3 (struct iio_dev*) ;
 struct accel_3d_state* FUNC_4 (struct iio_dev*) ;
 struct iio_dev* FUNC_5 (void*) ;

__attribute__((used)) static int FUNC_6(struct hid_sensor_hub_device *VAR_0,
    unsigned VAR_1,
    void *VAR_2)
{
 struct iio_dev *VAR_3 = FUNC_5(VAR_2);
 struct accel_3d_state *VAR_4 = FUNC_4(VAR_3);

 FUNC_1(&VAR_3->dev, "accel_3d_proc_event\n");
 if (FUNC_0(&VAR_4->common_attributes.data_ready)) {
  if (!VAR_4->timestamp)
   VAR_4->timestamp = FUNC_3(VAR_3);

  FUNC_2(VAR_3,
         VAR_4->accel_val,
         sizeof(VAR_4->accel_val),
         VAR_4->timestamp);

  VAR_4->timestamp = 0;
 }

 return 0;
}
