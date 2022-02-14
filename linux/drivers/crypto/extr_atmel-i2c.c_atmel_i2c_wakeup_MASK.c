
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dev; } ;
struct atmel_i2c_client_priv {int wake_token_sz; int wake_token; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int *) ;
 struct atmel_i2c_client_priv* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct i2c_client*,int *,int ) ;
 int FUNC_3 (struct i2c_client*,int ,int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_4)
{
 struct atmel_i2c_client_priv *VAR_5 = FUNC_1(VAR_4);
 u8 VAR_6[VAR_0];
 int VAR_7;






 FUNC_3(VAR_4, VAR_5->wake_token, VAR_5->wake_token_sz);





 FUNC_4(VAR_3, VAR_2);

 VAR_7 = FUNC_2(VAR_4, VAR_6, VAR_1);
 if (VAR_7 < 0)
  return VAR_7;

 return FUNC_0(&VAR_4->dev, VAR_6);
}
