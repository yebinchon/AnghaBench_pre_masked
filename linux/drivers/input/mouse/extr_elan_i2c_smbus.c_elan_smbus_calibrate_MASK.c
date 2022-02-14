
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dummy; } ;
typedef int cmd ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_client*,int ,int,int*) ;

__attribute__((used)) static int FUNC_1(struct i2c_client *VAR_1)
{
 u8 VAR_2[4] = { 0x00, 0x08, 0x00, 0x01 };

 return FUNC_0(VAR_1, VAR_0,
       sizeof(VAR_2), VAR_2);
}
