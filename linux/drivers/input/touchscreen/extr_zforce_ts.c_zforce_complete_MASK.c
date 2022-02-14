
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zforce_ts {int command_waiting; int command_result; int command_done; struct i2c_client* client; } ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int) ;

__attribute__((used)) static void FUNC_2(struct zforce_ts *VAR_0, int VAR_1, int VAR_2)
{
 struct i2c_client *VAR_3 = VAR_0->client;

 if (VAR_0->command_waiting == VAR_1) {
  FUNC_1(&VAR_3->dev, "completing command 0x%x\n", VAR_1);
  VAR_0->command_result = VAR_2;
  FUNC_0(&VAR_0->command_done);
 } else {
  FUNC_1(&VAR_3->dev, "command %d not for us\n", VAR_1);
 }
}
