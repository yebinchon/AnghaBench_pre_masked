
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zforce_ts {char command_waiting; int command_result; int command_mutex; int command_done; int access_mutex; struct i2c_client* client; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,char const,...) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (struct i2c_client*,char const*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int ) ;

__attribute__((used)) static int FUNC_7(struct zforce_ts *VAR_3, const char *VAR_4, int VAR_5)
{
 struct i2c_client *VAR_6 = VAR_3->client;
 int VAR_7;

 VAR_7 = FUNC_4(&VAR_3->command_mutex);
 if (!VAR_7) {
  FUNC_1(&VAR_6->dev, "already waiting for a command\n");
  return -VAR_0;
 }

 FUNC_0(&VAR_6->dev, "sending %d bytes for command 0x%x\n",
  VAR_4[1], VAR_4[2]);

 VAR_3->command_waiting = VAR_4[2];

 FUNC_3(&VAR_3->access_mutex);
 VAR_7 = FUNC_2(VAR_6, VAR_4, VAR_5);
 FUNC_5(&VAR_3->access_mutex);
 if (VAR_7 < 0) {
  FUNC_1(&VAR_6->dev, "i2c send data request error: %d\n", VAR_7);
  goto unlock;
 }

 FUNC_0(&VAR_6->dev, "waiting for result for command 0x%x\n", VAR_4[2]);

 if (FUNC_6(&VAR_3->command_done, VAR_2) == 0) {
  VAR_7 = -VAR_1;
  goto unlock;
 }

 VAR_7 = VAR_3->command_result;

unlock:
 FUNC_5(&VAR_3->command_mutex);
 return VAR_7;
}
