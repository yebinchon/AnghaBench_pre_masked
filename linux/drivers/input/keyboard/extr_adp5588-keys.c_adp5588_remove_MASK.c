
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int irq; } ;
struct adp5588_kpad {int input; int work; } ;


 int VAR_0 ;
 int FUNC_0 (struct adp5588_kpad*) ;
 int FUNC_1 (struct i2c_client*,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,struct adp5588_kpad*) ;
 struct adp5588_kpad* FUNC_4 (struct i2c_client*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct adp5588_kpad*) ;

__attribute__((used)) static int FUNC_7(struct i2c_client *VAR_1)
{
 struct adp5588_kpad *VAR_2 = FUNC_4(VAR_1);

 FUNC_1(VAR_1, VAR_0, 0);
 FUNC_3(VAR_1->irq, VAR_2);
 FUNC_2(&VAR_2->work);
 FUNC_5(VAR_2->input);
 FUNC_0(VAR_2);
 FUNC_6(VAR_2);

 return 0;
}
