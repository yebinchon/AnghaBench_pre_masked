
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int addr; struct i2c_adapter* adapter; } ;
struct i2c_board_info {int type; } ;
struct i2c_adapter {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (struct i2c_adapter*,int ) ;
 int FUNC_2 (struct i2c_client*,int ) ;
 int FUNC_3 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_9,
         struct i2c_board_info *VAR_10)
{
 struct i2c_adapter *VAR_11 = VAR_9->adapter;
 u8 VAR_12, VAR_13, VAR_14, VAR_15;
 u8 VAR_16, VAR_17;
 int VAR_18 = VAR_9->addr;

 if (!FUNC_1(VAR_11, VAR_1))
  return -VAR_0;

 VAR_12 = FUNC_2(VAR_9, VAR_8);
 VAR_13 = FUNC_2(VAR_9, VAR_5);

 VAR_14 = FUNC_2(VAR_9, VAR_6);
 VAR_15 = FUNC_2(VAR_9, VAR_7);
 VAR_16 = FUNC_2(VAR_9,
      VAR_4);
 VAR_17 = FUNC_2(VAR_9, VAR_3);

 if (VAR_12 != 0x01
  || (VAR_14 & 0x18) != 0x00
  || (VAR_15 & 0xF8) != 0x00
  || (VAR_16 & 0x20) != 0x00
  || (VAR_17 & 0xA4) != 0xA4) {
  FUNC_0(&VAR_11->dev,
   "Unsupported chip (man_id=0x%02X, chip_id=0x%02X)\n",
   VAR_12, VAR_13);
  return -VAR_0;
 }

 if (VAR_13 == 0x41 && VAR_18 == 0x4c)
  FUNC_3(VAR_10->type, "lm63", VAR_2);
 else if (VAR_13 == 0x51 && (VAR_18 == 0x18 || VAR_18 == 0x4e))
  FUNC_3(VAR_10->type, "lm64", VAR_2);
 else if (VAR_13 == 0x49 && VAR_18 == 0x4c)
  FUNC_3(VAR_10->type, "lm96163", VAR_2);
 else
  return -VAR_0;

 return 0;
}
