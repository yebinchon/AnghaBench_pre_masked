
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct stk8312_data {int range; int mode; struct i2c_client* client; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct i2c_client*,int ) ;
 int FUNC_2 (struct i2c_client*,int ,int) ;
 int FUNC_3 (struct stk8312_data*,int) ;

__attribute__((used)) static int FUNC_4(struct stk8312_data *VAR_5, u8 VAR_6)
{
 int VAR_7;
 u8 VAR_8;
 u8 VAR_9;
 struct i2c_client *VAR_10 = VAR_5->client;

 if (VAR_6 != 1 && VAR_6 != 2)
  return -VAR_0;
 else if (VAR_6 == VAR_5->range)
  return 0;

 VAR_9 = VAR_5->mode;

 VAR_7 = FUNC_3(VAR_5, VAR_1);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_7 = FUNC_1(VAR_10, VAR_2);
 if (VAR_7 < 0)
  goto err_activate;

 VAR_8 = VAR_7 & (~VAR_3);
 VAR_8 |= VAR_6 << VAR_4;

 VAR_7 = FUNC_2(VAR_10, VAR_2, VAR_8);
 if (VAR_7 < 0)
  goto err_activate;

 VAR_5->range = VAR_6;

 return FUNC_3(VAR_5, VAR_9);

err_activate:
 FUNC_0(&VAR_10->dev, "failed to change sensor range\n");
 FUNC_3(VAR_5, VAR_9);

 return VAR_7;
}
