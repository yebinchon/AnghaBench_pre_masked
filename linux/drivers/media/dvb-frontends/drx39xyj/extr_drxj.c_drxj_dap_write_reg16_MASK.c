
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct i2c_device_addr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i2c_device_addr*,int ,int ,int ) ;
 int FUNC_1 (struct i2c_device_addr*,int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct i2c_device_addr *VAR_2,
           u32 VAR_3,
           u16 VAR_4, u32 VAR_5)
{
 int VAR_6 = -VAR_1;


 if (VAR_2 == ((void*)0))
  return -VAR_0;

 if (FUNC_2(VAR_3))
  VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_4);
 else
  VAR_6 = FUNC_0(VAR_2,
           VAR_3, VAR_4, VAR_5);

 return VAR_6;
}
