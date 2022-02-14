
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct i2c_device_addr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_device_addr*,int,int,scalar_t__*,int) ;

__attribute__((used)) static int FUNC_1(struct i2c_device_addr *VAR_1,
      u32 VAR_2,
      u32 *VAR_3, u32 VAR_4)
{
 u8 VAR_5[sizeof(*VAR_3)];
 int VAR_6;

 if (!VAR_3)
  return -VAR_0;

 VAR_6 = FUNC_0(VAR_1, VAR_2, sizeof(*VAR_3), VAR_5, VAR_4);
 *VAR_3 = (((u32) VAR_5[0]) << 0) +
     (((u32) VAR_5[1]) << 8) +
     (((u32) VAR_5[2]) << 16) + (((u32) VAR_5[3]) << 24);
 return VAR_6;
}
