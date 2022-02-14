
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct stk8312_data {struct i2c_client* client; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct i2c_client*,int) ;

__attribute__((used)) static int FUNC_2(struct stk8312_data *VAR_1, u8 VAR_2)
{
 int VAR_3;
 struct i2c_client *VAR_4 = VAR_1->client;

 if (VAR_2 > 2)
  return -VAR_0;

 VAR_3 = FUNC_1(VAR_4, VAR_2);
 if (VAR_3 < 0)
  FUNC_0(&VAR_4->dev, "register read failed\n");

 return VAR_3;
}
