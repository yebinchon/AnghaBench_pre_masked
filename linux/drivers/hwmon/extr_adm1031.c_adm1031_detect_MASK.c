
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
 int FUNC_0 (struct i2c_adapter*,int ) ;
 int FUNC_1 (struct i2c_client*,int) ;
 int FUNC_2 (int ,char const*,int ) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_3,
     struct i2c_board_info *VAR_4)
{
 struct i2c_adapter *VAR_5 = VAR_3->adapter;
 const char *VAR_6;
 int VAR_7, VAR_8;

 if (!FUNC_0(VAR_5, VAR_1))
  return -VAR_0;

 VAR_7 = FUNC_1(VAR_3, 0x3d);
 VAR_8 = FUNC_1(VAR_3, 0x3e);

 if (!((VAR_7 == 0x31 || VAR_7 == 0x30) && VAR_8 == 0x41))
  return -VAR_0;
 VAR_6 = (VAR_7 == 0x30) ? "adm1030" : "adm1031";

 FUNC_2(VAR_4->type, VAR_6, VAR_2);

 return 0;
}
