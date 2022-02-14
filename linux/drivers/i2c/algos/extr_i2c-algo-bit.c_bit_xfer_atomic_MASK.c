
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_msg {int dummy; } ;
struct i2c_algo_bit_data {int can_do_atomic; } ;
struct i2c_adapter {int dev; struct i2c_algo_bit_data* algo_data; } ;


 int FUNC_0 (struct i2c_adapter*,struct i2c_msg*,int) ;
 int FUNC_1 (int *,char*) ;

__attribute__((used)) static int FUNC_2(struct i2c_adapter *VAR_0, struct i2c_msg VAR_1[],
      int VAR_2)
{
 struct i2c_algo_bit_data *VAR_3 = VAR_0->algo_data;

 if (!VAR_3->can_do_atomic)
  FUNC_1(&VAR_0->dev, "not flagged for atomic transfers\n");

 return FUNC_0(VAR_0, VAR_1, VAR_2);
}
