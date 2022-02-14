
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
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct i2c_client*,int ) ;
 int FUNC_1 (struct i2c_adapter*,int) ;
 int FUNC_2 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_7, struct i2c_board_info *VAR_8)
{
 struct i2c_adapter *VAR_9 = VAR_7->adapter;
 int VAR_10;

 if (!FUNC_1(VAR_9, VAR_4 |
         VAR_5))
  return -VAR_0;


 if ((FUNC_0(VAR_7, VAR_1) != 0x80)
  || (FUNC_0(VAR_7, VAR_2) & 0x80))
  return -VAR_0;


 VAR_10 = FUNC_0(VAR_7, VAR_3);
 if (VAR_10 != 0x00 && VAR_10 != 0x80)
  return -VAR_0;

 FUNC_2(VAR_8->type, "gl518sm", VAR_6);

 return 0;
}
