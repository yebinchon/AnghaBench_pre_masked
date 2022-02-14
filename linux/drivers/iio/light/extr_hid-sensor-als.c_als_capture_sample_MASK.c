
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct iio_dev {int dummy; } ;
struct hid_sensor_hub_device {int dummy; } ;
struct als_state {void** illum; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;

 struct als_state* FUNC_0 (struct iio_dev*) ;
 struct iio_dev* FUNC_1 (void*) ;

__attribute__((used)) static int FUNC_2(struct hid_sensor_hub_device *VAR_3,
    unsigned VAR_4,
    size_t VAR_5, char *VAR_6,
    void *VAR_7)
{
 struct iio_dev *VAR_8 = FUNC_1(VAR_7);
 struct als_state *VAR_9 = FUNC_0(VAR_8);
 int VAR_10 = -VAR_2;
 u32 VAR_11 = *(u32 *)VAR_6;

 switch (VAR_4) {
 case 128:
  VAR_9->illum[VAR_1] = VAR_11;
  VAR_9->illum[VAR_0] = VAR_11;
  VAR_10 = 0;
  break;
 default:
  break;
 }

 return VAR_10;
}
