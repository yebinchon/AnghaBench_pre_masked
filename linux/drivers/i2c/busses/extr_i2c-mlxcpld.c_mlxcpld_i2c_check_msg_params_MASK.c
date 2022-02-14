
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxcpld_i2c_priv {int dev; } ;
struct i2c_msg {int addr; int buf; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct mlxcpld_i2c_priv *VAR_1,
     struct i2c_msg *VAR_2, int VAR_3)
{
 int VAR_4;

 if (!VAR_3) {
  FUNC_0(VAR_1->dev, "Incorrect 0 num of messages\n");
  return -VAR_0;
 }

 if (FUNC_1(VAR_2[0].addr > 0x7f)) {
  FUNC_0(VAR_1->dev, "Invalid address 0x%03x\n",
   VAR_2[0].addr);
  return -VAR_0;
 }

 for (VAR_4 = 0; VAR_4 < VAR_3; ++VAR_4) {
  if (FUNC_1(!VAR_2[VAR_4].buf)) {
   FUNC_0(VAR_1->dev, "Invalid buf in msg[%d]\n",
    VAR_4);
   return -VAR_0;
  }
  if (FUNC_1(VAR_2[0].addr != VAR_2[VAR_4].addr)) {
   FUNC_0(VAR_1->dev, "Invalid addr in msg[%d]\n",
    VAR_4);
   return -VAR_0;
  }
 }

 return 0;
}
