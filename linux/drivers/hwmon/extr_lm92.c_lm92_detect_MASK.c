
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct i2c_client {struct i2c_adapter* adapter; } ;
struct i2c_board_info {int type; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct i2c_adapter*,int) ;
 int FUNC_1 (struct i2c_client*,int ) ;
 int FUNC_2 (struct i2c_client*,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_6,
         struct i2c_board_info *VAR_7)
{
 struct i2c_adapter *VAR_8 = VAR_6->adapter;
 u8 VAR_9;
 u16 VAR_10;

 if (!FUNC_0(VAR_8, VAR_1
         | VAR_2))
  return -VAR_0;

 VAR_9 = FUNC_1(VAR_6, VAR_4);
 VAR_10 = FUNC_2(VAR_6, VAR_5);

 if ((VAR_9 & 0xe0) == 0x00 && VAR_10 == 0x0180)
  FUNC_3("lm92: Found National Semiconductor LM92 chip\n");
 else
  return -VAR_0;

 FUNC_4(VAR_7->type, "lm92", VAR_3);

 return 0;
}
