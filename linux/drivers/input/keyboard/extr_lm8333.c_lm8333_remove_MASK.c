
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm8333 {int input; } ;
struct i2c_client {int irq; } ;


 int FUNC_0 (int ,struct lm8333*) ;
 struct lm8333* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct lm8333*) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_0)
{
 struct lm8333 *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_0->irq, VAR_1);
 FUNC_2(VAR_1->input);
 FUNC_3(VAR_1);

 return 0;
}
