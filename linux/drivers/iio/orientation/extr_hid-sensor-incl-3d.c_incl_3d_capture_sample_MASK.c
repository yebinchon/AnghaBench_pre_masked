
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct incl_3d_state {void** incl_val; } ;
struct iio_dev {int dummy; } ;
struct hid_sensor_hub_device {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;



 struct incl_3d_state* FUNC_0 (struct iio_dev*) ;
 struct iio_dev* FUNC_1 (void*) ;

__attribute__((used)) static int FUNC_2(struct hid_sensor_hub_device *VAR_4,
    unsigned VAR_5,
    size_t VAR_6, char *VAR_7,
    void *VAR_8)
{
 struct iio_dev *VAR_9 = FUNC_1(VAR_8);
 struct incl_3d_state *VAR_10 = FUNC_0(VAR_9);
 int VAR_11 = 0;

 switch (VAR_5) {
 case 130:
  VAR_10->incl_val[VAR_0] = *(u32 *)VAR_7;
 break;
 case 129:
  VAR_10->incl_val[VAR_1] = *(u32 *)VAR_7;
 break;
 case 128:
  VAR_10->incl_val[VAR_2] = *(u32 *)VAR_7;
 break;
 default:
  VAR_11 = -VAR_3;
  break;
 }

 return VAR_11;
}
