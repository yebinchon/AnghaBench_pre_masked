
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int irq; } ;
struct cy8ctmg110 {scalar_t__ reset_pin; scalar_t__ irq_pin; int input; } ;


 int FUNC_0 (struct cy8ctmg110*,int) ;
 int FUNC_1 (struct cy8ctmg110*,int) ;
 int FUNC_2 (int ,struct cy8ctmg110*) ;
 int FUNC_3 (scalar_t__) ;
 struct cy8ctmg110* FUNC_4 (struct i2c_client*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct cy8ctmg110*) ;

__attribute__((used)) static int FUNC_7(struct i2c_client *VAR_0)
{
 struct cy8ctmg110 *VAR_1 = FUNC_4(VAR_0);

 FUNC_1(VAR_1, 1);
 FUNC_0(VAR_1, 0);

 FUNC_2(VAR_0->irq, VAR_1);
 FUNC_5(VAR_1->input);
 FUNC_3(VAR_1->irq_pin);
 if (VAR_1->reset_pin)
  FUNC_3(VAR_1->reset_pin);
 FUNC_6(VAR_1);

 return 0;
}
