
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct st_sensors_platform_data {int drdy_int_pin; } ;
struct st_lsm6dsx_hw {struct device* dev; TYPE_1__* settings; } ;
struct device {scalar_t__ platform_data; } ;
struct TYPE_2__ {int int2_addr; int int1_addr; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 scalar_t__ FUNC_1 (struct st_lsm6dsx_hw*,int*) ;

__attribute__((used)) static int FUNC_2(struct st_lsm6dsx_hw *VAR_1, u8 *VAR_2)
{
 int VAR_3 = 0, VAR_4;

 if (FUNC_1(VAR_1, &VAR_4) < 0) {
  struct st_sensors_platform_data *VAR_5;
  struct device *VAR_6 = VAR_1->dev;

  VAR_5 = (struct st_sensors_platform_data *)VAR_6->platform_data;
  VAR_4 = VAR_5 ? VAR_5->drdy_int_pin : 1;
 }

 switch (VAR_4) {
 case 1:
  *VAR_2 = VAR_1->settings->int1_addr;
  break;
 case 2:
  *VAR_2 = VAR_1->settings->int2_addr;
  break;
 default:
  FUNC_0(VAR_1->dev, "unsupported data ready pin\n");
  VAR_3 = -VAR_0;
  break;
 }

 return VAR_3;
}
