
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dev; } ;
struct hid_sensor_hub_device {int dummy; } ;
struct dev_rot_state {int sampled_vals; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int *,char*,size_t,int) ;
 struct dev_rot_state* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int ,char*,int) ;
 struct iio_dev* FUNC_3 (void*) ;

__attribute__((used)) static int FUNC_4(struct hid_sensor_hub_device *VAR_1,
    unsigned VAR_2,
    size_t VAR_3, char *VAR_4,
    void *VAR_5)
{
 struct iio_dev *VAR_6 = FUNC_3(VAR_5);
 struct dev_rot_state *VAR_7 = FUNC_1(VAR_6);

 if (VAR_2 == VAR_0) {
  FUNC_2(VAR_7->sampled_vals, VAR_4,
     sizeof(VAR_7->sampled_vals));
  FUNC_0(&VAR_6->dev, "Recd Quat len:%zu::%zu\n", VAR_3,
     sizeof(VAR_7->sampled_vals));
 }

 return 0;
}
