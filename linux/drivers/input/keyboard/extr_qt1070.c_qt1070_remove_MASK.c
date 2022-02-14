
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qt1070_data {int input; } ;
struct i2c_client {int irq; } ;


 int FUNC_0 (int ,struct qt1070_data*) ;
 struct qt1070_data* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct qt1070_data*) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_0)
{
 struct qt1070_data *VAR_1 = FUNC_1(VAR_0);


 FUNC_0(VAR_0->irq, VAR_1);

 FUNC_2(VAR_1->input);
 FUNC_3(VAR_1);

 return 0;
}
