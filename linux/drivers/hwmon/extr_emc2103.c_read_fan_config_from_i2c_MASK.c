
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dummy; } ;
struct emc2103_data {int fan_multiplier; int fan_rpm_control; } ;


 int VAR_0 ;
 struct emc2103_data* FUNC_0 (struct i2c_client*) ;
 scalar_t__ FUNC_1 (struct i2c_client*,int ,int*) ;

__attribute__((used)) static void FUNC_2(struct i2c_client *VAR_1)

{
 struct emc2103_data *VAR_2 = FUNC_0(VAR_1);
 u8 VAR_3;

 if (FUNC_1(VAR_1, VAR_0, &VAR_3) < 0)
  return;

 VAR_2->fan_multiplier = 1 << ((VAR_3 & 0x60) >> 5);
 VAR_2->fan_rpm_control = (VAR_3 & 0x80) != 0;
}
