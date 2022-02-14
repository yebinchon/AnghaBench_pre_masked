
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tda10071_dev {int cmd_execute_mutex; int regmap; int warm; struct i2c_client* client; } ;
struct tda10071_cmd {int len; int args; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int,int ,int ) ;
 int FUNC_4 (int ,int,unsigned int*) ;
 int FUNC_5 (int ,int,int) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static int FUNC_7(struct tda10071_dev *VAR_2,
 struct tda10071_cmd *VAR_3)
{
 struct i2c_client *VAR_4 = VAR_2->client;
 int VAR_5, VAR_6;
 unsigned int VAR_7;

 if (!VAR_2->warm) {
  VAR_5 = -VAR_0;
  goto error;
 }

 FUNC_1(&VAR_2->cmd_execute_mutex);


 VAR_5 = FUNC_3(VAR_2->regmap, 0x00, VAR_3->args, VAR_3->len);
 if (VAR_5)
  goto error_mutex_unlock;


 VAR_5 = FUNC_5(VAR_2->regmap, 0x1f, 1);
 if (VAR_5)
  goto error_mutex_unlock;


 for (VAR_6 = 1000, VAR_7 = 1; VAR_6 && VAR_7; VAR_6--) {
  VAR_5 = FUNC_4(VAR_2->regmap, 0x1f, &VAR_7);
  if (VAR_5)
   goto error_mutex_unlock;

  FUNC_6(200, 5000);
 }

 FUNC_2(&VAR_2->cmd_execute_mutex);
 FUNC_0(&VAR_4->dev, "loop=%d\n", VAR_6);

 if (VAR_6 == 0) {
  VAR_5 = -VAR_1;
  goto error;
 }

 return VAR_5;
error_mutex_unlock:
 FUNC_2(&VAR_2->cmd_execute_mutex);
error:
 FUNC_0(&VAR_4->dev, "failed=%d\n", VAR_5);
 return VAR_5;
}
