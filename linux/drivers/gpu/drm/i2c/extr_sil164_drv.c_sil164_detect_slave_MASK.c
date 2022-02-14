
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_msg {int len; int addr; } ;
struct i2c_client {struct i2c_adapter* adapter; } ;
struct i2c_board_info {int member_0; } ;
struct i2c_adapter {int dummy; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 struct i2c_client* FUNC_1 (struct i2c_adapter*,struct i2c_board_info const*) ;
 int FUNC_2 (struct i2c_adapter*,struct i2c_msg*,int) ;
 int FUNC_3 (struct i2c_adapter*,char*) ;

__attribute__((used)) static struct i2c_client *
FUNC_4(struct i2c_client *VAR_1)
{
 struct i2c_adapter *VAR_2 = VAR_1->adapter;
 struct i2c_msg VAR_3 = {
  .addr = VAR_0,
  .len = 0,
 };
 const struct i2c_board_info VAR_4 = {
  FUNC_0("sil164", VAR_0)
 };

 if (FUNC_2(VAR_2, &VAR_3, 1) != 1) {
  FUNC_3(VAR_2, "No dual-link slave found.");
  return ((void*)0);
 }

 return FUNC_1(VAR_2, &VAR_4);
}
