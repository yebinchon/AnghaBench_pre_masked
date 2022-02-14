
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zforce_ts {struct i2c_client* client; } ;
struct input_dev {int dummy; } ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int *,char*) ;
 struct zforce_ts* FUNC_1 (struct input_dev*) ;
 int FUNC_2 (struct zforce_ts*) ;

__attribute__((used)) static void FUNC_3(struct input_dev *VAR_0)
{
 struct zforce_ts *VAR_1 = FUNC_1(VAR_0);
 struct i2c_client *VAR_2 = VAR_1->client;
 int VAR_3;

 VAR_3 = FUNC_2(VAR_1);
 if (VAR_3)
  FUNC_0(&VAR_2->dev, "stopping zforce failed\n");

 return;
}
