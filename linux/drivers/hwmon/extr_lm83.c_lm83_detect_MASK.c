
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
 int FUNC_4 (int ,char const*,int ) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_8,
         struct i2c_board_info *VAR_9)
{
 struct i2c_adapter *VAR_10 = VAR_8->adapter;
 const char *VAR_11;
 u8 VAR_12, VAR_13;

 if (!FUNC_2(VAR_10, VAR_1))
  return -VAR_0;


 if ((FUNC_3(VAR_8, VAR_6) & 0xA8) ||
     (FUNC_3(VAR_8, VAR_7) & 0x48) ||
     (FUNC_3(VAR_8, VAR_4) & 0x41)) {
  FUNC_0(&VAR_10->dev, "LM83 detection failed at 0x%02x\n",
   VAR_8->addr);
  return -VAR_0;
 }


 VAR_12 = FUNC_3(VAR_8, VAR_5);
 if (VAR_12 != 0x01)
  return -VAR_0;

 VAR_13 = FUNC_3(VAR_8, VAR_3);
 switch (VAR_13) {
 case 0x03:
  VAR_11 = "lm83";
  break;
 case 0x01:
  VAR_11 = "lm82";
  break;
 default:

  FUNC_1(&VAR_10->dev,
    "Unsupported chip (man_id=0x%02X, chip_id=0x%02X)\n",
    VAR_12, VAR_13);
  return -VAR_0;
 }

 FUNC_4(VAR_9->type, VAR_11, VAR_2);

 return 0;
}
