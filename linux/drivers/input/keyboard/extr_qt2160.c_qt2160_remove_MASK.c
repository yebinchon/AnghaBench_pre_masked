
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qt2160_data {int input; int dwork; } ;
struct i2c_client {scalar_t__ irq; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__,struct qt2160_data*) ;
 struct qt2160_data* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct qt2160_data*) ;
 int FUNC_5 (struct qt2160_data*) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_0)
{
 struct qt2160_data *VAR_1 = FUNC_2(VAR_0);

 FUNC_5(VAR_1);


 if (VAR_0->irq)
  FUNC_1(VAR_0->irq, VAR_1);

 FUNC_0(&VAR_1->dwork);

 FUNC_3(VAR_1->input);
 FUNC_4(VAR_1);

 return 0;
}
