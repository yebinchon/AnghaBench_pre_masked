
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct i2c_device_addr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i2c_device_addr*,int ,int,int*,int) ;

__attribute__((used)) static
int FUNC_1(struct i2c_device_addr *VAR_2,
      u32 VAR_3,
      u16 *VAR_4, u32 VAR_5)
{
 u8 VAR_6[2] = { 0 };
 int VAR_7 = -VAR_1;
 u16 VAR_8 = 0;

 if (!VAR_4)
  return -VAR_0;

 VAR_7 = FUNC_0(VAR_2, VAR_3, 2, VAR_6, 1);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_8 = (u16) (VAR_6[0] + (VAR_6[1] << 8));

 *VAR_4 = VAR_8;

 return VAR_7;
}
