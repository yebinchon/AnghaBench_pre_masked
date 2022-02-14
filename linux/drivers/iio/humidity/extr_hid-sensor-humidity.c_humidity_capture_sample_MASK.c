
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct hid_sensor_hub_device {int dummy; } ;
struct hid_humidity_state {int humidity_data; } ;
typedef int s32 ;


 int VAR_0 ;

 struct hid_humidity_state* FUNC_0 (struct iio_dev*) ;
 struct iio_dev* FUNC_1 (void*) ;

__attribute__((used)) static int FUNC_2(struct hid_sensor_hub_device *VAR_1,
    unsigned int VAR_2, size_t VAR_3,
    char *VAR_4, void *VAR_5)
{
 struct iio_dev *VAR_6 = FUNC_1(VAR_5);
 struct hid_humidity_state *VAR_7 = FUNC_0(VAR_6);

 switch (VAR_2) {
 case 128:
  VAR_7->humidity_data = *(s32 *)VAR_4;

  return 0;
 default:
  return -VAR_0;
 }
}
