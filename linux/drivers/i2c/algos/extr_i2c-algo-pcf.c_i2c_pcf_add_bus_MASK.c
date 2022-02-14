
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_algo_pcf_data {int dummy; } ;
struct i2c_adapter {int * algo; int dev; struct i2c_algo_pcf_data* algo_data; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct i2c_adapter*) ;
 int VAR_0 ;
 int FUNC_3 (struct i2c_algo_pcf_data*) ;

int FUNC_4(struct i2c_adapter *VAR_1)
{
 struct i2c_algo_pcf_data *VAR_2 = VAR_1->algo_data;
 int VAR_3;

 FUNC_0(FUNC_1(&VAR_1->dev, "hw routines registered.\n"));


 VAR_1->algo = &VAR_0;

 if ((VAR_3 = FUNC_3(VAR_2)))
  return VAR_3;

 VAR_3 = FUNC_2(VAR_1);

 return VAR_3;
}
