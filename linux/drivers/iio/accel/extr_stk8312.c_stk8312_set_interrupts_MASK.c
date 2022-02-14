
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct stk8312_data {int mode; struct i2c_client* client; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct i2c_client*,int ,int ) ;
 int FUNC_2 (struct stk8312_data*,int ) ;

__attribute__((used)) static int FUNC_3(struct stk8312_data *VAR_2, u8 VAR_3)
{
 int VAR_4;
 u8 VAR_5;
 struct i2c_client *VAR_6 = VAR_2->client;

 VAR_5 = VAR_2->mode;

 VAR_4 = FUNC_2(VAR_2, VAR_0);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_4 = FUNC_1(VAR_6, VAR_1, VAR_3);
 if (VAR_4 < 0) {
  FUNC_0(&VAR_6->dev, "failed to set interrupts\n");
  FUNC_2(VAR_2, VAR_5);
  return VAR_4;
 }

 return FUNC_2(VAR_2, VAR_5);
}
