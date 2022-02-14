
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dev; } ;
struct auo_pixcir_ts_platdata {scalar_t__ int_setting; } ;
struct auo_pixcir_ts {int touch_ind_mode; struct auo_pixcir_ts_platdata* pdata; struct i2c_client* client; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int ,int) ;
 int FUNC_1 (struct i2c_client*,int ) ;
 int FUNC_2 (struct i2c_client*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct auo_pixcir_ts *VAR_4,
        int VAR_5)
{
 struct i2c_client *VAR_6 = VAR_4->client;
 const struct auo_pixcir_ts_platdata *VAR_7 = VAR_4->pdata;
 int VAR_8;

 VAR_8 = FUNC_1(VAR_6, VAR_3);
 if (VAR_8 < 0) {
  FUNC_0(&VAR_6->dev, "unable to read reg %Xh, %d\n",
   VAR_3, VAR_8);
  return VAR_8;
 }

 VAR_8 &= ~VAR_0;
 VAR_8 |= VAR_5;
 VAR_8 |= VAR_1;

 VAR_8 = FUNC_2(VAR_6, VAR_3,
     VAR_8);
 if (VAR_8 < 0) {
  FUNC_0(&VAR_6->dev, "unable to write reg %Xh, %d\n",
   VAR_3, VAR_8);
  return VAR_8;
 }

 VAR_4->touch_ind_mode = VAR_7->int_setting == VAR_2;

 return 0;
}
