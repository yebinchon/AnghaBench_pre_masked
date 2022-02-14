
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
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
 int FUNC_0 (int *,char*,int,...) ;
 int FUNC_1 (struct i2c_adapter*,int ) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (struct i2c_client*,int ) ;

__attribute__((used)) static int
FUNC_4(struct i2c_client *VAR_7, struct i2c_board_info *VAR_8)
{
 struct i2c_adapter *VAR_9 = VAR_7->adapter;
 u16 VAR_10;
 u8 VAR_11;

 if (!FUNC_1(VAR_9, VAR_1))
  return -VAR_0;


 if ((FUNC_3(VAR_7, VAR_4) & 0x80)) {
  FUNC_0(&VAR_9->dev, "W83L786NG detection failed at 0x%02x\n",
   VAR_7->addr);
  return -VAR_0;
 }


 VAR_10 = (FUNC_3(VAR_7, VAR_5) << 8) +
   FUNC_3(VAR_7, VAR_6);
 VAR_11 = FUNC_3(VAR_7, VAR_3);

 if (VAR_10 != 0x5CA3 ||
     VAR_11 != 0x80) {
  FUNC_0(&VAR_9->dev,
   "Unsupported chip (man_id=0x%04X, chip_id=0x%02X)\n",
   VAR_10, VAR_11);
  return -VAR_0;
 }

 FUNC_2(VAR_8->type, "w83l786ng", VAR_2);

 return 0;
}
