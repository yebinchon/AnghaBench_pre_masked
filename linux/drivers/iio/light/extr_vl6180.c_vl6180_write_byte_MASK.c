
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct i2c_msg {int len; int* buf; int addr; } ;
struct i2c_client {int dev; int adapter; int addr; } ;
typedef int buf ;


 int FUNC_0 (struct i2c_msg*) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int ,struct i2c_msg*,int ) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_0, u16 VAR_1, u8 VAR_2)
{
 u8 VAR_3[3];
 struct i2c_msg VAR_4[1] = {
  { .addr = VAR_0->addr, .len = sizeof(VAR_3), .buf = (u8 *) &VAR_3 } };
 int VAR_5;

 VAR_3[0] = VAR_1 >> 8;
 VAR_3[1] = VAR_1 & 0xff;
 VAR_3[2] = VAR_2;

 VAR_5 = FUNC_2(VAR_0->adapter, VAR_4, FUNC_0(VAR_4));
 if (VAR_5 < 0) {
  FUNC_1(&VAR_0->dev, "failed writing register 0x%04x\n", VAR_1);
  return VAR_5;
 }

 return 0;
}
