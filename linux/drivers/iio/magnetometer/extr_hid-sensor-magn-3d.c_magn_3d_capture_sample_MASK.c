
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct magn_3d_state {int ** magn_val_addr; } ;
struct iio_dev {int dummy; } ;
struct hid_sensor_hub_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;







 struct magn_3d_state* FUNC_0 (struct iio_dev*) ;
 struct iio_dev* FUNC_1 (void*) ;

__attribute__((used)) static int FUNC_2(struct hid_sensor_hub_device *VAR_3,
    unsigned VAR_4,
    size_t VAR_5, char *VAR_6,
    void *VAR_7)
{
 struct iio_dev *VAR_8 = FUNC_1(VAR_7);
 struct magn_3d_state *VAR_9 = FUNC_0(VAR_8);
 int VAR_10;
 int VAR_11 = 0;
 u32 *VAR_12 = ((void*)0);

 switch (VAR_4) {
 case 132:
 case 131:
 case 130:
  VAR_10 = (VAR_4 - 132)
    + VAR_1;
 break;
 case 134:
 case 133:
 case 129:
 case 128:
  VAR_10 = (VAR_4 - 134)
    + VAR_0;
 break;
 default:
  return -VAR_2;
 }

 VAR_12 = VAR_9->magn_val_addr[VAR_10];

 if (VAR_12 != ((void*)0))
  *VAR_12 = *((u32 *)VAR_6);
 else
  VAR_11 = -VAR_2;

 return VAR_11;
}
