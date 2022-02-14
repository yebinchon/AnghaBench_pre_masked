
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
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,char*,int,int) ;
 int FUNC_2 (struct i2c_adapter*,int ) ;
 int FUNC_3 (struct i2c_client*,int ) ;
 int FUNC_4 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_8,
     struct i2c_board_info *VAR_9)
{
 struct i2c_adapter *VAR_10 = VAR_8->adapter;
 u8 VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;

 if (!FUNC_2(VAR_10, VAR_1))
  return -VAR_0;


 VAR_11 = FUNC_3(VAR_8, VAR_4);
 VAR_12 = FUNC_3(VAR_8, VAR_5);
 VAR_13 = FUNC_3(VAR_8, VAR_7);
 if ((VAR_11 & 0x03) != 0x00
  || VAR_12 > 0x07 || (VAR_13 & 0x61) != 0x00) {
  FUNC_0(&VAR_10->dev, "MAX1619 detection failed at 0x%02x\n",
   VAR_8->addr);
  return -VAR_0;
 }


 VAR_14 = FUNC_3(VAR_8, VAR_6);
 VAR_15 = FUNC_3(VAR_8, VAR_3);
 if (VAR_14 != 0x4D || VAR_15 != 0x04) {
  FUNC_1(&VAR_10->dev,
    "Unsupported chip (man_id=0x%02X, chip_id=0x%02X).\n",
    VAR_14, VAR_15);
  return -VAR_0;
 }

 FUNC_4(VAR_9->type, "max1619", VAR_2);

 return 0;
}
