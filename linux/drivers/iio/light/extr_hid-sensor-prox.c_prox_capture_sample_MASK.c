
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct prox_state {int human_presence; } ;
struct iio_dev {int dummy; } ;
struct hid_sensor_hub_device {int dummy; } ;


 int VAR_0 ;

 struct prox_state* FUNC_0 (struct iio_dev*) ;
 struct iio_dev* FUNC_1 (void*) ;

__attribute__((used)) static int FUNC_2(struct hid_sensor_hub_device *VAR_1,
    unsigned VAR_2,
    size_t VAR_3, char *VAR_4,
    void *VAR_5)
{
 struct iio_dev *VAR_6 = FUNC_1(VAR_5);
 struct prox_state *VAR_7 = FUNC_0(VAR_6);
 int VAR_8 = -VAR_0;

 switch (VAR_2) {
 case 128:
  VAR_7->human_presence = *(u32 *)VAR_4;
  VAR_8 = 0;
  break;
 default:
  break;
 }

 return VAR_8;
}
