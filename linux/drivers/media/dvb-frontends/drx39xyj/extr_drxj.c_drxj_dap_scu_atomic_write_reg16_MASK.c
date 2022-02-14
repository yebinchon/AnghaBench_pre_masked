
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct i2c_device_addr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_device_addr*,int ,int,scalar_t__*,int) ;

__attribute__((used)) static
int FUNC_1(struct i2c_device_addr *VAR_1,
       u32 VAR_2,
       u16 VAR_3, u32 VAR_4)
{
 u8 VAR_5[2];
 int VAR_6 = -VAR_0;

 VAR_5[0] = (u8) (VAR_3 & 0xff);
 VAR_5[1] = (u8) ((VAR_3 >> 8) & 0xff);

 VAR_6 = FUNC_0(VAR_1, VAR_2, 2, VAR_5, 0);

 return VAR_6;
}
