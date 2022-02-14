
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * orientation; } ;
struct inv_mpu6050_state {TYPE_1__ plat_data; } ;
struct iio_dev_attr {int address; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef int s8 ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*) ;
 struct inv_mpu6050_state* FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,char*,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 struct iio_dev_attr* FUNC_3 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_2, struct device_attribute *VAR_3,
        char *VAR_4)
{
 struct inv_mpu6050_state *VAR_5 = FUNC_1(FUNC_0(VAR_2));
 struct iio_dev_attr *VAR_6 = FUNC_3(VAR_3);
 s8 *VAR_7;

 switch (VAR_6->address) {




 case 128:
 case 129:
  VAR_7 = VAR_5->plat_data.orientation;

  return FUNC_2(VAR_4, VAR_1,
   "%d, %d, %d; %d, %d, %d; %d, %d, %d\n",
   VAR_7[0], VAR_7[1], VAR_7[2], VAR_7[3], VAR_7[4], VAR_7[5], VAR_7[6], VAR_7[7], VAR_7[8]);
 default:
  return -VAR_0;
 }
}
