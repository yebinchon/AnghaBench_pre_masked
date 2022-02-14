
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int addr; struct i2c_adapter* adapter; } ;
struct i2c_board_info {int type; } ;
struct i2c_adapter {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (struct i2c_adapter*,int ) ;
 int FUNC_3 (struct i2c_client*,int) ;
 int FUNC_4 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_5(
  struct i2c_client *VAR_5,
  struct i2c_board_info *VAR_6)
{
 struct i2c_adapter *VAR_7 = VAR_5->adapter;
 int VAR_8 = VAR_5->addr;
 int VAR_9, VAR_10;

 FUNC_0(&VAR_7->dev, "amc6821_detect called.\n");

 if (!FUNC_2(VAR_7, VAR_3)) {
  FUNC_0(&VAR_7->dev,
   "amc6821: I2C bus doesn't support byte mode, "
   "skipping.\n");
  return -VAR_2;
 }

 VAR_9 = FUNC_3(VAR_5, VAR_1);
 VAR_10 = FUNC_3(VAR_5, VAR_0);
 if (VAR_9 != 0x21 || VAR_10 != 0x49) {
  FUNC_0(&VAR_7->dev,
   "amc6821: detection failed at 0x%02x.\n",
   VAR_8);
  return -VAR_2;
 }





 VAR_9 = FUNC_3(VAR_5, 0x80 | VAR_1);
 VAR_10 = FUNC_3(VAR_5, 0x80 | VAR_0);
 if (VAR_9 != 0x21 || VAR_10 != 0x49) {
  FUNC_0(&VAR_7->dev,
   "amc6821: detection failed at 0x%02x.\n",
   VAR_8);
  return -VAR_2;
 }

 FUNC_1(&VAR_7->dev, "amc6821: chip found at 0x%02x.\n", VAR_8);
 FUNC_4(VAR_6->type, "amc6821", VAR_4);

 return 0;
}
