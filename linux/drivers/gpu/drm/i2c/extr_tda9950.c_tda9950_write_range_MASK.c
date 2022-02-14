
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_msg {int len; int * buf; scalar_t__ flags; int addr; } ;
struct i2c_client {int dev; int adapter; int addr; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,char*,int ,int,int *) ;
 int FUNC_2 (int *,char*,int,int ) ;
 int FUNC_3 (int ,struct i2c_msg*,int) ;
 int FUNC_4 (int *,int *,int) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_2, u8 VAR_3, u8 *VAR_4, int VAR_5)
{
 struct i2c_msg VAR_6;
 u8 VAR_7[VAR_0 + 3];
 int VAR_8;

 if (FUNC_0(VAR_5 > sizeof(VAR_7) - 1))
  return -VAR_1;

 VAR_7[0] = VAR_3;
 FUNC_4(VAR_7 + 1, VAR_4, VAR_5);

 VAR_6.addr = VAR_2->addr;
 VAR_6.flags = 0;
 VAR_6.len = VAR_5 + 1;
 VAR_6.buf = VAR_7;

 FUNC_1(&VAR_2->dev, "wr 0x%02x: %*ph\n", VAR_3, VAR_5, VAR_4);

 VAR_8 = FUNC_3(VAR_2->adapter, &VAR_6, 1);
 if (VAR_8 < 0)
  FUNC_2(&VAR_2->dev, "Error %d writing to cec:0x%x\n", VAR_8, VAR_3);
 return VAR_8 < 0 ? VAR_8 : 0;
}
