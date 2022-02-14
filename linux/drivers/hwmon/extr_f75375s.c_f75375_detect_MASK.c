
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct i2c_client {struct i2c_adapter* adapter; } ;
struct i2c_board_info {int type; } ;
struct i2c_adapter {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,char const*,int ) ;
 int FUNC_1 (struct i2c_client*,int ) ;
 int FUNC_2 (struct i2c_client*,int ) ;
 int FUNC_3 (int ,char const*,int ) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_5,
    struct i2c_board_info *VAR_6)
{
 struct i2c_adapter *VAR_7 = VAR_5->adapter;
 u16 VAR_8, VAR_9;
 u8 VAR_10;
 const char *VAR_11;

 VAR_8 = FUNC_1(VAR_5, VAR_2);
 VAR_9 = FUNC_1(VAR_5, VAR_1);
 if (VAR_8 != 0x1934)
  return -VAR_0;

 if (VAR_9 == 0x0306)
  VAR_11 = "f75375";
 else if (VAR_9 == 0x0204)
  VAR_11 = "f75373";
 else if (VAR_9 == 0x0410)
  VAR_11 = "f75387";
 else
  return -VAR_0;

 VAR_10 = FUNC_2(VAR_5, VAR_3);
 FUNC_0(&VAR_7->dev, "found %s version: %02X\n", VAR_11, VAR_10);
 FUNC_3(VAR_6->type, VAR_11, VAR_4);

 return 0;
}
