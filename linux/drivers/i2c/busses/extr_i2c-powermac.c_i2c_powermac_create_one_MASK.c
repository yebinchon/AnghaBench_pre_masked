
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i2c_client {int dummy; } ;
struct i2c_board_info {int addr; int type; } ;
struct i2c_adapter {int dev; } ;


 int FUNC_0 (int *,char*,char const*) ;
 struct i2c_client* FUNC_1 (struct i2c_adapter*,struct i2c_board_info*) ;
 int FUNC_2 (int ,char const*,int) ;

__attribute__((used)) static void FUNC_3(struct i2c_adapter *VAR_0,
           const char *VAR_1,
           u32 VAR_2)
{
 struct i2c_board_info VAR_3 = {};
 struct i2c_client *VAR_4;

 FUNC_2(VAR_3.type, VAR_1, sizeof(VAR_3.type));
 VAR_3.addr = VAR_2;
 VAR_4 = FUNC_1(VAR_0, &VAR_3);
 if (!VAR_4)
  FUNC_0(&VAR_0->dev,
   "i2c-powermac: Failure to register missing %s\n",
   VAR_1);
}
