
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {struct i2c_adapter* adapter; } ;
struct i2c_board_info {int type; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct i2c_adapter*,int ) ;
 int FUNC_1 (struct i2c_client*,int ) ;
 int FUNC_2 (int ,char*,int ) ;

__attribute__((used)) static int
FUNC_3(struct i2c_client *VAR_5, struct i2c_board_info *VAR_6)
{
 struct i2c_adapter *VAR_7 = VAR_5->adapter;
 int VAR_8, VAR_9;

 if (!FUNC_0(VAR_7, VAR_1))
  return -VAR_0;

 VAR_8 = FUNC_1(VAR_5, VAR_3);
 if (VAR_8 != 0x5D)
  return -VAR_0;

 VAR_9 = FUNC_1(VAR_5, VAR_4);
 if ((VAR_9 != 0x24) && (VAR_9 != 0x26))
  return -VAR_0;

 FUNC_2(VAR_6->type, "emc2103", VAR_2);

 return 0;
}
