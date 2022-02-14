
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct stk8312_data {int sample_rate_idx; int mode; struct i2c_client* client; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct i2c_client*,int ) ;
 int FUNC_2 (struct i2c_client*,int ,int) ;
 int FUNC_3 (struct stk8312_data*,int) ;

__attribute__((used)) static int FUNC_4(struct stk8312_data *VAR_3, u8 VAR_4)
{
 int VAR_5;
 u8 VAR_6;
 u8 VAR_7;
 struct i2c_client *VAR_8 = VAR_3->client;

 if (VAR_4 == VAR_3->sample_rate_idx)
  return 0;

 VAR_7 = VAR_3->mode;

 VAR_5 = FUNC_3(VAR_3, VAR_0);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_5 = FUNC_1(VAR_8, VAR_1);
 if (VAR_5 < 0)
  goto err_activate;

 VAR_6 = (VAR_5 & (~VAR_2)) | VAR_4;

 VAR_5 = FUNC_2(VAR_8, VAR_1, VAR_6);
 if (VAR_5 < 0)
  goto err_activate;

 VAR_3->sample_rate_idx = VAR_4;

 return FUNC_3(VAR_3, VAR_7);

err_activate:
 FUNC_0(&VAR_8->dev, "failed to set sampling rate\n");
 FUNC_3(VAR_3, VAR_7);

 return VAR_5;
}
