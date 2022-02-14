
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct stk8ba50_data {struct i2c_client* client; } ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct i2c_client*,int ) ;

__attribute__((used)) static int FUNC_2(struct stk8ba50_data *VAR_0, u8 VAR_1)
{
 int VAR_2;
 struct i2c_client *VAR_3 = VAR_0->client;

 VAR_2 = FUNC_1(VAR_3, VAR_1);
 if (VAR_2 < 0) {
  FUNC_0(&VAR_3->dev, "register read failed\n");
  return VAR_2;
 }

 return VAR_2;
}
