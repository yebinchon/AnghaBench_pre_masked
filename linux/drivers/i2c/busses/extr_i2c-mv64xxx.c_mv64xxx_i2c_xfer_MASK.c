
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv64xxx_i2c_data {int num_msgs; struct i2c_msg* msgs; } ;
struct i2c_msg {int dummy; } ;
struct i2c_adapter {int dummy; } ;


 int FUNC_0 (int ) ;
 struct mv64xxx_i2c_data* FUNC_1 (struct i2c_adapter*) ;
 scalar_t__ FUNC_2 (struct mv64xxx_i2c_data*) ;
 int FUNC_3 (struct mv64xxx_i2c_data*,struct i2c_msg*,int) ;
 int FUNC_4 (struct mv64xxx_i2c_data*) ;

__attribute__((used)) static int
FUNC_5(struct i2c_adapter *VAR_0, struct i2c_msg VAR_1[], int VAR_2)
{
 struct mv64xxx_i2c_data *VAR_3 = FUNC_1(VAR_0);
 int VAR_4, VAR_5 = VAR_2;

 FUNC_0(VAR_3->msgs != ((void*)0));
 VAR_3->msgs = VAR_1;
 VAR_3->num_msgs = VAR_2;

 if (FUNC_2(VAR_3))
  VAR_4 = FUNC_4(VAR_3);
 else
  VAR_4 = FUNC_3(VAR_3, &VAR_1[0], VAR_2 == 1);

 if (VAR_4 < 0)
  VAR_5 = VAR_4;

 VAR_3->num_msgs = 0;
 VAR_3->msgs = ((void*)0);

 return VAR_5;
}
