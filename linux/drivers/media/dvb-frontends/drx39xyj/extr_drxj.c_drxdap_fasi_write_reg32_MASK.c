
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct i2c_device_addr {int dummy; } ;
typedef int data ;


 int FUNC_0 (struct i2c_device_addr*,int,int,scalar_t__*,int) ;

__attribute__((used)) static int FUNC_1(struct i2c_device_addr *VAR_0,
       u32 VAR_1,
       u32 VAR_2, u32 VAR_3)
{
 u8 VAR_4[sizeof(VAR_2)];

 VAR_4[0] = (u8) ((VAR_2 >> 0) & 0xFF);
 VAR_4[1] = (u8) ((VAR_2 >> 8) & 0xFF);
 VAR_4[2] = (u8) ((VAR_2 >> 16) & 0xFF);
 VAR_4[3] = (u8) ((VAR_2 >> 24) & 0xFF);

 return FUNC_0(VAR_0, VAR_1, sizeof(VAR_2), VAR_4, VAR_3);
}
