
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
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (struct i2c_adapter*,int ) ;
 int FUNC_2 (struct i2c_client*,int ) ;
 int FUNC_3 (int ,char const*,int ) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_6, struct i2c_board_info *VAR_7)
{
 struct i2c_adapter *VAR_8 = VAR_6->adapter;
 const char *VAR_9;
 u8 VAR_10, VAR_11;

 if (!FUNC_1(VAR_8, VAR_1))
  return -VAR_0;

 if (FUNC_2(VAR_6, VAR_4) & 0x80)
  return -VAR_0;


 VAR_10 = FUNC_2(VAR_6, VAR_3);
 VAR_11 = FUNC_2(VAR_6, VAR_5);

 if (VAR_10 == 0x02
  && (VAR_11 >= 0x01 && VAR_11 <= 0x08))
  VAR_9 = "lm87";
 else if (VAR_10 == 0x41
       && (VAR_11 & 0xf0) == 0x10)
  VAR_9 = "adm1024";
 else {
  FUNC_0(&VAR_8->dev, "LM87 detection failed at 0x%02x\n",
   VAR_6->addr);
  return -VAR_0;
 }

 FUNC_3(VAR_7->type, VAR_9, VAR_2);

 return 0;
}
