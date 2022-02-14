
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iio_dev {int dummy; } ;
struct hid_sensor_hub_device {int dummy; } ;
struct gyro_3d_state {int * gyro_val; } ;


 int VAR_0 ;
 int VAR_1 ;



 struct gyro_3d_state* FUNC_0 (struct iio_dev*) ;
 struct iio_dev* FUNC_1 (void*) ;

__attribute__((used)) static int FUNC_2(struct hid_sensor_hub_device *VAR_2,
    unsigned VAR_3,
    size_t VAR_4, char *VAR_5,
    void *VAR_6)
{
 struct iio_dev *VAR_7 = FUNC_1(VAR_6);
 struct gyro_3d_state *VAR_8 = FUNC_0(VAR_7);
 int VAR_9;
 int VAR_10 = -VAR_1;

 switch (VAR_3) {
 case 130:
 case 129:
 case 128:
  VAR_9 = VAR_3 - 130;
  VAR_8->gyro_val[VAR_0 + VAR_9] =
      *(u32 *)VAR_5;
  VAR_10 = 0;
 break;
 default:
  break;
 }

 return VAR_10;
}
