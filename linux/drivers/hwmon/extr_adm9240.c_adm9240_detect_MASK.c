
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
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*,char*,int) ;
 int FUNC_2 (struct i2c_adapter*,int ) ;
 int FUNC_3 (struct i2c_client*,int ) ;
 int FUNC_4 (int ,char const*,int ) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_6,
     struct i2c_board_info *VAR_7)
{
 struct i2c_adapter *VAR_8 = VAR_6->adapter;
 const char *VAR_9 = "";
 int VAR_10 = VAR_6->addr;
 u8 VAR_11, VAR_12;

 if (!FUNC_2(VAR_8, VAR_4))
  return -VAR_3;


 if (FUNC_3(VAR_6, VAR_1)
   != VAR_10) {
  FUNC_0(&VAR_8->dev, "detect fail: address match, 0x%02x\n",
   VAR_10);
  return -VAR_3;
 }


 VAR_11 = FUNC_3(VAR_6, VAR_2);
 if (VAR_11 == 0x23) {
  VAR_9 = "adm9240";
 } else if (VAR_11 == 0xda) {
  VAR_9 = "ds1780";
 } else if (VAR_11 == 0x01) {
  VAR_9 = "lm81";
 } else {
  FUNC_0(&VAR_8->dev, "detect fail: unknown manuf, 0x%02x\n",
   VAR_11);
  return -VAR_3;
 }


 VAR_12 = FUNC_3(VAR_6, VAR_0);
 FUNC_1(&VAR_8->dev, "found %s revision %u\n",
   VAR_11 == 0x23 ? "ADM9240" :
   VAR_11 == 0xda ? "DS1780" : "LM81", VAR_12);

 FUNC_4(VAR_7->type, VAR_9, VAR_5);

 return 0;
}
