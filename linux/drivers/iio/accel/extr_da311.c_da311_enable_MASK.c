
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_client*,int ,int,int) ;

__attribute__((used)) static int FUNC_1(struct i2c_client *VAR_1, bool VAR_2)
{
 u8 VAR_3 = VAR_2 ? 0x00 : 0x20;

 return FUNC_0(VAR_1, VAR_0,
      0x20, VAR_3);
}
