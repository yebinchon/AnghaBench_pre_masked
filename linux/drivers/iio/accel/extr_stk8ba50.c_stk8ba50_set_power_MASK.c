
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct stk8ba50_data {struct i2c_client* client; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct i2c_client*,int ) ;
 int FUNC_2 (struct i2c_client*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct stk8ba50_data *VAR_2, bool VAR_3)
{
 int VAR_4;
 u8 VAR_5;
 struct i2c_client *VAR_6 = VAR_2->client;

 VAR_4 = FUNC_1(VAR_6, VAR_1);
 if (VAR_4 < 0)
  goto exit_err;

 if (VAR_3)
  VAR_5 = VAR_4 | VAR_0;
 else
  VAR_5 = VAR_4 & (~VAR_0);

 VAR_4 = FUNC_2(VAR_6, VAR_1,
     VAR_5);
 if (VAR_4 < 0)
  goto exit_err;

 return VAR_4;

exit_err:
 FUNC_0(&VAR_6->dev, "failed to change sensor mode\n");
 return VAR_4;
}
