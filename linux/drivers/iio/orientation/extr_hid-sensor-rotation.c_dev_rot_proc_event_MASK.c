
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct iio_dev {int dev; } ;
struct hid_sensor_hub_device {int dummy; } ;
struct TYPE_2__ {int data_ready; } ;
struct dev_rot_state {scalar_t__ sampled_vals; TYPE_1__ common_attributes; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct iio_dev*,int *,int) ;
 struct dev_rot_state* FUNC_3 (struct iio_dev*) ;
 struct iio_dev* FUNC_4 (void*) ;

__attribute__((used)) static int FUNC_5(struct hid_sensor_hub_device *VAR_0,
    unsigned VAR_1,
    void *VAR_2)
{
 struct iio_dev *VAR_3 = FUNC_4(VAR_2);
 struct dev_rot_state *VAR_4 = FUNC_3(VAR_3);

 FUNC_1(&VAR_3->dev, "dev_rot_proc_event\n");
 if (FUNC_0(&VAR_4->common_attributes.data_ready))
  FUNC_2(VAR_3,
    (u8 *)VAR_4->sampled_vals,
    sizeof(VAR_4->sampled_vals));

 return 0;
}
