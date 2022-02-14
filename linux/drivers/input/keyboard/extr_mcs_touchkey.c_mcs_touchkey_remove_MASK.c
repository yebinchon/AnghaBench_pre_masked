
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mcs_touchkey_data {int input_dev; int (* poweron ) (int) ;} ;
struct i2c_client {int irq; } ;


 int FUNC_0 (int ,struct mcs_touchkey_data*) ;
 struct mcs_touchkey_data* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mcs_touchkey_data*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_0)
{
 struct mcs_touchkey_data *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_0->irq, VAR_1);
 if (VAR_1->poweron)
  VAR_1->poweron(0);
 FUNC_2(VAR_1->input_dev);
 FUNC_3(VAR_1);

 return 0;
}
