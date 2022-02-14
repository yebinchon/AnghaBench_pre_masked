
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_msg {int dummy; } ;
struct i2c_algo_iop3xx_data {int dummy; } ;
struct i2c_adapter {struct i2c_algo_iop3xx_data* algo_data; } ;


 int FUNC_0 (struct i2c_algo_iop3xx_data*) ;
 int FUNC_1 (struct i2c_adapter*,struct i2c_msg*) ;
 int FUNC_2 (struct i2c_algo_iop3xx_data*) ;
 int FUNC_3 (struct i2c_algo_iop3xx_data*) ;
 int FUNC_4 (struct i2c_algo_iop3xx_data*,int*) ;

__attribute__((used)) static int
FUNC_5(struct i2c_adapter *VAR_0, struct i2c_msg *VAR_1,
    int VAR_2)
{
 struct i2c_algo_iop3xx_data *VAR_3 = VAR_0->algo_data;
 int VAR_4 = 0;
 int VAR_5 = 0;
 int VAR_6;

 FUNC_4(VAR_3, &VAR_6);
 FUNC_2(VAR_3);
 FUNC_0(VAR_3);

 for (VAR_4 = 0; VAR_5 == 0 && VAR_4 != VAR_2; VAR_4++) {
  VAR_5 = FUNC_1(VAR_0, &VAR_1[VAR_4]);
 }

 FUNC_3(VAR_3);

 if(VAR_5)
  return VAR_5;

 return VAR_4;
}
