
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sprd_i2c {int dev; } ;
struct i2c_msg {int dummy; } ;
struct i2c_adapter {struct sprd_i2c* algo_data; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct i2c_adapter*,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_4(struct i2c_adapter *VAR_0,
    struct i2c_msg *VAR_1, int VAR_2)
{
 struct sprd_i2c *VAR_3 = VAR_0->algo_data;
 int VAR_4, VAR_5;

 VAR_5 = FUNC_0(VAR_3->dev);
 if (VAR_5 < 0)
  return VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_2 - 1; VAR_4++) {
  VAR_5 = FUNC_3(VAR_0, &VAR_1[VAR_4], 0);
  if (VAR_5)
   goto err_msg;
 }

 VAR_5 = FUNC_3(VAR_0, &VAR_1[VAR_4++], 1);

err_msg:
 FUNC_1(VAR_3->dev);
 FUNC_2(VAR_3->dev);

 return VAR_5 < 0 ? VAR_5 : VAR_4;
}
