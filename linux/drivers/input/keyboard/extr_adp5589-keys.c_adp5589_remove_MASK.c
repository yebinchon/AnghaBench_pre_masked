
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_client {int irq; } ;
struct adp5589_kpad {int input; TYPE_1__* var; } ;
struct TYPE_2__ {int (* reg ) (int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct adp5589_kpad*) ;
 int FUNC_1 (struct i2c_client*,int ,int ) ;
 int FUNC_2 (int ,struct adp5589_kpad*) ;
 struct adp5589_kpad* FUNC_3 (struct i2c_client*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct adp5589_kpad*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct i2c_client *VAR_1)
{
 struct adp5589_kpad *VAR_2 = FUNC_3(VAR_1);

 FUNC_1(VAR_1, VAR_2->var->reg(VAR_0), 0);
 FUNC_2(VAR_1->irq, VAR_2);
 FUNC_4(VAR_2->input);
 FUNC_0(VAR_2);
 FUNC_5(VAR_2);

 return 0;
}
