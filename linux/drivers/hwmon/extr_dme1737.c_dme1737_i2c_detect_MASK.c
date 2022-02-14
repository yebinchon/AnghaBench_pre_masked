
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct i2c_client {int addr; struct i2c_adapter* adapter; } ;
struct i2c_board_info {int type; } ;
struct device {int dummy; } ;
struct i2c_adapter {struct device dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct device*,char*,char*,int ,scalar_t__) ;
 int FUNC_1 (struct i2c_adapter*,int ) ;
 scalar_t__ FUNC_2 (struct i2c_client*,int ) ;
 int FUNC_3 (int ,char const*,int ) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_9,
         struct i2c_board_info *VAR_10)
{
 struct i2c_adapter *VAR_11 = VAR_9->adapter;
 struct device *VAR_12 = &VAR_11->dev;
 u8 VAR_13, VAR_14 = 0;
 const char *VAR_15;

 if (!FUNC_1(VAR_11, VAR_6))
  return -VAR_5;

 VAR_13 = FUNC_2(VAR_9, VAR_1);
 VAR_14 = FUNC_2(VAR_9, VAR_2);

 if (VAR_13 == VAR_0 &&
     VAR_14 == VAR_8) {
  VAR_15 = "sch5027";
 } else if (VAR_13 == VAR_0 &&
     (VAR_14 & VAR_4) == VAR_3) {
  VAR_15 = "dme1737";
 } else {
  return -VAR_5;
 }

 FUNC_0(VAR_12, "Found a %s chip at 0x%02x (rev 0x%02x).\n",
   VAR_14 == VAR_8 ? "SCH5027" : "DME1737",
   VAR_9->addr, VAR_14);
 FUNC_3(VAR_10->type, VAR_15, VAR_7);

 return 0;
}
