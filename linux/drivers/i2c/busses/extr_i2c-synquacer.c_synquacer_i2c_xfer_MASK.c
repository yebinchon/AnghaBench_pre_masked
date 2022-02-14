
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct synquacer_i2c {int timeout_ms; int dev; } ;
struct i2c_msg {int dummy; } ;
struct i2c_adapter {int retries; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct synquacer_i2c*,struct i2c_msg*,int) ;
 int FUNC_1 (int ,char*,int) ;
 struct synquacer_i2c* FUNC_2 (struct i2c_adapter*) ;
 int FUNC_3 (struct synquacer_i2c*,struct i2c_msg*,int) ;
 int FUNC_4 (struct synquacer_i2c*) ;

__attribute__((used)) static int FUNC_5(struct i2c_adapter *VAR_2, struct i2c_msg *VAR_3,
         int VAR_4)
{
 struct synquacer_i2c *VAR_5;
 int VAR_6;
 int VAR_7;

 VAR_5 = FUNC_2(VAR_2);
 VAR_5->timeout_ms = FUNC_0(VAR_5, VAR_3, VAR_4);

 FUNC_1(VAR_5->dev, "calculated timeout %d ms\n", VAR_5->timeout_ms);

 for (VAR_6 = 0; VAR_6 <= VAR_2->retries; VAR_6++) {
  VAR_7 = FUNC_3(VAR_5, VAR_3, VAR_4);
  if (VAR_7 != -VAR_0)
   return VAR_7;

  FUNC_1(VAR_5->dev, "Retrying transmission (%d)\n", VAR_6);

  FUNC_4(VAR_5);
 }
 return -VAR_1;
}
